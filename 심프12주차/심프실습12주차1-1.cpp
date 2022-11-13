#include <iostream>
using namespace std;

class Point {
public:
	int x, y;
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	virtual void show() {//가상함수 show()
		cout << "(" << x << ", " << y << ")에 위치합니다." << endl;
	}
};

class EyePoint : public Point {
public:
	string side;
	EyePoint(int x=0, int y=0, string side="오른쪽") : Point(x,y){//Point 클래스를 상속받아 x, y, side 값을 저장한다
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
}