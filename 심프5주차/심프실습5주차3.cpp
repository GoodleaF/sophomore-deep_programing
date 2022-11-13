#include <iostream>
#include <string>
using namespace std;
#include"헤더.h"

void Stack::Init() {
	arr = NULL;//배열을 비워서 초기화시킨다.
}
void Stack::Push(int n) {
	if (size > top) {//배열의 크기를 초과하지 않게
		*(arr + top) = n;//입력받은 값을 저장한다.
		top++;
	}
}
void Stack::Pop() {
	if (top > 0) {//배열의 크기가 0이 아니라면
		cout << arr[top] << ("is popped") << endl;
		delete (arr + top);//마지막에 입력받은 값을 없앤다.
		top--;
	}
}

void Stack::Show() {
	cout << top << endl;//총 입력값의 수를 나타낸다
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
			cin >> a;//배열에 입력할 값을 입력받는다.
			stack.Push(a);
		case 2:
			stack.Pop();//마지막에 입력받은 배열의 값을 없앤다.
		case 3:
			stack.Init();//배열을 초기화
		case 4:
			stack.Show();//배열에 입력받은 값의 갯수를 출력
		case 5:
			break;//종료
		default:
			cout << "enter again";
			break;
		}
	} while (menu != 5);
	return 0;
}