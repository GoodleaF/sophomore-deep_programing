#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void addnum(T a) {
	vector<T> vec;
	int n = 0;
	while (a != -1) {
		cin >> a;//a를 입력받는다
		vec.push_back(a);//입력받은 a를 저장
		n++;
	}
	T temp = 0;
	for (int i = 0; i < n-1; i++) {//n까지가 아니므로 -1은 저장하지 않는다
		temp += vec[i];//저장한 값들을 더한다
	}
	cout << temp << endl;//총 합을 출력한다
}

int main() {
	int a = 0;//int형을 씀으로 int형식으로 반환한다
	cout << "정수를 입력하세요: ";
	addnum(a);
	double b = 0;//double형을 씀으로 double형식으로 반환한다
	cout << "실수를 입력하세요: ";
	addnum(b);
}