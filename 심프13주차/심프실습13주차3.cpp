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
		s = a;//�Է��� ���ڿ��� �����Ѵ�
	}
	void Push(T a) {//�Է¹��� ���ڿ��� ���ÿ� ����, �������� ����ϰ� �ȴ�
		test.push(a);
	}
	void print() {
		for (int i = 0; i < s.size(); i++) {
			if (test.top() == s[i]) {//������ ���� ���� ���ҿ� ���ڿ��� ���Ѵ�
				test.pop();
				if (i == s.size()-1) {
					cout << "�־��� ���ڿ��� ȸ���Դϴ�.";
				}
			}
			else {//ȸ���� �ƴ϶�� �ݺ����� Ż���Ѵ�
				cout << "�־��� ���ڿ��� ȸ���� �ƴմϴ�.";
				break;
			}
		}
	}
};

int main() {
	
	cout << ">>";
	string s;
	cin >> s;//���ڿ��� �Է¹޴´�
	stackclass<char> stc(s);
	for (int i = 0; i < s.size(); i++) {
		stc.Push(s[i]);//���ڿ��� ���ÿ� �����Ѵ�
	}
	stc.print();//���ڿ��� ȸ������ �ƴ��� �Ǵ��Ѵ�
}