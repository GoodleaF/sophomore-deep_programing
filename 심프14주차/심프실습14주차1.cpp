#include <iostream>
#include <string>
#include "�����ǽ�14����1.h"
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

Buffer& append(Buffer& buf, string text) {//������ ������ �Լ�
	buf.add(text);//�Է¹��� ���ڿ��� add�Լ��� �̿��Ͽ� ��ü�� �߰��Ѵ�.
	return buf;//��ü�� �����Ѵ�.
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}