#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x1, x2, x3, y1, y2, y3;//입력 받을 3점의 좌표
	double a1, a2, b1, b2, n1, n2, m1, m2;//3점 중 두점의 이등분 점과 그 점을 수직으로 지나는 함수의 요소값
	cout << "좌표를 입력하세요" << endl << "1번째>> ";//3점의 좌표를 입력받는다
	cin >> x1 >> y1;
	cout << "2번째>> ";
	cin >> x2 >> y2;
	cout << "3번째>> ";
	cin >> x3 >> y3;
	a1 = (x1 + x2) / 2;//첫 좌표와 두번째 좌표의 중점의 x좌표
	b1 = (y1 + y2) / 2;//첫 좌표와 두번째 좌표의 중점의 y좌표
	if (y2 == y1) {//y 값이 같을 경우 3점은 일직선이 아니기 때문에 다른 직선을 구한다
		a1 = (x2 + x3) / 2;
		b1 = (y2 + y3) / 2;
		n1 = -(x3 - x2) / (y3 - y2);
		m1 = b1 - n1 * a1;
	}
	else {
		n1 = -(x2 - x1) / (y2 - y1);//중점 (a1,b1)을 수직으로 지나는 직선의 기울기
		m1 = b1 - n1 * a1;//중점 (a1,b1)을 수직으로 지나는 직선의 상수값
	}
	
	a2 = (x1 + x3) / 2;//첫 좌표와 세번째 좌표의 중점의 x좌표
	b2 = (y1 + y3) / 2;//첫 좌표와 세번째 좌표의 중점의 y좌표
	if (y3 == y1) {
		a2 = (x2 + x3) / 2;
		b2 = (y2 + y3) / 2;
		n2 = -(x3 - x2) / (y3 - y2);
		m2 = b2 - n2 * a2;
	}
	else {
		n2 = -(x3 - x1) / (y3 - y1);
		m2 = b2 - n2 * a2;
	}

	double midx, midy;//원의 중점의 좌표
	midx = (m2 - m1) / (n1 - n2);
	midy = midx * n1 + m1;
	double result;
	result = pow((x1 - midx), 2) + pow((y1 - midy), 2);//중점과 입력받은 좌표 사이의 거리의 제곱

	cout << "원주: " << round(3.14 * 2 * sqrt(result) * 100) / 100;//소수점 두번째 자리까지만 구한다.
}