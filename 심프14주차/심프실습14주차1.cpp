#include <iostream>
#include <string>
#include "심프실습14주차1.h"
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) {
		this->text = text;
	}
	void add(string next) {
		text += next;
	}
	void print() {
		cout << text << endl;
	}
};

Buffer& append(Buffer& buf, string text) {//참조를 리턴할 함수
	buf.add(text);//입력받은 문자열을 add함수를 이요하여 객체에 추가한다.
	return buf;//객체를 리턴한다.
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}