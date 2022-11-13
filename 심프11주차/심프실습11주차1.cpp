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
	Crypto1(int n, string s) {//�Էµ� n��ŭ ���ĺ��� �̷��
		num = n;
	}
	virtual void run() {
		cout << "���ڿ��� �Է��Ͻÿ�>>";
		cin >> temp;//���ڿ��� �Է¹޴´�
		for (int i = 0; i < temp.length(); i++) {
			temp[i] = 'a' + (temp[i] + num - 'a') % 26;//n�� �̷�� ������ ���� �ƴ϶� ��ȯ�ؾ� �ϹǷ� %�� ����Ѵ�
		}	
		cout << "Ceaser ��ȣ�� �̿��� ��ȣȭ�� ���ڿ� >>" << temp << endl;
	}
};
class Crypto2 : public Crypto {//30��°������ ������ �Ųٷ� ����
public:
	string temp;
	string result;
	Crypto2(string s) {	}
	virtual void run() {
		cout << "���ڿ��� �Է��Ͻÿ� >>";
		cin >> temp;
		if (temp.length() < 30) {
			for (int i = 0; i < temp.length(); i++) {
				result[i] = temp[temp.length() - i-1];
			}
			for (int i = temp.length(); i < 30; i++) {//���ڿ��� ũ�Ⱑ 30���� �۴ٸ� ���ڿ��� ���ġ �� �� ������ ���ĺ����� ä���
				result[i] = (rand() % 26) + 65;
			}
			cout << "Transposition ��ȣ�� �̿��� ��ȣȭ�� ���ڿ� >>" << result << endl;
		}
		else {
			for (int i = 0; i < temp.length(); i++) {//���ڿ��� ũ�Ⱑ 30���� ũ�ٸ� ���ڿ��� ���ġ�ϴ� ������ ������.
				result[i] = temp[temp.length() - i-1];
				result[temp.length() - i - 1] = temp[i];
			}
			for (int i = 0; i < temp.length(); i++) {
				temp[i] = result[i];
			}
			cout << "Transposition ��ȣ�� �̿��� ��ȣȭ�� ���ڿ� >>" << temp << endl;

		}
	}
};
int main() {
	Crypto1 ceaser(7, "Ceaser");
	Crypto2 trans("Transposition");

	ceaser.run();
	trans.run();
}