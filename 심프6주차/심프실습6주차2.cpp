#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void findcvalue(char c, string s);
void findcaddress(char &c, string &s);

int main() {
	string s;//입력받을 문장
	char c;//찾을 문자
	int result = 0;//문자의 갯수
	int temp;
	cout << "문장 : ";
	getline(cin, s, '\n');//문장을 입력받는다
	cout << "갯수를 셀 문자 : ";
	cin >> c;
	
	findcvalue(c, s);//값에 의한 호출
	findcaddress(c, s);//참조에 의한 호출
	
	return 0;
}

void findcvalue(char c, string s) {//find 함수가 어디에 들어가야 할지 모르겠습니다.
	int res = 0;
	int temp;
	for (int i = 0; i < (temp = s.length()); i++) {
		s[i] = tolower(s[i]);//대문자를 소문자로 만든다
		if (c == s[i]) {
			res++;//c의 문자의 갯수 출력
		}
	}
	cout << c << "의 갯수 : " << res << endl;
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
	cout << c << "의 갯수 : " << res << endl;
}