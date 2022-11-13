#include <iostream>
using namespace std;

//int add(int a[], int i) { //디폴트 매개변수를 가진 함수와 충돌해서 주석처리했습니다
//	int sum = 0;
//	for (int j = 0; j < i; j++) {
//		sum += a[j];
//	}
//	return sum;
//}
//int add(int a[], int i, int b[]) { //디폴트 매개변수를 가진 함수와 충돌해서 주석처리했습니다
//	int sum = 0;
//	for (int j = 0; j < i; j++) {
//		sum = a[j] + b[j] + sum;
//	}
//	return sum;
//}
int add(int a[], int i, int b[]=NULL) {//디폴트 매개변수를 가진 함수
	int sum = 0;
	if (b == NULL) {//b가 존재하지 않을 경우의 add 함수
		for (int j = 0; j < i; j++) {
			sum += a[j];
		}
		return sum;
	}
	else {//b가 존재할 경우의 add 함수
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