/*6명의 이름을 ;으로 구분하여 입력받는다.
6명의 이름중 가장 짧은 이름을 판단하여 출력한다.*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {//사용자로부터 6개의 이름을 입력받는다.
	char person[100];//이름을 입력받을 배열
	int length =101;//이름의 길이와 비교해서 무조건 긴 수
	char shortname[100];//가장 짧은 이름을 저장할 배열
	cout << "6명의 이름을 ';'로 구분하여 입력하세요" << endl << ">>";//문자열을 출력한다.
	for (int i = 0; i < 6; i++) {//6명의 이름을 입력받기 때문에 6면 반복한다.
		cin.getline(person,100,';');//;로 구분하여 이름을 입력받는다.
		cout << i + 1 << " : " << person << endl;//입력받은 이름을 입력받은 순서대로 번호와 함께 출력한다.
		if (length>=strlen(person))//가장 짧은 이름을 찾기 위한 조건문
		{//입력받은 이름의 길이가 length보다 짧으면
			length = strlen(person);//입력받은 이름의 길이를 length에 저장한다.
			strcpy(shortname, person);//또한 입력받은 이름을 shortname에 저장한다.
		}
	}
	
	cout << "가장 짧은 이름은: " << shortname << endl;//shortname과 문자열을 출력한다.
	return 0;
}

