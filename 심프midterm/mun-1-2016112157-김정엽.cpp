#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenOddRandom {
public:
	EvenOddRandom();//seed ����
	int nextInRange(int low, int high, int gubun); //low�� high ������ ���� ¦��/Ȧ�� ���� gubun�� ���� ����(1 Ȧ�� 2¦��)

};
EvenOddRandom::EvenOddRandom() {
	srand((unsigned)time(0));//�ð��� ���� seed�� �����Ѵ�
}
int EvenOddRandom::nextInRange(int min, int max, int gubun) {
	int num;
	num = (rand() % (max + min)) + min;//�ִ񰪰� �ּڰ� �̳��� ���� ���� ����
	if (gubun == 1) {//����
		if (num % 2 != 1) {//num�� Ȧ���� �ƴҰ��
			num++;
			if (num > max) {//num�� �ִ񰪺��� Ŭ ���
				num = num - 2;
			}
		}
	}
	else {
		if (num % 2 == 1) {//num�� ¦���� �ƴ� ���
			num++;
			if (num > max) {//num�� �ִ񰪺��� Ŭ ���
				num = num - 2;
			}
		}
	}
	return num;
}
int main() {
	int i, j, k;
	string s;
	EvenOddRandom random;
	cout << "=====================================================================\n";
	cout << "���� �߻� ���۹��� ���� �Է� ==> ";
	cin >> i;
	cout << "���� �߻� ������   ���� �Է� ==> ";
	cin >> j;
	cout << "���� ���� (1.Ȧ��/2.¦��) �Է� ==> ";
	cin >> k;
	if (k == 1) {
		s = "Ȧ��";
	}
	else {
		s = "¦��";
	}
	cout << i << " ~ " << j << " ������ " << s << " ���� ���� 15�� ���" << endl;
	cout << "=====================================================================" << endl;
	for (int x = 0; x < 15; x++) {//15���� ������ ����Ѵ�.
		cout << random.nextInRange(i, j, k) << " ";
	}
	return 0;
}