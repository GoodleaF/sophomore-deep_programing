#include <iostream>
using namespace std;
class sosu {
public:
	int sosu[30];//소수를 입력받을 배열
	int i = 0;
	void getsosu() {
		while (i < 30) {//30개의 소수를 찾는다
			for (int a = 2; a < 120; a++) {
				if (check(a)) {//a가 소수가 맞다면 
					sosu[i] = a;//배열에 a를 저장한다.
					i++;
				}
			}
		}
		for (int i = 0; i < 30; i++) {
			cout << (sosu[i]) << (" ");//소수를 출력한다.
		}
	}
	static bool check(int n) {//가 소수가 아니라면 저장하지 않는다.
		for (int i = 2; i < n; i++) {
			if (n%i == 0)//소수인지 아닌지 판별하는 식
				return false;
		}
	}
};

int main(void) {
	sosu sosu;
	sosu.getsosu();
	
}