#include <iostream>
using namespace std;
class sosu {
public:
	int sosu[30];//�Ҽ��� �Է¹��� �迭
	int i = 0;
	void getsosu() {
		while (i < 30) {//30���� �Ҽ��� ã�´�
			for (int a = 2; a < 120; a++) {
				if (check(a)) {//a�� �Ҽ��� �´ٸ� 
					sosu[i] = a;//�迭�� a�� �����Ѵ�.
					i++;
				}
			}
		}
		for (int i = 0; i < 30; i++) {
			cout << (sosu[i]) << (" ");//�Ҽ��� ����Ѵ�.
		}
	}
	static bool check(int n) {//�� �Ҽ��� �ƴ϶�� �������� �ʴ´�.
		for (int i = 2; i < n; i++) {
			if (n%i == 0)//�Ҽ����� �ƴ��� �Ǻ��ϴ� ��
				return false;
		}
	}
};

int main(void) {
	sosu sosu;
	sosu.getsosu();
	
}