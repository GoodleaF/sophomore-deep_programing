#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book {

public:
	string name;//책 이름
	string writer;//작가
	double point;//평점

	Book(string name, string writer, double point) {//작가, 책이름, 평점을 요소로하는 구조체
		this->name = name;
		this->writer = writer;
		this->point = point;
	}

	void print() {//각 요소를 출력한다.
		cout << "도서제목 : " << name << endl;
		cout << "작    가 : " << writer << endl;
		cout << "평    점 : " << point << endl << endl;
		
	}
	
};
int main() {
	Book a = { "데미안", "헤르만 헤세", 8.58 };
	Book b = { "노인들을 위한 나라는 없다", "코맥 매카시", 7.55 };
	Book c = { "유토피아", "토마스 모어", 7.81 };
	Book d = { "인간실격", "다자이 오사무", 8.26 };
	cout << ("==============================================\n");
	a.print();//각 책의 요소를 출력
	b.print();
	c.print();
	d.print();
	cout << ("==============================================\n");
	if (a.point > b.point) {//구조체안의 요소를 바로 비교하지 못하여서 따로 비교하여 제일 큰 평점을 출력받았다.
		if (a.point > c.point) {
			if (a.point > d.point)
				cout << ("가장 평점이 좋은 도서: ") << a.name << endl;
			else
				cout << ("가장 평점이 좋은 도서: ") << d.name << endl;
		}
		else if (c.point > d.point)
			cout << ("가장 평점이 좋은 도서: ") << c.name << endl;
		else
			cout << ("가장 평점이 좋은 도서: ") << d.name << endl;
	}
	else if (b.point > c.point) {
		if (b.point > d.point)
			cout << ("가장 평점이 좋은 도서: ") << b.name << endl;
		else
			cout << ("가장 평점이 좋은 도서: ") << d.name << endl;
	}
	else {
		if(c.point>d.point)
			cout << ("가장 평점이 좋은 도서: ") << c.name << endl;
		else
			cout << ("가장 평점이 좋은 도서: ") << d.name << endl;
	}

	
}