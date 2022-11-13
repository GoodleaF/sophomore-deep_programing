#include <iostream>
using namespace std;

class Tamagochi {
public:
	int stamina;
	int joy;
	int cleanliness;

	Tamagochi(int _stamina, int _joy, int _cleanliness) {//ü��, ��ſ�, û���� �Ű��� ���� �Լ�
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

void Tamagochi::eat() {//�Ļ翡 �ش��ϴ� �Լ�
	if (cleanliness < 3) {
		cout << "ü���� �ʹ� �����ϴ�." << endl;
	}
	else {
		stamina += 2;
		joy += 1;
		cleanliness -= 3;
		if (stamina > 20) {
			stamina = 20; //�ִ밪�� �����ش�.
		}
		if (joy > 30)
			joy = 30;
	}
}
void Tamagochi::play() {//��⿡ �ش��ϴ� �Լ�
	if (stamina < 2) {
		cout << "ü���� �ʹ� �����ϴ�." << endl;
	}
	else if (cleanliness < 2) {
		cout << "û���� �ʹ� �����ϴ�." << endl;
	}
	else {
		stamina -= 2;
		joy += 4;
		cleanliness -= 2;
		if (joy > 30) {
			joy = 30;//�ִ밪�� �������ش�.
		}
	}
}
void Tamagochi::wash() {//�ı⿡ �ش��ϴ� �Լ�
	if (stamina < 1) {//���ڶ�ٸ� ������ �� ����.
		cout << "ü���� �ʹ� �����ϴ�." << endl;
	}
	else if (joy < 1) {
		cout << "��ſ��� �ʹ� �����ϴ�." << endl;
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
void Tamagochi::reset() {//ä��⿡ �ش��ϴ� �Լ�
	stamina = 20;
	joy = 30;
	cleanliness = 10;
}
void Tamagochi::show() {//������ ���⿡ �ش��ϴ� �Լ�
	cout << "�ٸ���ġ ����, ü��:" << stamina << " ��ſ�:" << joy << " û��:" << cleanliness << endl;
}
int main() {
	Tamagochi tama(20, 30, 10);//ü��, ��ſ�, û�ῡ 20, 30, 10�� �Է��Ѵ�.
	int menu;

	cout << "1:�Ļ�, 2:����, 3:�ı�, 4:ä���, 5:������ ���� 0: exit\n";

	do{
		cout << ">>";
		cin >> menu;

		switch (menu) {
		case 0://������
			break;
		case 1:
			tama.eat();//�Ա� ����
			break;
		case 2:
			tama.play();//��� ����
			break;
		case 3:
			tama.wash();//�ı� ����
			break;
		case 4:
			tama.reset();//ä��� ����
			break;
		case 5:
			tama.show();//������ ���� ����
			break;
		default:
			cout << "�ٽ� �Է� ���ּ���\n";
			break;
		}
	} while (menu != 0);
	return 0;
}