#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() {srand((unsigned)time(0));}//���� ����
	static int nextInt(int min = 0, int max = 32767);//min�� max ������ ���� ���� ����
	static char nextAlphabet();//���� ���ĺ� ���� ����
	static double nextDouble();//0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
};
int Random::nextInt(int min,int max) {
	int num;
	num = (rand() % max) + 1;
	return num;
}
char Random::nextAlphabet() {
	char c;
	c = (rand() % 26) + 65;
	return c;
}
double Random::nextDouble() {
	double d;
	d = rand() / 32768.0;
	return d;
}
int main() {
	Random::seed();
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1,100) << " ";
	}
	cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << " ";
	}
	cout << endl << "������ �Ǽ��� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << " ";
	}
	return 0;
}