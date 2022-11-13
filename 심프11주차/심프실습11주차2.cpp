#include<iostream>
using namespace std;

class Employee {
protected:
	string name;
	int age;
	string position;
	int year;
public:
	Employee(string name, int age, string position = "�Ƹ�����Ʈ") :name(name), age(age), position(position){}
	Employee(){}
	virtual void print_info() {
		cout << name << " (" << position << ", " << age << ") ==> " << calculate_pay() << "����" << endl;
	}
	virtual int calculate_pay() { return 80; }
};
class Manager :public Employee {
public:
	Manager(string name, int age, int year, string position = "����") :Employee(name, age, position) {
		this->name = name;
		this->age = age;
		this->year = year;//����� ���������ʹ� ������ �ʿ��ϴ�
	}
	virtual void print_info() {//�����Լ��� ����Ѵ�
		cout << name << " (" << position << ", " << age << ") ==> " << calculate_pay(year) << "����" << endl;
	}
	virtual int calculate_pay(int y){
		int salary = 150 + y * 5;
		return salary;
	}
};
class FullTime :public Employee {
public:
	FullTime(string name, int age, int year, string position = "������") :Employee(name, age, position) {
		this->name = name;
		this->age = age;
		this->year = year;
	}
	virtual void print_info() {
		cout << name << " (" << position << ", " << age << ") ==> " << calculate_pay(year) << "����" << endl;
	}
	virtual int calculate_pay(int y) {
		int salary = 100 + y * 5;
		return salary;
	}
};
int main() {
	Employee e1("�輱��", 22);//�� ���޿� �ش��ϴ� �ο��� ������ �Է¹޴´�.
	Employee e2("�����", 21);
	Employee e3("�۹ΰ�", 21);
	Manager m1("������", 40, 7);
	Manager m2("������", 38, 4);
	FullTime f1("������", 43, 5);
	FullTime f2("������", 36, 2);
	e1.print_info();//�� �ο��� ������ ����Ѵ�
	e2.print_info();
	e3.print_info();
	m1.print_info();
	m2.print_info();
	f1.print_info();
	f2.print_info();
	int result;
	result = e1.calculate_pay() + e2.calculate_pay() + e3.calculate_pay() +//�� ����� ����Ѵ�
		m1.calculate_pay(7) + m2.calculate_pay(4) +
		f1.calculate_pay(5) + f2.calculate_pay(2);
	cout << "�� ��� : " << result << "����";
}