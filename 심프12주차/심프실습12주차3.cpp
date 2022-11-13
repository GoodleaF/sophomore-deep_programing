#include <iostream>
using namespace std;

template <class T>
class Statistics {
public:
	T* x = new T[7];//int 형과 double 형에서 쓰일 수 있도록 템플릿으로 정의한다
	int n = 0;
	void operator <<(T a) {//<<연산자를 배열 x[]에 저장하도록 재정의한다
		x[n] = a;
		n++;
	}
	void operator >> (T& a){//>>연산자를 배열 x 의 값들의 평균을 저장하도록 재정의한다
		a = 0;
		for (int i = 0; i < 7; i++) {
			a += x[i];
		}
		a /= 7;
	}
	void operator ~() {//~연산자를 배열 x의 원소들을 출력하도록 정의한다
		for (int i = 0; i < 7; i++) {
			cout << x[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	Statistics<int> stat;//Statistics<double> stat;
	int x[5];//double x[5];
	cout << "5개의 정수를 입력하라>>";//cout << "5개의 수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	for (int i = 0; i < 5; i++) stat << x[i];//클래스에 x[0]~x[4]을 저장한다
	stat << 100;
	stat<< 200;//stat 클래스에 100과 200 저장
	~stat;//클래스에 저장된 값들을 출력한다
	int avg=0;
	stat >> avg;//avg에 클래스에 저장된 값들의 평균을 저장한다
	cout << "avg= " << avg << endl;
}