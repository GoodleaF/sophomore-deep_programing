#include <iostream>
using namespace std;

class Point {//순수 가상 함수 show()를 포함하고 있으므로 추상클래스가 된다
public:
	int x, y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	virtual void show() = 0;//순수 가상 함수
};

class EyePoint : public Point {//순수 가상 함수 show()를 정의해야만 인스턴스를 생성할 수 있게 된다
public:
	string side;
	EyePoint(int x = 0, int y = 0, string side = "오른쪽") : Point(x, y) {
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
		cout << side << "눈으로 (" << x << ", " << y << ")에 위치합니다." << endl;
	}
};
int main() {
	EyePoint zeroPoint;
	zeroPoint.show();

	EyePoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setname("왼쪽");
	cp.show();

	return 0;
}