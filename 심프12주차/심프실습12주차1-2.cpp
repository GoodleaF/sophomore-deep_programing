#include <iostream>
using namespace std;

class Point {//���� ���� �Լ� show()�� �����ϰ� �����Ƿ� �߻�Ŭ������ �ȴ�
public:
	int x, y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	virtual void show() = 0;//���� ���� �Լ�
};

class EyePoint : public Point {//���� ���� �Լ� show()�� �����ؾ߸� �ν��Ͻ��� ������ �� �ְ� �ȴ�
public:
	string side;
	EyePoint(int x = 0, int y = 0, string side = "������") : Point(x, y) {
		this->side = side;
	}
	void setPoint(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setname(string side) {
		this->side = side;
	}
	virtual void show() {
		cout << side << "������ (" << x << ", " << y << ")�� ��ġ�մϴ�." << endl;
	}
};
int main() {
	EyePoint zeroPoint;
	zeroPoint.show();

	EyePoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setname("����");
	cp.show();

	return 0;
}