#include <iostream>
using namespace std;

class student {
	int size;
	string name;
	string num;
	string* year;
	double* grade;
public:
	student(int n);
	student(student& s);
	void DataInput1();
	void DataInput2();
	void show();
};
student::student(int n) {//n�� ���缭 year�� grade�� ũ�⸦ �Ҵ��Ѵ�.
	size = n;
	year = new string[n];
	grade = new double[n];
}
student::student(student& s) {//���� ������
	this->year = new string;
	this->year, s.year;
	this->grade = new double;
	this->grade, s.grade;
}
void student::DataInput1() {
	cout << "*******************************************************\n";
	cout << "�Է�" << endl;	
	cout << "���� : ";	
	for (int i = 0; i < size; i++) {//���ο� ������ �Է¹޴´�.
		cin >> year[i];
	}
	cout << "���� : ";
	for (int i = 0; i < size; i++) {//���ο� ������ �Է¹޴´�.
		cin >> grade[i];
	}
}
void student::DataInput2() {//ó���� s1�� �Է¹޴´�.
	cout << "�̸� : ";
	cin >> name;
	cout << "�й� : ";
	cin >> num;
	cout << "���� : ";
	for (int i = 0; i < size; i++) {
		cin >> year[i];
	}
	cout << "���� : ";
	for (int i = 0; i < size; i++) {
		cin >> grade[i];
	}
}
void student::show() {
	cout << num << ' ' << name << endl;
	for (int i = 0; i < size; i++) {
		cout << year[i] << "�⵵ ���� : " << grade[i] << endl;
	}
}
int main() {

	student s1(2);

	s1.DataInput2();
	s1.show();
	
	student s2(s1);

	s2.DataInput1();

	s1.show();
	s2.show();
}