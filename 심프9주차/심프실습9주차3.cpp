#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;//�迭�� ũ��
	int* arr;//�迭�� ������
	int front;//�������� ���� ��
	int rear;//ó���� ���� ��
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		arr = new int[capacity];
		front = 0;
		rear = -1;
	}
	~BaseArray() {
		delete[] arr;
	}
	void put(int val) {
		arr[++rear] = val;
	}
	int get(int index) {
		return arr[index];
	}
	int getCapacity() {
		return capacity;
	}
	int getFront() {
		return front;
	}
	int getRear() {
		return rear;
	}
	void setFront(int n) {
		front += n;
	}
	void setRear(int n) {
		rear += n;
	}
};
class Queue :protected BaseArray {
public:
	Queue(int n):BaseArray(n) {
		cout << "Linear Quene" << endl;
	}
	void push(int i) {
		if (getRear() < getCapacity()-1) {//���Ҹ� �Է��Ѵ�
			put(i);
			cout << i << " is pushed" << endl;
		}
		else {
			cout << "Overflow" << endl;
		} 
	}
	void pop() {
		if (getRear() >= getFront()) {//�迭�� �Է��� ���Ҹ� ����
			cout << get(getFront()) << " is popped" << endl;
			setFront(1);
		}
		else {
			cout << "Underflow" << endl;
		}
	}
	void display() {
		if (getRear()>=getFront()) {//�迭�� ���ҵ��� ����Ѵ�
			for (int i = getFront(); i <= getRear(); i++) {
				cout << get(i) << " ";
			}
			cout << endl;
		}
	}
};
class CircularQueue :protected BaseArray {//����ť ������ ���� ����� (rear+1)%arraysize �������� ��ȯ
public:
	CircularQueue(int n=+1):BaseArray(n) {
		cout << "Circular Queue" << endl;
	}
	void push(int i) {
		if (getRear() == getCapacity()) {
			setRear(-getRear());
		}
		if (isFull()) {
			cout << "Overflow" << endl;
			return;
		}
		else {
			put(i);
			cout << i << " is pushed" << endl;
		}
	}
	void pop() {
		if (isEmpty()) {
			cout << "Underflow" << endl;
			return;
		}
		else {
			cout << get(getFront()) << " is popped" << endl;
			setFront(1);
		}
		if (getFront() == getCapacity()) {
			setFront(-getFront());
		}
	}
	void display() {
		if (getRear() >= getFront()) {//�迭�� ���ҵ��� ����Ѵ�
			for (int i = getFront(); i <= getRear(); i++) {
				cout << get(i) << " ";
			}
			cout << endl;
		}
		else {//���ҵ��� pop�� ���� �ٽ� ä������ ��
			for (int i = getFront(); i < getCapacity(); i++) {
				cout << get(i) << " ";
			}
			for (int i = 0; i <= getRear(); i++) {
				cout << get(i) << " ";
			}
			cout << endl;
		}
	}
	bool isFull() {//���� �� ���
		if ((getRear() +2)%getCapacity()==getFront()) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isEmpty() {//���Ұ� ���� ���
		if (getFront()==(getRear()+1)||getFront()+getCapacity()-1==getRear()) {
			return true;
		}
		else {
			return false;
		}
	}
};
int main() {
	Queue que(4);
	int getc, n;
	cout << "push:1 pop:2 show:3 exit:0 >>";
	cin >> getc;
	while (getc != 0) {//0�� �ԷµǱ� �������� �Էµ� ���� ���� ����
		switch (getc)
		{
		case 0:
			break;
		case 1:
			cout << ">> ";
			cin >> n;
			que.push(n);
			break;
		case 2:
			que.pop();
			break;
		case 3:
			que.display();
			break;
		default:
			break;
		}
		cout << "push:1 pop:2 show:3 exit:0 >>";
		cin >> getc;//�ٽ� �Է¹޴´�
	}
	cout << endl;
	CircularQueue cque(5);
	cout << "push:1 pop:2 show:3 exit:0 >>";
	cin >> getc;
	while (getc != 0) {
		switch (getc)
		{
		case 0:
			break;
		case 1:
			cout << ">> ";
			cin >> n;
			cque.push(n);
			break;
		case 2:
			cque.pop();
			break;
		case 3:
			cque.display();
			break;
		default:
			break;
		}
		cout << "push:1 pop:2 show:3 exit:0 >>";
		cin >> getc;
	}
}