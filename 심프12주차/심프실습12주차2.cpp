#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
T add1(T a) {//�Ű������� 1���� ��Ű�� ���ø� �Լ�
	return a += 1;
}

template <typename T>
void sortup(T a[]) {//ù �μ����� 5�������� ���Ҹ� �����ϴ� ���ø� �Լ�
	sort(a, a + 5);
}

template <typename T>
void print(T a) {//�Ű������� ����ϴ� ���ø� �Լ�
	cout << a << " ";
}

int main() {
	int arr[5] = { 13,5,8,3,9 };
	char chararr[5] = { 'c','a','z','b','q' };

	cout << "before increase\n";
	for (int i = 0; i < 5; i++) {
		print<int>(arr[i]);//�迭 arr�� �Ű������� �޾� ����Ѵ�
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		print<char>(chararr[i]);//�迭 chararr�� �Ű������� �޾� ����Ѵ�
	}
	cout << endl << endl;

	cout << "after increase\n";
	for (int i = 0; i < 5; i++) {
		print<int>(add1<int>(arr[i]));//�迭 arr�� �Ű������� �޾� 1������Ű�� ����Ѵ�
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		print<char>(add1<char>(chararr[i]));//�迭 chararr�� �Ű������� �޾� 1������Ű�� ����Ѵ�
	}
	cout << endl << endl;

	cout << "after sort\n";
	sortup<int>(arr);//�迭 arr�� �����Ѵ�
	for (int i = 0; i < 5; i++) {
		print<int>(add1<int>(arr[i]));//�迭 arr�� �Ű������� �޾� ����Ѵ�
	}
	cout << endl;

	sortup<char>(chararr);//�迭 chararr�� �����Ѵ�
	for (int i = 0; i < 5; i++) {
		print<char>(add1<char>(chararr[i]));//�迭 chararr�� �Ű������� �޾� ����Ѵ�
	}
	cout << endl;
	return 0;
}