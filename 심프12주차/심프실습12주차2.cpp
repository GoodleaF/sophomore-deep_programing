#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
T add1(T a) {//매개변수를 1증가 시키는 템플릿 함수
	return a += 1;
}

template <typename T>
void sortup(T a[]) {//첫 인수부터 5개까지의 원소를 정렬하는 템플릿 함수
	sort(a, a + 5);
}

template <typename T>
void print(T a) {//매개변수를 출력하는 템플릿 함수
	cout << a << " ";
}

int main() {
	int arr[5] = { 13,5,8,3,9 };
	char chararr[5] = { 'c','a','z','b','q' };

	cout << "before increase\n";
	for (int i = 0; i < 5; i++) {
		print<int>(arr[i]);//배열 arr을 매개변수로 받아 출력한다
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		print<char>(chararr[i]);//배열 chararr을 매개변수로 받아 출력한다
	}
	cout << endl << endl;

	cout << "after increase\n";
	for (int i = 0; i < 5; i++) {
		print<int>(add1<int>(arr[i]));//배열 arr을 매개변수로 받아 1증가시키고 출력한다
	}
	cout << endl;
	for (int i = 0; i < 5; i++) {
		print<char>(add1<char>(chararr[i]));//배열 chararr을 매개변수로 받아 1증가시키고 출력한다
	}
	cout << endl << endl;

	cout << "after sort\n";
	sortup<int>(arr);//배열 arr을 정렬한다
	for (int i = 0; i < 5; i++) {
		print<int>(add1<int>(arr[i]));//배열 arr을 매개변수로 받아 출력한다
	}
	cout << endl;

	sortup<char>(chararr);//배열 chararr을 정렬한다
	for (int i = 0; i < 5; i++) {
		print<char>(add1<char>(chararr[i]));//배열 chararr을 매개변수로 받아 출력한다
	}
	cout << endl;
	return 0;
}