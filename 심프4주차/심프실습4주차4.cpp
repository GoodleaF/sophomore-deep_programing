#include <iostream>

using namespace std;

class Ram {//데이터가 기록될 
	char mem[100 * 1024];//메모리 공간
	int size;//크기 정보
public:
	Ram() {
		size = 100 * 1024;//크기 정보를 입력받는다.
	};
	~Ram() {
		cout << "메모리가 제외되었음";
	}

	char read(int address) {//address의 장소에 있는 값을 읽는다.
		return mem[address];
	};
	void write(int address, char value) {//addredd의 장소에 값을 입력한다.
		mem[address] = value;
	};
};

int main(void) {
	Ram ram;
	ram.write(100, 20);//100에 20 입력
	ram.write(101, 30);//101에 30

	char res = ram.read(100) + ram.read(101);//res=50
	ram.write(102, res);//102에 50

	cout << "102번지의 값 = " << (int)ram.read(102) << endl;
}