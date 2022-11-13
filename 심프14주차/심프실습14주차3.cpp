#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class race {
public:
	string team[8];//팀을 저장할 배열
	string min[8];//팀원들의 시간을 저장할 배열
	race(){}
	void getteam() {//팀원의 팀과 시간을 입력 받는다.
		string tempteam[8];
		string tempmin[8];
		for (int i = 0; i < 8; i++) {
			cin >> tempteam[i] >> tempmin[i];
			this->team[i] = tempteam[i];
			this->min[i] = tempmin[i];
		}
	}
	virtual void game() = 0;//순수 가상 함수
};

class item :public race {
public:
	string sorttime[8];
	void game();
};
void item::game() {
	for (int i = 0; i < 8; i++) {
		sorttime[i] = min[i];//팀원들의 시간을 복사한다
	}
	sort(sorttime[0], sorttime[7]);//팀원들의 시간을 오름차순으로 정렬한다
	for (int i = 0; i < 8; i++) {
		if (sorttime[0] == min[i]) {//1등의 시간을 찾는다
			cout << team[i] << " 승리" << endl;//1등의 팀을 출력한다
		}
	}
}

class speed :public race {
public:
	void game();
	int rpoint = 0;//빨강팀의 점수
	int bpoint = 0;//파랑팀의 점수
	string sorttime[8];
};
void speed::game() {
	for (int i = 0; i < 8; i++) {
		sorttime[i] = min[i];//팀원들의 시간을 복사한다
	}
	sort(sorttime[0], sorttime[7]);//팀원들의 시간을 오름차순으로 정렬한다
	for (int i = 0; i < 8; i++) {//각 등수별로 점수를 배분한다.
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
	if (bpoint > rpoint)cout << "blue 승리" << endl;
	else cout << "red 승리" << endl;
}

int main() {
	string type;
	int n = 3;
	item item;
	speed speed;
	while (n != 0) {
		cout << "게임 종류";
		cin >> type;//게임의 종류를 입력 받는다.
		if (type == "item") {
			n = 1;
		}
		else if (type == "speed") {
			n = 2;
		}
		else {
			n = 0;
		}
		
		switch (n)//입력 받은 게임의 종류에 따라 함수를 실행시킨다.
		{
		case 1:
			item.getteam();//팀원의 팀과 시간을 입력 받는다.
			item.game();//게임의 결과를 출력한다
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