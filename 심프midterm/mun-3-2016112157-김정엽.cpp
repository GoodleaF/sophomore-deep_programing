#include <iostream>
using namespace std;

class Circle {
	int radius;//���� ������ ��
	string name;//���� �̸�
public:
	void setCircle(string name, int radius);//�̸��� ������ ����
	double getArea();
	string getName();
};
class CircleManager {
	Circle* p;//Circle �迭�� ���� ������
	int size;//�迭�� ũ��
public:
	CircleManager(int size);//size ũ���� �迭�� ���� ����
	~CircleManager();
	void searchByName();//����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea();//����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���
};
CircleManager::CircleManager(int size) {//size�� ũ�⿡ ���� �����Ҵ�
	Circle* p = new Circle[size];
}
CircleManager::~CircleManager() {//�����Ҵ��� �޸� ����
	delete[size] p;
}
void CircleManager::searchByName() {//�̸��� ���� ���� �˻��Ѵ�
	cout << "�˻��ϰ��� �ϴ� ���� �̸�>> ";
	string name;
	cin >> name;
	
	for (int i = 0; i < size; i++) {
		if (name == p.name) {//�Էµ� �̸��� ���� �̸��� ���� ���̶��
			cout << name << "�� ������ " << p.radius * p.radius * 3.14 << endl;
		}
	}
}
void CircleManager::searchByArea() {//�Էµ� ũ�⺸�� ū ������ ���� ���� ���
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	int want;
	cin >> want;
	cout << want << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p.radius * p.radius * 3.14 > want) {
			cout << p.name << "�� ������ " << p.radius * p.radius * 3.14 << ", ";
		}
	}
}
int main() {
	cout << "���� ���� >> ";
	int size;
	cin >> size;//�迭�� ũ�⸦ �Է¹޴´�
	if (size <= 0) {
		cout << "����� �Է��ϼ���.";
	}
	CircleManager circlem(size);//size�� ũ�⸦ ���� �迭 ����
	
	for (int i = 0; i < size; i++) {//���� �̸��� �������� �Է¹ް� �迭�� �����Ѵ�.
		cout << "�� " << i + 1 << "�� �̸��� ������ >>";//p[0]���� p[size-1]���� ���� �̸��� �������� �����ؾ� ������ �迭�� �θ��� ����
		Circle CircleManager p;
		cin >> p.name >> p.radius;
	}
	circlem.searchByName();//�̸��� ���ؼ� ���� �˻��Ѵ�

	circlem.searchByArea();//�ּҸ����� �Է¹ް� �� �������� ū ���̸� ���� ������ ����Ѵ�
	return 0;
}