#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void findcvalue(char c, string s);
void findcaddress(char &c, string &s);

int main() {
	string s;//�Է¹��� ����
	char c;//ã�� ����
	int result = 0;//������ ����
	int temp;
	cout << "���� : ";
	getline(cin, s, '\n');//������ �Է¹޴´�
	cout << "������ �� ���� : ";
	cin >> c;
	
	findcvalue(c, s);//���� ���� ȣ��
	findcaddress(c, s);//������ ���� ȣ��
	
	return 0;
}

void findcvalue(char c, string s) {//find �Լ��� ��� ���� ���� �𸣰ڽ��ϴ�.
	int res = 0;
	int temp;
	for (int i = 0; i < (temp = s.length()); i++) {
		s[i] = tolower(s[i]);//�빮�ڸ� �ҹ��ڷ� �����
		if (c == s[i]) {
			res++;//c�� ������ ���� ���
		}
	}
	cout << c << "�� ���� : " << res << endl;
}
void findcaddress(char &c, string &s) {	
	int res = 0;
	int temp;
	for (int i = 0; i < (temp = s.length()); i++) {
		s[i] = tolower(s[i]);
		if (c == s[i]) {
			res++;
		}
	}
	cout << c << "�� ���� : " << res << endl;
}