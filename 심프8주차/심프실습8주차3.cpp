#include <iostream>
using namespace std;

class Time {
public:
	int hour, minute, second;
	void setTime();//시, 분, 초를 입력받는다
	void show();//시, 분, 초를 출력한다
	Time operator +(Time t);//Time의 시,분,초를 각각 더한다
};
void Time::setTime() {
	cout << "시간을 입력하세요(0-11) ";
	cin >> hour;
	cout << "분(分)을 입력하세요(0-59) ";
	cin >> minute;
	cout << "초를 입력하세요(0-59) ";
	cin >> second;
}
void Time::show() {
	if (second >= 60) {//60초 이상이라면 1분이 넘었으므로
		second -= 60;
		minute++;
	}
	if (minute >= 60) {//60분 이상이라면 1시간이 넘었으므로
		minute -= 60;
		hour++;
	}
	cout << hour << ":" << minute << ":" << second;
}
Time Time::operator +(Time t) {//Time을 더하게 된다면 각각의 시, 분, 초를 더한다
	Time A;
	A.hour = this->hour + t.hour;
	A.minute = this->minute + t.minute;
	A.second = this->second + t.second;
	return A;
}
void main() {
	Time t1, t2, t3;
	
	cout << "\n첫 번째 측정한 시간을 입력하세요\n";
	t1.setTime();//t1의 시분초를 입력받는다
	
	cout << "\n두 번째 측정한 시간을 입력하세요\n";
	t2.setTime();//t2의 시분초를 입력받는다.

	t3 = t1 + t2;//t1과 t2의 시분초를 각각 더한다

	cout << "\n첫 번째 ";
	t1.show();//t1의 시간 출력
	cout << "\n두 번째 ";
	t2.show();//t2의 시간 출력
	cout << "\n총 시간 ";
	t3.show();//t3의 시간 출력
}