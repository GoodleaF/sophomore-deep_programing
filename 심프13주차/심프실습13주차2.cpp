#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<char, string> m;//각 알파벳에 해당하는 모스부호를 이어준다
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

	cout << "문장을 입력하세요: ";
	string s;
	getline(cin, s);//문장을 입력받는다
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);//대문자를 소문자로 바꿔준다.
	}
	for (int i = 0; i < s.size(); i++) {
		for (auto it = m.begin(); it != m.end(); it++) {
			if (s[i] == it->first||s[i]==it->first+26) {//빈칸과 특수문자일 때를 제외하고
				cout << m.find(s[i])->second;//해당하는 모스부호를 출력한다
			}
		}
	}
}