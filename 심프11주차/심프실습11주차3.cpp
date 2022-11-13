#include<iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;//n�� Ǫ�� ������ full�̸� false
	virtual bool pop(int& n) = 0;//n�� �� ������ ũ�Ⱑ 0�̸� false
	virtual int size() = 0;//������ ũ��
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
	
	bool push(int n);//���������Լ��� �������Ѵ�
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
	cout << "������ ũ�⸦ �Է��Ͻÿ�: ";
	cin >> n;//������ ũ�⸦ �Է¹޴´�.
	IntStack ints(n);
	for (int i = 0; i < n+1; i++) {//n�� push �ǰ� 1�� full�̶� push ���� ����
		cout << "���Ҹ� �Է��ϼ���: ";
		cin >> m;
		if (ints.push(m)) {//push�ȴٸ� �Է°��� ����ϰ� push �Ѵ�.
			cout << m << " �� ���ÿ� ����" << endl;
		}
		else {
			cout << "������ �� á���ϴ�." << endl;
		}
		cout << "���� ������ ����: " << ints.size() << endl;
	}
	cout << "������ pop�� �����մϴ�" << endl;
	int j;
	for (int i = 0; i < n + 1; i++) {//n�� pop�ǰ� 1�� pop���� ����
		if (ints.pop(j)) {//pop�� �� �ִٸ� ����� ���Ҹ� ����ϰ� pop�Ѵ�.
			cout << j << "�� pop�ƽ��ϴ�" << endl;
		}
		else {
			cout << "pop���� ���߽��ϴ�." << endl;
		}
	}
}