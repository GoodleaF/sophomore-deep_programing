#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	string name;
	
	~Circle() {
		cout << "Circle deleted" << endl;
	}
};
class namedCircle : public Circle {
public:
	namedCircle(int radius = 0, string name = "") :Circle()//����Ʈ �Ű������� ���� �����ڸ� �ۼ�
	{

	}
	~namedCircle() {
		cout << "Circle " << name << " is deleted" << endl;
	}
	void getCircle(int i) {
		cout << i + 1 << ">> ";//��ü ���ڿ� ���� ũ�� ����
		cin >> radius >> name;
	}
};

int main() {
	cout <<"5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	namedCircle circle[5];
	int max = 0;
	for (int i = 0; i < 5; i++) {
		circle[i].getCircle(i);
		if (circle[i].radius > max) {//�������� ���Ͽ� ���� ū �������� ���� max�� �����Ѵ�
			max = circle[i].radius;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (max == circle[i].radius) {//���� �������� ū ���� ã�´�
			cout << "���� ������ ū ���� " << circle[i].name << "�Դϴ�" << endl;
		}
	}
	
	return 0;
}