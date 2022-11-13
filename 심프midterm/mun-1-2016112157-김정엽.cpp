#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenOddRandom {
public:
	EvenOddRandom();//seed 설정
	int nextInRange(int low, int high, int gubun); //low와 high 사이의 랜덤 짝수/홀수 리턴 gubun은 난수 유형(1 홀수 2짝수)

};
EvenOddRandom::EvenOddRandom() {
	srand((unsigned)time(0));//시간에 따른 seed를 설정한다
}
int EvenOddRandom::nextInRange(int min, int max, int gubun) {
	int num;
	num = (rand() % (max + min)) + min;//최댓값과 최솟값 이내의 랜덤 정수 생성
	if (gubun == 1) {//구분
		if (num % 2 != 1) {//num이 홀수가 아닐경우
			num++;
			if (num > max) {//num이 최댓값보다 클 경우
				num = num - 2;
			}
		}
	}
	else {
		if (num % 2 == 1) {//num이 짝수가 아닐 경우
			num++;
			if (num > max) {//num이 최댓값보다 클 경우
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
	cout << "난수 발생 시작범위 정수 입력 ==> ";
	cin >> i;
	cout << "난수 발생 끝범위   정수 입력 ==> ";
	cin >> j;
	cout << "난수 유형 (1.홀수/2.짝수) 입력 ==> ";
	cin >> k;
	if (k == 1) {
		s = "홀수";
	}
	else {
		s = "짝수";
	}
	cout << i << " ~ " << j << " 까지의 " << s << " 난수 정수 15개 출력" << endl;
	cout << "=====================================================================" << endl;
	for (int x = 0; x < 15; x++) {//15개의 정수를 출력한다.
		cout << random.nextInRange(i, j, k) << " ";
	}
	return 0;
}