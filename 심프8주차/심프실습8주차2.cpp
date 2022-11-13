#include <iostream>
using namespace std;

class Matrix {
public:
	int matrix[2][2];//2���� ����� �����Ѵ�
	Matrix() {//����� �ʱ�ȭ�Ѵ�
		matrix[0][0] = 0;
		matrix[0][1] = 0;
		matrix[1][0] = 0;
		matrix[1][1] = 0;
	}
	Matrix(int a, int b, int c, int d) {//�� ����� ������ �Է¹޴´�
		matrix[0][0] = a;
		matrix[0][1] = b;
		matrix[1][0] = c;
		matrix[1][1] = d;
	}
	void show();
	Matrix operator+(Matrix m);
	Matrix operator+=(Matrix m);
	bool operator==(Matrix m);
	friend void comparison(Matrix m1, Matrix m2, Matrix m3);//�� ���� ��Ľ��� ���ϰ� ũ�⸦ ���ϴ� ������ �Լ�
};
void Matrix::show() {//����� ���ҵ��� ����Ѵ�
	cout << "Matrix ={";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrix[i][j] << " ";
		}
	}
	cout << "}" << endl;
}
Matrix Matrix::operator+(Matrix m) {//����� ���ҵ��� ���� ���� �� �ֵ��� +�������� �ൿ�� �����Ѵ�.
	Matrix A;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			A.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
		}
	}
	return A;
}
Matrix Matrix::operator+=(Matrix m) {//a+=b�� ���� a=a+b�� ������ �� �ֵ��� �Ѵ�.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			this->matrix[i][j] += m.matrix[i][j];
		}
	}
	return *this;
}
bool Matrix::operator==(Matrix m) {//��ĳ��� ���� �� �ֵ��� ==�����ڸ� �����Ѵ�.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (this->matrix[i][j] != m.matrix[i][j]) {
				return false;
			}
		}
	}
	return true;
}
void comparison(Matrix m1, Matrix m2, Matrix m3) {//�� ���� ��Ľ��� ���ϴ� �Լ�
	int a, b, c;
	a = m1.matrix[0][0] * m1.matrix[1][1] - m1.matrix[0][1] * m1.matrix[1][0];//��Ľ��� ���Ѵ�
	b = m2.matrix[0][0] * m2.matrix[1][1] - m2.matrix[0][1] * m2.matrix[1][0];
	c = m3.matrix[0][0] * m3.matrix[1][1] - m3.matrix[0][1] * m3.matrix[1][0];
	if (a >= b) {//��Ľ��� ũ�⿡ ���� ����Ѵ�.
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
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;//��� a,b,c �� �����Ѵ�
	c = a + b;//+�����ڸ� �����Ѵ�
	a += b;//+=�����ڸ� �����Ѵ�
	a.show(); b.show(); c.show();//��� a, b, c�� ����Ѵ�
	if (a == c) {//==�����ڸ� �����Ѵ�
		cout << "a and c are the same" << endl;
	}
	comparison(a, b, c);//��Ľ��� ���ϰ� ũ�⿡ ���� ���
	return 0;
}