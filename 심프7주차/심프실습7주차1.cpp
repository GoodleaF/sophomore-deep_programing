#include <iostream>
using namespace std;

//int add(int a[], int i) { //����Ʈ �Ű������� ���� �Լ��� �浹�ؼ� �ּ�ó���߽��ϴ�
//	int sum = 0;
//	for (int j = 0; j < i; j++) {
//		sum += a[j];
//	}
//	return sum;
//}
//int add(int a[], int i, int b[]) { //����Ʈ �Ű������� ���� �Լ��� �浹�ؼ� �ּ�ó���߽��ϴ�
//	int sum = 0;
//	for (int j = 0; j < i; j++) {
//		sum = a[j] + b[j] + sum;
//	}
//	return sum;
//}
int add(int a[], int i, int b[]=NULL) {//����Ʈ �Ű������� ���� �Լ�
	int sum = 0;
	if (b == NULL) {//b�� �������� ���� ����� add �Լ�
		for (int j = 0; j < i; j++) {
			sum += a[j];
		}
		return sum;
	}
	else {//b�� ������ ����� add �Լ�
		for (int j = 0; j < i; j++) {
			sum = sum + a[j] + b[j];
		}
		return sum;
	}
}
int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}