#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Crypto {
public:
	static void seed() { srand((unsigned)time(0)); }
	void encryption() {

	}
	virtual void run() {}
};
class Crypto1 : public Crypto {
public:
	string temp;
	int num;
	Crypto1(int n, string s) {//입력된 n만큼 알파벳을 미룬다
		num = n;
	}
	virtual void run() {
		cout << "문자열을 입력하시오>>";
		cin >> temp;//문자열을 입력받는다
		for (int i = 0; i < temp.length(); i++) {
			temp[i] = 'a' + (temp[i] + num - 'a') % 26;//n번 미루는 것으로 끝이 아니라 순환해야 하므로 %를 사용한다
		}	
		cout << "Ceaser 암호를 이용해 암호화된 문자열 >>" << temp << endl;
	}
};
class Crypto2 : public Crypto {//30번째까지의 문장을 거꾸로 쓴다
public:
	string temp;
	string result;
	Crypto2(string s) {	}
	virtual void run() {
		cout << "문자열을 입력하시오 >>";
		cin >> temp;
		if (temp.length() < 30) {
			for (int i = 0; i < temp.length(); i++) {
				result[i] = temp[temp.length() - i-1];
			}
			for (int i = temp.length(); i < 30; i++) {//문자열의 크기가 30보다 작다면 문자열을 재배치 한 후 무작위 알파벳으로 채운다
				result[i] = (rand() % 26) + 65;
			}
			cout << "Transposition 암호를 이용해 암호화된 문자열 >>" << result << endl;
		}
		else {
			for (int i = 0; i < temp.length(); i++) {//문자열의 크기가 30보다 크다면 문자열을 재배치하는 것으로 끝낸다.
				result[i] = temp[temp.length() - i-1];
				result[temp.length() - i - 1] = temp[i];
			}
			for (int i = 0; i < temp.length(); i++) {
				temp[i] = result[i];
			}
			cout << "Transposition 암호를 이용해 암호화된 문자열 >>" << temp << endl;

		}
	}
};
int main() {
	Crypto1 ceaser(7, "Ceaser");
	Crypto2 trans("Transposition");

	ceaser.run();
	trans.run();
}