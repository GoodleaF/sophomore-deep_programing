#include <iostream>

using namespace std;

class Ram {//�����Ͱ� ��ϵ� 
	char mem[100 * 1024];//�޸� ����
	int size;//ũ�� ����
public:
	Ram() {
		size = 100 * 1024;//ũ�� ������ �Է¹޴´�.
	};
	~Ram() {
		cout << "�޸𸮰� ���ܵǾ���";
	}

	char read(int address) {//address�� ��ҿ� �ִ� ���� �д´�.
		return mem[address];
	};
	void write(int address, char value) {//addredd�� ��ҿ� ���� �Է��Ѵ�.
		mem[address] = value;
	};
};

int main(void) {
	Ram ram;
	ram.write(100, 20);//100�� 20 �Է�
	ram.write(101, 30);//101�� 30

	char res = ram.read(100) + ram.read(101);//res=50
	ram.write(102, res);//102�� 50

	cout << "102������ �� = " << (int)ram.read(102) << endl;
}