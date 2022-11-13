#include <iostream>
using namespace std;
//int big(int a, int b) {//디폴트 매개변수를 가진 big()함수와 충돌하여 주석처리하였습니ㅏㄷ
//	if (a > b) {//a가 b 보다 큰 경우
//		if (a > 100) {
//			return 100;
//		}
//		else {
//			return a;
//		}
//	}
//	else {
//		if (b > 100) {
//			return 100;
//		}
//		else {
//			return b;
//		}
//	}
//}
//int big(int a, int b, int c) {//int c가 추가 매개 변수로 있기 때문에 중복작성이 가능하다
//	if (a > b) {
//		if (a > c) {
//			return c;
//		}
//		else {
//			return a;
//		}
//	}
//	else {
//		if (b > c) {
//			return c;
//		}
//		else {
//			return b;
//		}
//	}
//}
int big(int a, int b, int c = NULL) {
	int temp = 0;
	if (c == NULL) {//c가 입력되어 있지 않은 경우 디폴트로 받는다
		c = 100;
		if (a > b) {
			if (a > c) {
				return c;
			}
			else {
				return a;
			}
		}
		else {
			if (b > c) {
				return c;
			}
			else {
				return b;
			}
		}
	}
	else {//c가 따로 입력되어 있는 경우. main()에서 big(30, 60, 50)의 경우이다.
		if (a > b) {
			if (a > c) {
				return c;
			}
			else {
				return a;
			}
		}
		else {
			if (b > c) {
				return c;
			}
			else {
				return b;
			}
		}
	}
}
int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}