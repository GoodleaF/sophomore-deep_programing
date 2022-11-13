#include <iostream>
using namespace std;

template <class T>
class Statistics {
public:
	T* x = new T[7];//int ���� double ������ ���� �� �ֵ��� ���ø����� �����Ѵ�
	int n = 0;
	void operator <<(T a) {//<<�����ڸ� �迭 x[]�� �����ϵ��� �������Ѵ�
		x[n] = a;
		n++;
	}
	void operator >> (T& a){//>>�����ڸ� �迭 x �� ������ ����� �����ϵ��� �������Ѵ�
		a = 0;
		for (int i = 0; i < 7; i++) {
			a += x[i];
		}
		a /= 7;
	}
	void operator ~() {//~�����ڸ� �迭 x�� ���ҵ��� ����ϵ��� �����Ѵ�
		for (int i = 0; i < 7; i++) {
			cout << x[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	Statistics<int> stat;//Statistics<double> stat;
	int x[5];//double x[5];
	cout << "5���� ������ �Է��϶�>>";//cout << "5���� ���� �Է��϶�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	for (int i = 0; i < 5; i++) stat << x[i];//Ŭ������ x[0]~x[4]�� �����Ѵ�
	stat << 100;
	stat<< 200;//stat Ŭ������ 100�� 200 ����
	~stat;//Ŭ������ ����� ������ ����Ѵ�
	int avg=0;
	stat >> avg;//avg�� Ŭ������ ����� ������ ����� �����Ѵ�
	cout << "avg= " << avg << endl;
}