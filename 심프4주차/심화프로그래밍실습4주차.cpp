#include <iostream>
using namespace std;

class Tamagochi {
public:
	int stamina;
	int joy;
	int cleanliness;

	Tamagochi(int _stamina, int _joy, int _cleanliness) {//체력, 즐거움, 청결을 매개로 받을 함수
		stamina = _stamina;
		joy = _joy;
		cleanliness = _cleanliness;
	}
	void eat();
	void play();
	void wash();
	void reset();
	void show();
};

void Tamagochi::eat() {//식사에 해당하는 함수
	if (cleanliness < 3) {
		cout << "체력이 너무 낮습니다." << endl;
	}
	else {
		stamina += 2;
		joy += 1;
		cleanliness -= 3;
		if (stamina > 20) {
			stamina = 20; //최대값을 정해준다.
		}
		if (joy > 30)
			joy = 30;
	}
}
void Tamagochi::play() {//놀기에 해당하는 함수
	if (stamina < 2) {
		cout << "체력이 너무 낮습니다." << endl;
	}
	else if (cleanliness < 2) {
		cout << "청결이 너무 낮습니다." << endl;
	}
	else {
		stamina -= 2;
		joy += 4;
		cleanliness -= 2;
		if (joy > 30) {
			joy = 30;//최대값을 유지해준다.
		}
	}
}
void Tamagochi::wash() {//씻기에 해당하는 함수
	if (stamina < 1) {//모자라다면 시행할 수 없다.
		cout << "체력이 너무 낮습니다." << endl;
	}
	else if (joy < 1) {
		cout << "즐거움이 너무 낮습니다." << endl;
	}
	else {
		stamina -= 1;
		joy -= 1;
		cleanliness += 2;
		if (cleanliness > 10) {
			cleanliness = 10;
		}
	}
}
void Tamagochi::reset() {//채우기에 해당하는 함수
	stamina = 20;
	joy = 30;
	cleanliness = 10;
}
void Tamagochi::show() {//게이지 보기에 해당하는 함수
	cout << "다마고치 상태, 체력:" << stamina << " 즐거움:" << joy << " 청결:" << cleanliness << endl;
}
int main() {
	Tamagochi tama(20, 30, 10);//체력, 즐거움, 청결에 20, 30, 10을 입력한다.
	int menu;

	cout << "1:식사, 2:놀이, 3:씻기, 4:채우기, 5:게이지 보기 0: exit\n";

	do{
		cout << ">>";
		cin >> menu;

		switch (menu) {
		case 0://끝낸다
			break;
		case 1:
			tama.eat();//먹기 실행
			break;
		case 2:
			tama.play();//놀기 실행
			break;
		case 3:
			tama.wash();//씻기 실행
			break;
		case 4:
			tama.reset();//채우기 실행
			break;
		case 5:
			tama.show();//게이지 보기 실행
			break;
		default:
			cout << "다시 입력 해주세요\n";
			break;
		}
	} while (menu != 0);
	return 0;
}