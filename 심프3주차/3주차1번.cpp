/*6���� �̸��� ;���� �����Ͽ� �Է¹޴´�.
6���� �̸��� ���� ª�� �̸��� �Ǵ��Ͽ� ����Ѵ�.*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {//����ڷκ��� 6���� �̸��� �Է¹޴´�.
	char person[100];//�̸��� �Է¹��� �迭
	int length =101;//�̸��� ���̿� ���ؼ� ������ �� ��
	char shortname[100];//���� ª�� �̸��� ������ �迭
	cout << "6���� �̸��� ';'�� �����Ͽ� �Է��ϼ���" << endl << ">>";//���ڿ��� ����Ѵ�.
	for (int i = 0; i < 6; i++) {//6���� �̸��� �Է¹ޱ� ������ 6�� �ݺ��Ѵ�.
		cin.getline(person,100,';');//;�� �����Ͽ� �̸��� �Է¹޴´�.
		cout << i + 1 << " : " << person << endl;//�Է¹��� �̸��� �Է¹��� ������� ��ȣ�� �Բ� ����Ѵ�.
		if (length>=strlen(person))//���� ª�� �̸��� ã�� ���� ���ǹ�
		{//�Է¹��� �̸��� ���̰� length���� ª����
			length = strlen(person);//�Է¹��� �̸��� ���̸� length�� �����Ѵ�.
			strcpy(shortname, person);//���� �Է¹��� �̸��� shortname�� �����Ѵ�.
		}
	}
	
	cout << "���� ª�� �̸���: " << shortname << endl;//shortname�� ���ڿ��� ����Ѵ�.
	return 0;
}

