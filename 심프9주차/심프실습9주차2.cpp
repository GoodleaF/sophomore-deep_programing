#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	void getName();
	void printName();
};
void Student::getName() {
	cout << "Enter student's name: ";//�̸��� �Է¹޴´�
	cin >> name;
}
void Student::printName() {
	cout << "Student name: " << name << endl;//�Է��� ����Ѵ�
}
class Sports :virtual public Student {
public:
	int sportscore;
	void getsscore();
	void printsscore();
};
void Sports::getsscore() {//������ ������ �Է¹޴´�
	cout << "Enter Sports Score: ";
	cin >> sportscore;
}
void Sports::printsscore() {//������ ������ ����Ѵ�
	cout << "Sports score: " << sportscore << endl;
}
class Tests :virtual public Student {
public:
	int score1, score2;
	void getscore();
	void printscore();
};
void Tests::getscore() {//���������� �Է¹޴´�
	cout << "Enter Score" << endl << "Part1: ";
	cin >> score1;
	cout << "Part2: ";
	cin >> score2;
}
void Tests::printscore() {//���������� ����Ѵ�
	cout << "Other tests' score" << endl;
	cout << "Test1: " << score1 << endl;
	cout << "Test2: " << score2 << endl;
}
class Result :public Sports, public Tests {
public:
	int result;
	void getresult();
};
void Result::getresult() {//������ ����ϰ� ����Ѵ�
	result = score1 + score2 + sportscore;
	cout << "Total Score: " << result;
}
int main() {
	Result final;//student, test, sports�� ��ӹ��� result Ŭ����
	final.getName();//�̸��� ������ �Է¹޴´�
	final.getscore();
	final.getsscore();
	cout << endl;
	final.printName();//�̸��� ����, ������ ����Ѵ�
	final.printscore();
	final.printsscore();
	final.getresult();
}