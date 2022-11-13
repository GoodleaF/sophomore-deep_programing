#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
		
	cout << "아래에 한 줄을 입력하세요.(The End를 입력하면 종료합니다.)"<<endl;
	getline(cin, s, '\n');
	if (s == "The End") {
		return 0;
	}
	int leng = s.length();
	for (int i = 0; i < leng; i++) {
		cout << s[leng - 1 - i];
	}
	cout << endl;
	system("pause");
	return 0;

}