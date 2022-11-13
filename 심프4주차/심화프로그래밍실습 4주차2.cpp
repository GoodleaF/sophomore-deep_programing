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
	while (i < 10) {//조건을 만족하는 10개의 짝수가 나올 때까지
		if ((rand()%32768) % 2 == 0)//rand()가 짝수이면
		{
			arr1[i] = rand();//arr[i]에 값을 저장한다
			i++;
		}
	}
	for (int j = 0; j < 10; j++) {//arr[0]부터 arr[9]까지 출력한다.
		cout << arr1[i];
	}
	cout << endl<<endl;
}
void Selectable_random::odd() {
	srand((unsigned int)time(NULL));
	int i = 0;
	int arr2[10000000];
	
	while (i < 10) {//조건을 만족하는 10개의 홀수가 나올 때까지
		
		if ((rand()%32768) % 2 == 1)//rand()가 홀수라면
		{
			arr2[i] = rand();//arr[i]에 rand()를 저장한다.
			
			i++;
		}
	}
	for (int j = 0; j < 10; j++) {
		cout << arr2[i];//arr[0]부터 arr[9]까지 출력한다.
	}
	cout << endl<<endl;
}
int main() {
	Selectable_random number;
	int menu;
	cout << "입력(짝수:0 홀수:1 exit:3) >>\n";
	do {
		cin >> menu;
		switch (menu)
		{
		case 0:
			cout << "0에서 32767까지의 랜덤 짝수 10개\n\n";
			number.even();
			break;
		case 1:
			cout << "0에서 32767까지의 랜덤 홀수 10개\n\n";
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