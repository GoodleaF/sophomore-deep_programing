#include <iostream>
using namespace std;

class HomeAppliance {
public:
	int price;
	double size;
	string model, color;
	bool a;
	HomeAppliance(int n=0, string a="", string b="", double n2=0, bool t=false) {//디폴트 생성자
		price = n;
		model = a;
		color = b;
		size = n2;
		a = t;
	}
	void print() {//Refrigerator, Washer, Humidifier 모두 HomeApplliance 클래스를 상속받았으므로 print()함수를 사용할 수 있다.
		cout << "품명 : " << model << endl;
		cout << "가격 : " << price << endl;
		cout << "색상 : " << color << endl;
		if (size != 0) {
			cout << "용량 : " << size << endl;
		}
		if (a == true) {
			cout << "자동 : 1" << endl;
		}
	}
};
class Refrigerator :public HomeAppliance {//Refrigerator 클래스에서 매개변수 값들을 받을 수 있도록 정의해줍니다
public:
	Refrigerator(int n = 0, string a = "", string b = "", double n2 = 0, bool t= false) :HomeAppliance() {
		price = n;
		model = a;
		color = b;
		size = n2;
		a = t;
	}
};
class Washer :public HomeAppliance {//Washer 클래스에서 매개변수 값들을 받을 수 있도록 정의해줍니다
public:
	Washer(int n = 0, string a = "", string b = "", double n2 = 0, bool t = false) :HomeAppliance() {
		price = n;
		model = a;
		color = b;
		size = n2;
		a = t;
	}
};
class Humidifier :public HomeAppliance {//Humidifier 클래스에서 매개변수 값들을 받을 수 있도록 정의해줍니다
public:
	Humidifier(int n = 0, string a = "", string b = "", double n2 = 0, bool t = false) :HomeAppliance() {
		price = n;
		model = a;
		color = b;
		size = n2;
		a = t;
	}
};
int main() {
	HomeAppliance* homeApp;
	cout << ">>냉장고<<" << endl;
	homeApp = new Refrigerator(700000, "클라쎄", "화이트", 600);
	homeApp->print();

	cout << ">>세탁기<<" << endl;
	homeApp = new Washer(500000, "클라쎄", "화이트", 8.8);
	homeApp->print();

	cout << ">>가습기<<" << endl;
	homeApp = new Humidifier(800000, "M-60MFP", "핑크", true);
	homeApp->print();

	return 0;
}