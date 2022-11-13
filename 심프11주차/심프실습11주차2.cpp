#include<iostream>
using namespace std;

class Employee {
protected:
	string name;
	int age;
	string position;
	int year;
public:
	Employee(string name, int age, string position = "아르바이트") :name(name), age(age), position(position){}
	Employee(){}
	virtual void print_info() {
		cout << name << " (" << position << ", " << age << ") ==> " << calculate_pay() << "만원" << endl;
	}
	virtual int calculate_pay() { return 80; }
};
class Manager :public Employee {
public:
	Manager(string name, int age, int year, string position = "점장") :Employee(name, age, position) {
		this->name = name;
		this->age = age;
		this->year = year;//점장과 정규직부터는 연차가 필요하다
	}
	virtual void print_info() {//가상함수를 사용한다
		cout << name << " (" << position << ", " << age << ") ==> " << calculate_pay(year) << "만원" << endl;
	}
	virtual int calculate_pay(int y){
		int salary = 150 + y * 5;
		return salary;
	}
};
class FullTime :public Employee {
public:
	FullTime(string name, int age, int year, string position = "정규직") :Employee(name, age, position) {
		this->name = name;
		this->age = age;
		this->year = year;
	}
	virtual void print_info() {
		cout << name << " (" << position << ", " << age << ") ==> " << calculate_pay(year) << "만원" << endl;
	}
	virtual int calculate_pay(int y) {
		int salary = 100 + y * 5;
		return salary;
	}
};
int main() {
	Employee e1("김선욱", 22);//각 직급에 해당하는 인원의 정보를 입력받는다.
	Employee e2("김민희", 21);
	Employee e3("송민경", 21);
	Manager m1("남윤성", 40, 7);
	Manager m2("남소윤", 38, 4);
	FullTime f1("이혜림", 43, 5);
	FullTime f2("조은수", 36, 2);
	e1.print_info();//각 인원의 정보를 출력한다
	e2.print_info();
	e3.print_info();
	m1.print_info();
	m2.print_info();
	f1.print_info();
	f2.print_info();
	int result;
	result = e1.calculate_pay() + e2.calculate_pay() + e3.calculate_pay() +//총 비용을 계산한다
		m1.calculate_pay(7) + m2.calculate_pay(4) +
		f1.calculate_pay(5) + f2.calculate_pay(2);
	cout << "총 비용 : " << result << "만원";
}