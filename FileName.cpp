#include <iostream>

using namespace std;

class Cars {
private:
	int number;
	int weight;
public:
	void setNum(int num) {
		
		number = num;
	}
	int getNum() {
		cout << "Number car: " << number;
		return number;
	}
};



int main() {
	Cars BMV;
	int num = 0;
	cin >> num;
	BMV.setNum(num);
	BMV.getNum();

	return 0;
}