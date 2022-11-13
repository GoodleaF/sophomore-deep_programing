#include <iostream>

using namespace std;

class Area {
public:
	int width, height;//������ �ʺ�� ���̸� ������ ����
	int num;//���밡�� �ο���
	int weight;//�����ο��� �� ����
	int getNum();//�ִ� ���� ���� �ο����� ���, �����ϴ� �Լ�
	int getWeight();//�����ο��� �� ���Ը� ���, �����ϴ� �Լ�
	
	void set(int w, int h);
	void show();
	
	Area() {//������ �ʺ�� ���̸� 1�� �ʱ�ȭ�ϴ� �Ű����� ���� ������
		width = 1;
		height = 1;
	}
	Area(int i, int j) {//������ �ʺ�� ���̰��� �Ű������� �޴� ������
		width = i;
		height = j;
	}
	~Area() {//�� �� �ִ� �ο��� ���� �ο��� �� ���Ը� ����ϴ� �Ҹ���
		cout << "Area�Ҹ�, �ִ� �����ο�: " << getNum() << "��, �ִ� ���� ����: " << getWeight() << "kg" << endl;
	}
};
int Area::getNum() {
	return width * height * 4;
}
int Area::getWeight() {
	return width * height * 280;
}
void Area::set(int w, int h) {//������ �ʺ�� ���̸� �����ϴ� �Լ�
	width = w;
	height = h;
}
void Area::show() {//����� �ο��� ���� ���Ը� ȭ�鿡 ����ϴ� �Լ�
	cout << width * height * 4 << "��, " << width * height * 280 << "kg" << endl;
}
int main() {
	Area a;
	Area b(3, 4);//�ʺ�� ���̸� 3, 4�� �Ͽ� ���.
	a.set(10, 20);//a���� �ʺ�� ���̸� 10, 20���� �ٲ۴�.
	a.show();//�ʺ�� ���̰� 10, 20�� ���� �ο��� ���� ���Ը� ȭ�鿡 ����Ѵ�.

	cout << b.getNum() << "��, " << b.getWeight() << "kg" << endl;
	return 0;
}