#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char charArr[10000];//영문 텍스트를 입력받을 배열
	int num = 0;//총 알파벳 수를 입력받을 식
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ;입니다. 10000개까지 가능합니다.\n";//문자열을 출력한다.
	cin.getline(charArr, 10000, ';');//최대 만자까지 입력받을 수 있으며, ;로 입력받는 것을 종료한다.
	int alpha[27] = {0};//각 알파벳의 숫자를 세기 위한 배열
	for (int i = 0; i < strlen(charArr); ++i) {//i가 문자열의 길이가 될때까지 반복한다.
		if (isalpha(tolower(charArr[i])) != 0) {//대문자는 소문자로 바꾸고 문자가 알파벳이라면
			++alpha[charArr[i] - 97];//각 알파벳당 1씩 증가
			++num;//총 알파벳 수를 증가시킨다.
		}
	}
	cout << "총 알파벳 수: " << num << endl;//총 알파벳 수인 num을 출력한다.
	for (int i = 0; i < 26; ++i) {//각 알파벳의 수만큼 반복한다.
		char comp = i + 'a';//comp에 각 알파벳을 입력받는다.
		cout << comp << "(" << alpha[i] << ") :";//알파벳을 출력한 후 각 알파벳의 갯수 출력한다.
		for (int j = 1; j <= alpha[i]; ++j)cout << "*";//알파벳의 개수만큼 *를 출력한다.
		cout << endl;
	}
	return 0;
}