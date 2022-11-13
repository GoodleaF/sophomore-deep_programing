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
	virtual void print() {//print()�Լ��� ��ȣ���� �ذ����ֱ� ���� virtual �� ����Ѵ�
		cout << "�Ϲ�ȸ��" << endl;
		cout << "�̸�\t\t:" << name << endl;
		cout << "�ּ�\t\t:" << place << endl;
		cout << "�޴�����ȣ\t:" << phone << endl << endl;
	}
};

class Customer : public Person {//Person Ŭ������ ��ӹ޾����Ƿ� name, place, phone �� ������ �����ϴ�
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
		cout << "ȸ��" << endl;
		cout << "�̸�\t\t:" << name << endl;
		cout << "�ּ�\t\t:" << place << endl;
		cout << "�޴�����ȣ\t:" << phone << endl;
		cout << "���̵�\t\t:" << id << endl;
		cout << "����Ʈ����\t:" << point << endl;
	}
};

int main() {
	Person person("�赿��", "����", "01024752268");
	Customer customer("�յ���", "���", "01078459685", "kiko02", 0);
	person.print();
	customer.print();
	return 0;
}