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
		cout << "---Calc::CalcPrn---" << endl;//�Ű������� ���� ���� ����Ѵ�
		cout << n1 << "\t" << n2;
	}
};
class Add :public Calc {
public:
	int result;
	Add(int num1 = 0,int num2 = 0):Calc(num1, num2) {//���� �Ű������� �޾� result ���� ���Ѵ�
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
	Add add(n1, n2);//������ ������ ���� �Է¹޴´�
	Add* a = &add;
	Calc* b = a;//��ĳ������ �̿��ؼ� ����Ѵ�
	a->print();
	b->printNum();
	return 0;
}