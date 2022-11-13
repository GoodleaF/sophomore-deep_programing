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
	cout << "Enter student's name: ";//이름을 입력받는다
	cin >> name;
}
void Student::printName() {
	cout << "Student name: " << name << endl;//입력을 출력한다
}
class Sports :virtual public Student {
public:
	int sportscore;
	void getsscore();
	void printsscore();
};
void Sports::getsscore() {//스포츠 점수를 입력받는다
	cout << "Enter Sports Score: ";
	cin >> sportscore;
}
void Sports::printsscore() {//스포츠 점수를 출력한다
	cout << "Sports score: " << sportscore << endl;
}
class Tests :virtual public Student {
public:
	int score1, score2;
	void getscore();
	void printscore();
};
void Tests::getscore() {//시험점수를 입력받는다
	cout << "Enter Score" << endl << "Part1: ";
	cin >> score1;
	cout << "Part2: ";
	cin >> score2;
}
void Tests::printscore() {//시험점수를 출력한다
	cout << "Other tests' score" << endl;
	cout << "Test1: " << score1 << endl;
	cout << "Test2: " << score2 << endl;
}
class Result :public Sports, public Tests {
public:
	int result;
	void getresult();
};
void Result::getresult() {//총점을 계산하고 출력한다
	result = score1 + score2 + sportscore;
	cout << "Total Score: " << result;
}
int main() {
	Result final;//student, test, sports를 상속받은 result 클래스
	final.getName();//이름과 점수를 입력받는다
	final.getscore();
	final.getsscore();
	cout << endl;
	final.printName();//이름과 점수, 총점을 출력한다
	final.printscore();
	final.printsscore();
	final.getresult();
}