#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "��ȭ��ȣ�� �Է��ϼ��� >> ";
	getline(cin, s, '\n');
	
	int startindex = 0;

	while (true) {
		int findex = s.find('-', startindex);

		if (findex == -1) {
			string part = s.substr(startindex);
			if (part == "")break;
			cout << part;
			break;
		}
		int count = findex - startindex;
		string part = s.substr(startindex, count);

		cout << part;
		startindex = findex + 1;
	}
	
}