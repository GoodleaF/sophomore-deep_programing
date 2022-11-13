#include <iostream>

using namespace std;

class Person {
public:
	string name;
	string place;
	string phone;
	
	Person(string a="", string b="", string c="") {
		name = a;
		place = b;
		phone = c;
	}
	virtual void print() {//print()함수의 모호성을 해결해주기 위해 virtual 을 사용한다
		cout << "일반회원" << endl;
		cout << "이름\t\t:" << name << endl;
		cout << "주소\t\t:" << place << endl;
		cout << "휴대폰번호\t:" << phone << endl << endl;
	}
};

class Customer : public Person {//Person 클래스를 상속받았으므로 name, place, phone 에 접근이 가능하다
public:
	string id;
	int point;
	Customer(string a="", string b="", string c="", string d="", int e=0) :Person(){
		name = a;
		place = b;
		phone = c;
		id = d;
		point = e;
	}
	void print() {
		cout.setf(ios::left);
		cout << "회원" << endl;
		cout << "이름\t\t:" << name << endl;
		cout << "주소\t\t:" << place << endl;
		cout << "휴대폰번호\t:" << phone << endl;
		cout << "아이디\t\t:" << id << endl;
		cout << "포인트점수\t:" << point << endl;
	}
};

int main() {
	Person person("김동휘", "장지", "01024752268");
	Customer customer("손동복", "잠실", "01078459685", "kiko02", 0);
	person.print();
	customer.print();
	return 0;
}