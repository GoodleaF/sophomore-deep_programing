#include <iostream>
using namespace std;
//int big(int a, int b) {//����Ʈ �Ű������� ���� big()�Լ��� �浹�Ͽ� �ּ�ó���Ͽ����Ϥ���
//	if (a > b) {//a�� b ���� ū ���
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
//int big(int a, int b, int c) {//int c�� �߰� �Ű� ������ �ֱ� ������ �ߺ��ۼ��� �����ϴ�
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
	if (c == NULL) {//c�� �ԷµǾ� ���� ���� ��� ����Ʈ�� �޴´�
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
	else {//c�� ���� �ԷµǾ� �ִ� ���. main()���� big(30, 60, 50)�� ����̴�.
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