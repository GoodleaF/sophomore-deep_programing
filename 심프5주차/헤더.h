#pragma once
#ifndef STACK_H 
#define STACK_H
using std::string;
class Stack {
public:
	
	int size = 0;//������ ����� ������ �������
	int top = 0;//������ top�ε���
	int* arr = NULL;//������ ������ �迭


	
	void Init();
	void Push(int n);
	void Pop();
	void Show();
	Stack() {
		cout << ("enter size of stack >> ");//�迭�� ũ�⸦ �Է¹޴´�
		cin >> size;
		int* arr = new int[size];//�Է¹��� ũ�� ��ŭ�� �迭 ����
	}
	~Stack() {
		delete arr;//�޸𸮸� ��ȯ�Ѵ�.
		cout << ("�޸� ��ȯ\n");
	}
};
#endif // !STACK_H 
