#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;//배열의 크기
	int* arr;//배열의 포인터
	int front;//마지막에 넣은 수
	int rear;//처음에 넣은 수
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
		if (getRear() < getCapacity()-1) {//원소를 입력한다
			put(i);
			cout << i << " is pushed" << endl;
		}
		else {
			cout << "Overflow" << endl;
		} 
	}
	void pop() {
		if (getRear() >= getFront()) {//배열에 입력한 원소를 뺀다
			cout << get(getFront()) << " is popped" << endl;
			setFront(1);
		}
		else {
			cout << "Underflow" << endl;
		}
	}
	void display() {
		if (getRear()>=getFront()) {//배열의 원소들을 출력한다
			for (int i = getFront(); i <= getRear(); i++) {
				cout << get(i) << " ";
			}
			cout << endl;
		}
	}
};
class CircularQueue :protected BaseArray {//원형큐 포인터 증가 방식이 (rear+1)%arraysize 형식으로 변환
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
		if (getRear() >= getFront()) {//배열의 원소들을 출력한다
			for (int i = getFront(); i <= getRear(); i++) {
				cout << get(i) << " ";
			}
			cout << endl;
		}
		else {//원소들이 pop된 이후 다시 채워졌을 때
			for (int i = getFront(); i < getCapacity(); i++) {
				cout << get(i) << " ";
			}
			for (int i = 0; i <= getRear(); i++) {
				cout << get(i) << " ";
			}
			cout << endl;
		}
	}
	bool isFull() {//가득 찬 경우
		if ((getRear() +2)%getCapacity()==getFront()) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isEmpty() {//원소가 없는 경우
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
	while (getc != 0) {//0이 입력되기 전까지는 입력된 값에 따라 시행
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
		cin >> getc;//다시 입력받는다
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