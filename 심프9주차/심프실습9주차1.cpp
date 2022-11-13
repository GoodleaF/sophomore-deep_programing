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
	namedCircle(int radius = 0, string name = "") :Circle()//디폴트 매개변수를 가진 생성자를 작성
	{

	}
	~namedCircle() {
		cout << "Circle " << name << " is deleted" << endl;
	}
	void getCircle(int i) {
		cout << i + 1 << ">> ";//객체 숫자에 따라 크기 증가
		cin >> radius >> name;
	}
};

int main() {
	cout <<"5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	namedCircle circle[5];
	int max = 0;
	for (int i = 0; i < 5; i++) {
		circle[i].getCircle(i);
		if (circle[i].radius > max) {//반지름을 비교하여 가장 큰 반지름의 값을 max에 저장한다
			max = circle[i].radius;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (max == circle[i].radius) {//가장 반지름이 큰 원을 찾는다
			cout << "가장 면적이 큰 원은 " << circle[i].name << "입니다" << endl;
		}
	}
	
	return 0;
}