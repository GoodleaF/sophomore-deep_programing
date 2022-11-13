#include <iostream>
using namespace std;

class Calc {
public:
	int n1, n2;
	Calc(int n1=0,int n2=0) {
		this->n1 = n1;
		this->n2 = n2;
	}
	void printNum() {
		cout << "---Calc::CalcPrn---" << endl;//매개변수로 받은 값을 출력한다
		cout << n1 << "\t" << n2;
	}
};
class Add :public Calc {
public:
	int result;
	Add(int num1 = 0,int num2 = 0):Calc(num1, num2) {//값을 매개변수로 받아 result 값을 구한다
		result = num1 + num2;
	}
	void print() {
		cout << "---Add::AddPrn---" << endl;
		cout << result << endl;
	}
};
int main() {
	int n1, n2;
	cout << "put two numbers" << endl;
	cin >> n1 >> n2;
	Add add(n1, n2);//덧셈을 시행할 값을 입력받는다
	Add* a = &add;
	Calc* b = a;//업캐스팅을 이용해서 출력한다
	a->print();
	b->printNum();
	return 0;
}