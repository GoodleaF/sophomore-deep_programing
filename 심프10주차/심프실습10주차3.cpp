#include <iostream>
using namespace std;

class HomeAppliance {
public:
	int price;
	double size;
	string model, color;
	bool a;
	HomeAppliance(int n=0, string a="", string b="", double n2=0, bool t=false) {//����Ʈ ������
		price = n;
		model = a;
		color = b;
		size = n2;
		a = t;
	}
	void print() {//Refrigerator, Washer, Humidifier ��� HomeApplliance Ŭ������ ��ӹ޾����Ƿ� print()�Լ��� ����� �� �ִ�.
		cout << "ǰ�� : " << model << endl;
		cout << "���� : " << price << endl;
		cout << "���� : " << color << endl;
		if (size != 0) {
			cout << "�뷮 : " << size << endl;
		}
		if (a == true) {
			cout << "�ڵ� : 1" << endl;
		}
	}
};
class Refrigerator :public HomeAppliance {//Refrigerator Ŭ�������� �Ű����� ������ ���� �� �ֵ��� �������ݴϴ�
public:
	Refrigerator(int n = 0, string a = "", string b = "", double n2 = 0, bool t= false) :HomeAppliance() {
		price = n;
		model = a;
		color = b;
		size = n2;
		a = t;
	}
};
class Washer :public HomeAppliance {//Washer Ŭ�������� �Ű����� ������ ���� �� �ֵ��� �������ݴϴ�
public:
	Washer(int n = 0, string a = "", string b = "", double n2 = 0, bool t = false) :HomeAppliance() {
		price = n;
		model = a;
		color = b;
		size = n2;
		a = t;
	}
};
class Humidifier :public HomeAppliance {//Humidifier Ŭ�������� �Ű����� ������ ���� �� �ֵ��� �������ݴϴ�
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
	cout << ">>�����<<" << endl;
	homeApp = new Refrigerator(700000, "Ŭ���", "ȭ��Ʈ", 600);
	homeApp->print();

	cout << ">>��Ź��<<" << endl;
	homeApp = new Washer(500000, "Ŭ���", "ȭ��Ʈ", 8.8);
	homeApp->print();

	cout << ">>������<<" << endl;
	homeApp = new Humidifier(800000, "M-60MFP", "��ũ", true);
	homeApp->print();

	return 0;
}