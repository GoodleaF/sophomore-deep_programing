#include <iostream>
using namespace std;

class Circle {
	int radius;//원의 반지름 값
	string name;//원의 이름
public:
	void setCircle(string name, int radius);//이름과 반지름 설정
	double getArea();
	string getName();
};
class CircleManager {
	Circle* p;//Circle 배열에 대한 포인터
	int size;//배열의 크기
public:
	CircleManager(int size);//size 크기의 배열을 동적 생성
	~CircleManager();
	void searchByName();//사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea();//사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};
CircleManager::CircleManager(int size) {//size의 크기에 따라 동적할당
	Circle* p = new Circle[size];
}
CircleManager::~CircleManager() {//동적할당한 메모리 삭제
	delete[size] p;
}
void CircleManager::searchByName() {//이름에 따라 원을 검색한다
	cout << "검색하고자 하는 원의 이름>> ";
	string name;
	cin >> name;
	
	for (int i = 0; i < size; i++) {
		if (name == p.name) {//입력된 이름과 같은 이름을 가진 원이라면
			cout << name << "의 면적은 " << p.radius * p.radius * 3.14 << endl;
		}
	}
}
void CircleManager::searchByArea() {//입력된 크기보다 큰 면적을 가진 원을 출력
	cout << "최소 면적을 정수로 입력하세요 >> ";
	int want;
	cin >> want;
	cout << want << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p.radius * p.radius * 3.14 > want) {
			cout << p.name << "의 면적은 " << p.radius * p.radius * 3.14 << ", ";
		}
	}
}
int main() {
	cout << "원의 개수 >> ";
	int size;
	cin >> size;//배열의 크기를 입력받는다
	if (size <= 0) {
		cout << "양수를 입력하세요.";
	}
	CircleManager circlem(size);//size의 크기를 가진 배열 생성
	
	for (int i = 0; i < size; i++) {//원의 이름과 반지름을 입력받고 배열에 저장한다.
		cout << "원 " << i + 1 << "의 이름과 반지름 >>";//p[0]부터 p[size-1]까지 원의 이름과 반지름을 저장해야 하지만 배열을 부르지 못함
		Circle CircleManager p;
		cin >> p.name >> p.radius;
	}
	circlem.searchByName();//이름을 통해서 원을 검색한다

	circlem.searchByArea();//최소면적을 입력받고 그 면적보다 큰 넓이를 가진 원들을 출력한다
	return 0;
}