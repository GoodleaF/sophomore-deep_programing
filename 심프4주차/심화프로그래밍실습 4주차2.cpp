#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <random>
using namespace std;

class Selectable_random {
		
public:
	void even();
	void odd();
};
void Selectable_random::even() {
	srand((unsigned int)time(NULL));
	int i = 0;
	int arr1[10];
	while (i < 10) {//������ �����ϴ� 10���� ¦���� ���� ������
		if ((rand()%32768) % 2 == 0)//rand()�� ¦���̸�
		{
			arr1[i] = rand();//arr[i]�� ���� �����Ѵ�
			i++;
		}
	}
	for (int j = 0; j < 10; j++) {//arr[0]���� arr[9]���� ����Ѵ�.
		cout << arr1[i];
	}
	cout << endl<<endl;
}
void Selectable_random::odd() {
	srand((unsigned int)time(NULL));
	int i = 0;
	int arr2[10000000];
	
	while (i < 10) {//������ �����ϴ� 10���� Ȧ���� ���� ������
		
		if ((rand()%32768) % 2 == 1)//rand()�� Ȧ�����
		{
			arr2[i] = rand();//arr[i]�� rand()�� �����Ѵ�.
			
			i++;
		}
	}
	for (int j = 0; j < 10; j++) {
		cout << arr2[i];//arr[0]���� arr[9]���� ����Ѵ�.
	}
	cout << endl<<endl;
}
int main() {
	Selectable_random number;
	int menu;
	cout << "�Է�(¦��:0 Ȧ��:1 exit:3) >>\n";
	do {
		cin >> menu;
		switch (menu)
		{
		case 0:
			cout << "0���� 32767������ ���� ¦�� 10��\n\n";
			number.even();
			break;
		case 1:
			cout << "0���� 32767������ ���� Ȧ�� 10��\n\n";
			number.odd();
			break;
		case 3:
			break;
		default:
			cout << endl;

			break;
		}
	} while (menu != 3);
	
	return 0;
}