#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<char, string> m;//�� ���ĺ��� �ش��ϴ� �𽺺�ȣ�� �̾��ش�
	m.insert(make_pair('a', ".-"));
	m.insert(make_pair('b', "-..."));
	m.insert(make_pair('c', "-.-."));
	m.insert(make_pair('d', "-.."));
	m.insert(make_pair('e', "."));
	m.insert(make_pair('f', "..-."));
	m.insert(make_pair('g', "--."));
	m.insert(make_pair('h', "...."));
	m.insert(make_pair('i', ".."));
	m.insert(make_pair('j', ".---"));
	m.insert(make_pair('k', "-.-"));
	m.insert(make_pair('l', ".-.."));
	m.insert(make_pair('m', "--"));
	m.insert(make_pair('n', "-."));
	m.insert(make_pair('o', "---"));
	m.insert(make_pair('p', ".--."));
	m.insert(make_pair('q', "--.-"));
	m.insert(make_pair('r', ".-."));
	m.insert(make_pair('s', "..."));
	m.insert(make_pair('t', "-"));
	m.insert(make_pair('u', "..-"));
	m.insert(make_pair('v', "...-"));
	m.insert(make_pair('w', ".--"));
	m.insert(make_pair('x', "-..-"));
	m.insert(make_pair('y', "-.--"));
	m.insert(make_pair('z', "--.."));

	cout << "������ �Է��ϼ���: ";
	string s;
	getline(cin, s);//������ �Է¹޴´�
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);//�빮�ڸ� �ҹ��ڷ� �ٲ��ش�.
	}
	for (int i = 0; i < s.size(); i++) {
		for (auto it = m.begin(); it != m.end(); it++) {
			if (s[i] == it->first||s[i]==it->first+26) {//��ĭ�� Ư�������� ���� �����ϰ�
				cout << m.find(s[i])->second;//�ش��ϴ� �𽺺�ȣ�� ����Ѵ�
			}
		}
	}
}