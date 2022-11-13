#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	static void seed() {srand((unsigned)time(0));}//씨드 설정
	static int nextInt(int min = 0, int max = 32767);//min과 max 사이의 랜덤 정수 리턴
	static char nextAlphabet();//랜덤 알파벳 문자 리턴
	static double nextDouble();//0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
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
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1,100) << " ";
	}
	cout << endl << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << " ";
	}
	cout << endl << "랜덤한 실수를 10개를 출력합니다." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << " ";
	}
	return 0;
}