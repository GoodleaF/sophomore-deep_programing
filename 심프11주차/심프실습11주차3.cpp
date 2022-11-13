#include<iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;//n을 푸시 스택이 full이면 false
	virtual bool pop(int& n) = 0;//n을 팝 스택의 크기가 0이면 false
	virtual int size() = 0;//스택의 크기
};

class IntStack :public AbstractStack {
	int sizeofstack;
	int* stack;
	int t;
public:
	IntStack(int s) {
		sizeofstack = s;
		stack = new int[sizeofstack];
		t = -1;
	}
	
	bool push(int n);//순수가상함수를 재정의한다
	bool pop(int& n);
	int size() {
		return t+1;
	}
};
bool IntStack::push(int n) {
	if (t == sizeofstack-1) {
		return false;
	}
	else {
		t++;
		stack[t] = n;
		return true;
	}
}
bool IntStack::pop(int &n) {
	if (t < 0) {
		return false;
	}
	else {
		n = stack[t];
		t--;
		return true;
	}
}
int main() {
	int n;
	int m;
	cout << "스택의 크기를 입력하시오: ";
	cin >> n;//스택의 크기를 입력받는다.
	IntStack ints(n);
	for (int i = 0; i < n+1; i++) {//n번 push 되고 1번 full이라 push 되지 않음
		cout << "원소를 입력하세요: ";
		cin >> m;
		if (ints.push(m)) {//push된다면 입력값을 출력하고 push 한다.
			cout << m << " 을 스택에 저장" << endl;
		}
		else {
			cout << "스택이 꽉 찼습니다." << endl;
		}
		cout << "현재 원소의 개수: " << ints.size() << endl;
	}
	cout << "스택의 pop을 시작합니다" << endl;
	int j;
	for (int i = 0; i < n + 1; i++) {//n번 pop되고 1번 pop되지 않음
		if (ints.pop(j)) {//pop할 수 있다면 저장된 원소를 출력하고 pop한다.
			cout << j << "가 pop됐습니다" << endl;
		}
		else {
			cout << "pop되지 못했습니다." << endl;
		}
	}
}