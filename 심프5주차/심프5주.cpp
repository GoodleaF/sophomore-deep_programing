#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
		
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(The End�� �Է��ϸ� �����մϴ�.)"<<endl;
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