#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char charArr[100];//���ڿ��� �Է¹��� �迭
	cout << "���ڿ��� �Է��ϼ���: ";
	cin.getline(charArr, 100, '\n');//\n���� ���еǴ� ���ڿ��� �Է¹޴´�.
	for (int i = 0; i < strlen(charArr); i++) {//���ڿ��� ���̸�ŭ �ݺ��Ѵ�.
		for (int j = 0; j < i + 1; j++){//�Ųٷ� ����ϴ°� ���� �ƴ϶� �ѱ��ھ� �߰��ؼ� ����ؾ��ϹǷ� �ݺ����� �޾Ƽ� �ذ��Ѵ�.
			cout << charArr[strlen(charArr) - (1 + j)];//�ڿ��� ���� ����Ѵ�.
	}
		cout << endl;//������ ���� �ٲ�
	}
	return 0;
}