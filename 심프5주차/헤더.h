#pragma once
#ifndef STACK_H 
#define STACK_H
using std::string;
class Stack {
public:
	
	int size = 0;//스택의 사이즈를 저장할 멤버변수
	int top = 0;//스택의 top인덱스
	int* arr = NULL;//스택을 저장할 배열


	
	void Init();
	void Push(int n);
	void Pop();
	void Show();
	Stack() {
		cout << ("enter size of stack >> ");//배열의 크기를 입력받는다
		cin >> size;
		int* arr = new int[size];//입력받은 크기 만큼의 배열 생성
	}
	~Stack() {
		delete arr;//메모리를 반환한다.
		cout << ("메모리 반환\n");
	}
};
#endif // !STACK_H 
