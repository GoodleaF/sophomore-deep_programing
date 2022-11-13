#include <iostream>
#include <stack>
#include <string>
using namespace std;

template<typename T>
class stackclass {
public:
	stack<T> test;
	string s;
	stackclass(string a) {
		s = a;//입력한 문자열을 저장한다
	}
	void Push(T a) {//입력받은 문자열을 스택에 저장, 역순으로 출력하게 된다
		test.push(a);
	}
	void print() {
		for (int i = 0; i < s.size(); i++) {
			if (test.top() == s[i]) {//스택의 가장 위의 원소와 문자열을 비교한다
				test.pop();
				if (i == s.size()-1) {
					cout << "주어진 문자열은 회문입니다.";
				}
			}
			else {//회문이 아니라면 반복문을 탈출한다
				cout << "주어진 문자열은 회문이 아닙니다.";
				break;
			}
		}
	}
};

int main() {
	
	cout << ">>";
	string s;
	cin >> s;//문자열을 입력받는다
	stackclass<char> stc(s);
	for (int i = 0; i < s.size(); i++) {
		stc.Push(s[i]);//문자열을 스택에 저장한다
	}
	stc.print();//문자열이 회문인지 아닌지 판단한다
}