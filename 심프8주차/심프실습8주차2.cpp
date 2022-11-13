#include <iostream>
using namespace std;

class Matrix {
public:
	int matrix[2][2];//2차원 행렬을 구현한다
	Matrix() {//행렬을 초기화한다
		matrix[0][0] = 0;
		matrix[0][1] = 0;
		matrix[1][0] = 0;
		matrix[1][1] = 0;
	}
	Matrix(int a, int b, int c, int d) {//각 행렬의 값들을 입력받는다
		matrix[0][0] = a;
		matrix[0][1] = b;
		matrix[1][0] = c;
		matrix[1][1] = d;
	}
	void show();
	Matrix operator+(Matrix m);
	Matrix operator+=(Matrix m);
	bool operator==(Matrix m);
	friend void comparison(Matrix m1, Matrix m2, Matrix m3);//세 개의 행렬식을 구하고 크기를 비교하는 프렌드 함수
};
void Matrix::show() {//행렬의 원소들을 출력한다
	cout << "Matrix ={";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrix[i][j] << " ";
		}
	}
	cout << "}" << endl;
}
Matrix Matrix::operator+(Matrix m) {//행렬의 원소들을 각각 더할 수 있도록 +연산자의 행동을 지정한다.
	Matrix A;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			A.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
		}
	}
	return A;
}
Matrix Matrix::operator+=(Matrix m) {//a+=b의 식이 a=a+b를 수행할 수 있도록 한다.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			this->matrix[i][j] += m.matrix[i][j];
		}
	}
	return *this;
}
bool Matrix::operator==(Matrix m) {//행렬끼리 비교할 수 있도록 ==연산자를 정의한다.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (this->matrix[i][j] != m.matrix[i][j]) {
				return false;
			}
		}
	}
	return true;
}
void comparison(Matrix m1, Matrix m2, Matrix m3) {//세 개의 행렬식을 비교하는 함수
	int a, b, c;
	a = m1.matrix[0][0] * m1.matrix[1][1] - m1.matrix[0][1] * m1.matrix[1][0];//행렬식을 구한다
	b = m2.matrix[0][0] * m2.matrix[1][1] - m2.matrix[0][1] * m2.matrix[1][0];
	c = m3.matrix[0][0] * m3.matrix[1][1] - m3.matrix[0][1] * m3.matrix[1][0];
	if (a >= b) {//행렬식의 크기에 따라 출력한다.
		if (a >= c) {
			cout << "Max Matrix = {" ;
			m1.show();
			if (b >= c) {
				cout << "Mid Matrix = {";
				m2.show();
				cout << "Min Matrix = {";
				m3.show();
			}
		}		
	}
	else {//b>a
		if (b >= c) {
			cout << "Max Matrix = {";
			m2.show();
			if (a >= c) {
				cout << "Mid Matrix = {";
				m1.show();
				cout << "Min Matrix = {";
				m3.show();
			}
		}
		else {//c>b>a
			cout << "Max Matrix = {";
			m3.show();
			cout << "Mid Matrix = {";
			m2.show();
			cout << "Min Matrix = {";
			m1.show();
		}
	}
}
int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;//행렬 a,b,c 를 정의한다
	c = a + b;//+연산자를 수행한다
	a += b;//+=연산자를 수행한다
	a.show(); b.show(); c.show();//행렬 a, b, c를 출력한다
	if (a == c) {//==연산자를 수행한다
		cout << "a and c are the same" << endl;
	}
	comparison(a, b, c);//행렬식을 비교하고 크기에 따라 출력
	return 0;
}