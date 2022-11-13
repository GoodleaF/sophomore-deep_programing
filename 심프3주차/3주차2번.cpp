#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char charArr[100];//문자열을 입력받을 배열
	cout << "문자열을 입력하세요: ";
	cin.getline(charArr, 100, '\n');//\n으로 구분되는 문자열을 입력받는다.
	for (int i = 0; i < strlen(charArr); i++) {//문자열의 길이만큼 반복한다.
		for (int j = 0; j < i + 1; j++){//거꾸로 출력하는게 끝이 아니라 한글자씩 추가해서 출력해야하므로 반복문을 달아서 해결한다.
			cout << charArr[strlen(charArr) - (1 + j)];//뒤에서 부터 출력한다.
	}
		cout << endl;//문자의 줄을 바꿈
	}
	return 0;
}