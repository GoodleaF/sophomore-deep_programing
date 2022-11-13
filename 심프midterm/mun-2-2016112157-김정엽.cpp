#include <iostream>
using namespace std;

class Time {
public:
	int hour, minute, second;
	Time(int h = 0, int m = 0, int s = 0) :hour(h),minute(m),second(s){	}
	void objPrint();
	bool isEqual(int &h, int &m, int &s);
	bool isEqual(int* h, int* m, int* s);
};
void Time::objPrint() {
	cout << "Time 객체: " << hour << ":" << minute << ":" << second << endl;
}
bool Time::isEqual(int& h, int& m, int& s) {//참조에 의한 호출
	if (hour!=h||minute!=m||second!=s) {
		return false;
	}
	return true;
}
bool Time::isEqual(int* h, int* m, int* s) {//주소에 의한 호출
	if (hour != *h || minute != *m || second != *s) {
		return false;
	}
	return true;
}
int main() {
	Time a(12, 11, 33);
	Time b(12, 11, 33);

	a.objPrint();
	b.objPrint();
	if (a.isEqual(b.hour,b.minute,b.second)==true) {//a와 b의 시간을 비교한다
		cout << "시간이 일치합니다." << endl;
	}
	else {
		cout << "시간이 일치하지 않습니다." << endl;
	}
	if (a.isEqual(&b.hour, &b.minute, &b.second) ==true) {//a와 b의 시간을 주소로 비교한다
		cout << "시간이 일치합니다." << endl;
	}
	else {
		cout << "시간이 일치하지 않습니다." << endl;
	}
}