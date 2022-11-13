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
student::student(int n) {//n에 맞춰서 year과 grade의 크기를 할당한다.
	size = n;
	year = new string[n];
	grade = new double[n];
}
student::student(student& s) {//복사 생성자
	this->year = new string;
	this->year, s.year;
	this->grade = new double;
	this->grade, s.grade;
}
void student::DataInput1() {
	cout << "*******************************************************\n";
	cout << "입력" << endl;	
	cout << "연도 : ";	
	for (int i = 0; i < size; i++) {//새로운 연도를 입력받는다.
		cin >> year[i];
	}
	cout << "평점 : ";
	for (int i = 0; i < size; i++) {//새로운 평점을 입력받는다.
		cin >> grade[i];
	}
}
void student::DataInput2() {//처음에 s1을 입력받는다.
	cout << "이름 : ";
	cin >> name;
	cout << "학번 : ";
	cin >> num;
	cout << "연도 : ";
	for (int i = 0; i < size; i++) {
		cin >> year[i];
	}
	cout << "평점 : ";
	for (int i = 0; i < size; i++) {
		cin >> grade[i];
	}
}
void student::show() {
	cout << num << ' ' << name << endl;
	for (int i = 0; i < size; i++) {
		cout << year[i] << "년도 평점 : " << grade[i] << endl;
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