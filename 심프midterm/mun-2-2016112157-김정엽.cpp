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
	cout << "Time ��ü: " << hour << ":" << minute << ":" << second << endl;
}
bool Time::isEqual(int& h, int& m, int& s) {//������ ���� ȣ��
	if (hour!=h||minute!=m||second!=s) {
		return false;
	}
	return true;
}
bool Time::isEqual(int* h, int* m, int* s) {//�ּҿ� ���� ȣ��
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
	if (a.isEqual(b.hour,b.minute,b.second)==true) {//a�� b�� �ð��� ���Ѵ�
		cout << "�ð��� ��ġ�մϴ�." << endl;
	}
	else {
		cout << "�ð��� ��ġ���� �ʽ��ϴ�." << endl;
	}
	if (a.isEqual(&b.hour, &b.minute, &b.second) ==true) {//a�� b�� �ð��� �ּҷ� ���Ѵ�
		cout << "�ð��� ��ġ�մϴ�." << endl;
	}
	else {
		cout << "�ð��� ��ġ���� �ʽ��ϴ�." << endl;
	}
}