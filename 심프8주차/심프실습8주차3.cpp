#include <iostream>
using namespace std;

class Time {
public:
	int hour, minute, second;
	void setTime();//��, ��, �ʸ� �Է¹޴´�
	void show();//��, ��, �ʸ� ����Ѵ�
	Time operator +(Time t);//Time�� ��,��,�ʸ� ���� ���Ѵ�
};
void Time::setTime() {
	cout << "�ð��� �Է��ϼ���(0-11) ";
	cin >> hour;
	cout << "��(��)�� �Է��ϼ���(0-59) ";
	cin >> minute;
	cout << "�ʸ� �Է��ϼ���(0-59) ";
	cin >> second;
}
void Time::show() {
	if (second >= 60) {//60�� �̻��̶�� 1���� �Ѿ����Ƿ�
		second -= 60;
		minute++;
	}
	if (minute >= 60) {//60�� �̻��̶�� 1�ð��� �Ѿ����Ƿ�
		minute -= 60;
		hour++;
	}
	cout << hour << ":" << minute << ":" << second;
}
Time Time::operator +(Time t) {//Time�� ���ϰ� �ȴٸ� ������ ��, ��, �ʸ� ���Ѵ�
	Time A;
	A.hour = this->hour + t.hour;
	A.minute = this->minute + t.minute;
	A.second = this->second + t.second;
	return A;
}
void main() {
	Time t1, t2, t3;
	
	cout << "\nù ��° ������ �ð��� �Է��ϼ���\n";
	t1.setTime();//t1�� �ú��ʸ� �Է¹޴´�
	
	cout << "\n�� ��° ������ �ð��� �Է��ϼ���\n";
	t2.setTime();//t2�� �ú��ʸ� �Է¹޴´�.

	t3 = t1 + t2;//t1�� t2�� �ú��ʸ� ���� ���Ѵ�

	cout << "\nù ��° ";
	t1.show();//t1�� �ð� ���
	cout << "\n�� ��° ";
	t2.show();//t2�� �ð� ���
	cout << "\n�� �ð� ";
	t3.show();//t3�� �ð� ���
}