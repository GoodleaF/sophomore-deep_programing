#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book {

public:
	string name;//å �̸�
	string writer;//�۰�
	double point;//����

	Book(string name, string writer, double point) {//�۰�, å�̸�, ������ ��ҷ��ϴ� ����ü
		this->name = name;
		this->writer = writer;
		this->point = point;
	}

	void print() {//�� ��Ҹ� ����Ѵ�.
		cout << "�������� : " << name << endl;
		cout << "��    �� : " << writer << endl;
		cout << "��    �� : " << point << endl << endl;
		
	}
	
};
int main() {
	Book a = { "���̾�", "�츣�� �켼", 8.58 };
	Book b = { "���ε��� ���� ����� ����", "�ڸ� ��ī��", 7.55 };
	Book c = { "�����Ǿ�", "�丶�� ���", 7.81 };
	Book d = { "�ΰ��ǰ�", "������ ���繫", 8.26 };
	cout << ("==============================================\n");
	a.print();//�� å�� ��Ҹ� ���
	b.print();
	c.print();
	d.print();
	cout << ("==============================================\n");
	if (a.point > b.point) {//����ü���� ��Ҹ� �ٷ� ������ ���Ͽ��� ���� ���Ͽ� ���� ū ������ ��¹޾Ҵ�.
		if (a.point > c.point) {
			if (a.point > d.point)
				cout << ("���� ������ ���� ����: ") << a.name << endl;
			else
				cout << ("���� ������ ���� ����: ") << d.name << endl;
		}
		else if (c.point > d.point)
			cout << ("���� ������ ���� ����: ") << c.name << endl;
		else
			cout << ("���� ������ ���� ����: ") << d.name << endl;
	}
	else if (b.point > c.point) {
		if (b.point > d.point)
			cout << ("���� ������ ���� ����: ") << b.name << endl;
		else
			cout << ("���� ������ ���� ����: ") << d.name << endl;
	}
	else {
		if(c.point>d.point)
			cout << ("���� ������ ���� ����: ") << c.name << endl;
		else
			cout << ("���� ������ ���� ����: ") << d.name << endl;
	}

	
}