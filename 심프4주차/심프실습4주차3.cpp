#include <iostream>

using namespace std;

class Area {
public:
	int width, height;//면적의 너비와 높이를 가지는 변수
	int num;//수용가능 인원수
	int weight;//수용인원의 총 무게
	int getNum();//최대 수용 가능 인원수를 계산, 리턴하는 함수
	int getWeight();//수용인원의 총 무게를 계산, 리턴하는 함수
	
	void set(int w, int h);
	void show();
	
	Area() {//면적의 너비와 높이를 1로 초기화하는 매개변수 없는 생성자
		width = 1;
		height = 1;
	}
	Area(int i, int j) {//면적의 너비와 높이값을 매개변수로 받는 생성자
		width = i;
		height = j;
	}
	~Area() {//들어갈 수 있는 인원의 수와 인원의 총 무게를 출력하는 소멸자
		cout << "Area소멸, 최대 수용인원: " << getNum() << "명, 최대 수용 무게: " << getWeight() << "kg" << endl;
	}
};
int Area::getNum() {
	return width * height * 4;
}
int Area::getWeight() {
	return width * height * 280;
}
void Area::set(int w, int h) {//면적의 너비와 높이를 변경하는 함수
	width = w;
	height = h;
}
void Area::show() {//수용된 인원의 수와 무게를 화면에 출력하는 함수
	cout << width * height * 4 << "명, " << width * height * 280 << "kg" << endl;
}
int main() {
	Area a;
	Area b(3, 4);//너비와 높이를 3, 4로 하여 계산.
	a.set(10, 20);//a에서 너비와 높이를 10, 20으로 바꾼다.
	a.show();//너비와 높이가 10, 20일 때의 인원의 수와 무게를 화면에 출력한다.

	cout << b.getNum() << "평, " << b.getWeight() << "kg" << endl;
	return 0;
}