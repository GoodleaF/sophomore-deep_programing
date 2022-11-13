#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class race {
public:
	string team[8];//���� ������ �迭
	string min[8];//�������� �ð��� ������ �迭
	race(){}
	void getteam() {//������ ���� �ð��� �Է� �޴´�.
		string tempteam[8];
		string tempmin[8];
		for (int i = 0; i < 8; i++) {
			cin >> tempteam[i] >> tempmin[i];
			this->team[i] = tempteam[i];
			this->min[i] = tempmin[i];
		}
	}
	virtual void game() = 0;//���� ���� �Լ�
};

class item :public race {
public:
	string sorttime[8];
	void game();
};
void item::game() {
	for (int i = 0; i < 8; i++) {
		sorttime[i] = min[i];//�������� �ð��� �����Ѵ�
	}
	sort(sorttime[0], sorttime[7]);//�������� �ð��� ������������ �����Ѵ�
	for (int i = 0; i < 8; i++) {
		if (sorttime[0] == min[i]) {//1���� �ð��� ã�´�
			cout << team[i] << " �¸�" << endl;//1���� ���� ����Ѵ�
		}
	}
}

class speed :public race {
public:
	void game();
	int rpoint = 0;//�������� ����
	int bpoint = 0;//�Ķ����� ����
	string sorttime[8];
};
void speed::game() {
	for (int i = 0; i < 8; i++) {
		sorttime[i] = min[i];//�������� �ð��� �����Ѵ�
	}
	sort(sorttime[0], sorttime[7]);//�������� �ð��� ������������ �����Ѵ�
	for (int i = 0; i < 8; i++) {//�� ������� ������ ����Ѵ�.
		if (sorttime[0] == min[i]) {
			if (team[i] == "red")rpoint += 10;
			else bpoint += 10;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (sorttime[1] == min[i]) {
			if (team[i] == "red")rpoint += 8;
			else bpoint += 8;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (sorttime[2] == min[i]) {
			if (team[i] == "red")rpoint += 6;
			else bpoint += 6;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (sorttime[3] == min[i]) {
			if (team[i] == "red")rpoint += 5;
			else bpoint += 5;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (sorttime[4] == min[i]) {
			if (team[i] == "red")rpoint += 4;
			else bpoint += 4;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (sorttime[5] == min[i]) {
			if (team[i] == "red")rpoint += 3;
			else bpoint += 3;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (sorttime[6] == min[i]) {
			if (team[i] == "red")rpoint += 2;
			else bpoint += 2;
		}
	}
	for (int i = 0; i < 8; i++) {
		if (sorttime[7] == min[i]) {
			if (team[i] == "red")rpoint += 1;
			else bpoint += 1;
		}
	}
	if (bpoint > rpoint)cout << "blue �¸�" << endl;
	else cout << "red �¸�" << endl;
}

int main() {
	string type;
	int n = 3;
	item item;
	speed speed;
	while (n != 0) {
		cout << "���� ����";
		cin >> type;//������ ������ �Է� �޴´�.
		if (type == "item") {
			n = 1;
		}
		else if (type == "speed") {
			n = 2;
		}
		else {
			n = 0;
		}
		
		switch (n)//�Է� ���� ������ ������ ���� �Լ��� �����Ų��.
		{
		case 1:
			item.getteam();//������ ���� �ð��� �Է� �޴´�.
			item.game();//������ ����� ����Ѵ�
			break;
		case 2:
			speed.getteam();
			speed.game();
			break;
		case 0:
			break;
		default:
			break;
		}
	}
}