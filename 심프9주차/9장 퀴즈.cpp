#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) {
		this->ratio = ratio;
	}
	void run() {
		double src;
		cin >> src;
		cout << src << "Km를 mile로 바꾸면" << convert(src) << "입니다.";
	}
};
class KmToMile : public Converter {
	string src, dest;
protected:
	virtual string getSourceString() {
		return src;
	}
	virtual string getDestString() {
		return dest;
	}
	virtual double convert(double src) {
		return src / ratio;
	}
public:
	KmToMile(double ratio) :Converter(ratio) {
		src = "Km";
		dest = "Mile";
	}
	};

int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}