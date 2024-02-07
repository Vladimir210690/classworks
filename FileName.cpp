#include <iostream>

using namespace std;

class House {
public:
	House(int price, int year){
		this->price = price;
		this->year = year;
	}
	~House() {

	}
private:
	int price;
	int year;
	friend bool operator == (const House& first, const House& second);
};

bool operator == (const House& first, const House & second) {
	if (first.price == second.price && first.year == second.year) {
		return true;
	}
	else
		return false;
}


int main() {

	House Domus(145,1990);
	House Palatium(596, 2010);
	House Village(596, 2010);

	bool a = (Palatium == Domus);
	cout << a;

	return 0;
}