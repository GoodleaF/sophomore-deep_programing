#include <iostream>
#include <string>
using namespace std;
#include"���.h"

void Stack::Init() {
	arr = NULL;//�迭�� ����� �ʱ�ȭ��Ų��.
}
void Stack::Push(int n) {
	if (size > top) {//�迭�� ũ�⸦ �ʰ����� �ʰ�
		*(arr + top) = n;//�Է¹��� ���� �����Ѵ�.
		top++;
	}
}
void Stack::Pop() {
	if (top > 0) {//�迭�� ũ�Ⱑ 0�� �ƴ϶��
		cout << arr[top] << ("is popped") << endl;
		delete (arr + top);//�������� �Է¹��� ���� ���ش�.
		top--;
	}
}

void Stack::Show() {
	cout << top << endl;//�� �Է°��� ���� ��Ÿ����
}
int main() {
	int menu;
	int a;
	Stack stack;
	do {
		cout << ("1: push, 2: pop, 3: init, 4: Show Stack, 5: exit >> ");
		cin >> menu;

		switch (menu)
		{
		case 1:		
			cout << ("Push >> ");
			cin >> a;//�迭�� �Է��� ���� �Է¹޴´�.
			stack.Push(a);
		case 2:
			stack.Pop();//�������� �Է¹��� �迭�� ���� ���ش�.
		case 3:
			stack.Init();//�迭�� �ʱ�ȭ
		case 4:
			stack.Show();//�迭�� �Է¹��� ���� ������ ���
		case 5:
			break;//����
		default:
			cout << "enter again";
			break;
		}
	} while (menu != 5);
	return 0;
}