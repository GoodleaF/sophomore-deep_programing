#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void addnum(T a) {
	vector<T> vec;
	int n = 0;
	while (a != -1) {
		cin >> a;//a�� �Է¹޴´�
		vec.push_back(a);//�Է¹��� a�� ����
		n++;
	}
	T temp = 0;
	for (int i = 0; i < n-1; i++) {//n������ �ƴϹǷ� -1�� �������� �ʴ´�
		temp += vec[i];//������ ������ ���Ѵ�
	}
	cout << temp << endl;//�� ���� ����Ѵ�
}

int main() {
	int a = 0;//int���� ������ int�������� ��ȯ�Ѵ�
	cout << "������ �Է��ϼ���: ";
	addnum(a);
	double b = 0;//double���� ������ double�������� ��ȯ�Ѵ�
	cout << "�Ǽ��� �Է��ϼ���: ";
	addnum(b);
}