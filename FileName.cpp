#include <iostream>

using namespace std;

class Venicle {
private:
	string model;
	int year;
public:
	void getYear() {
		cout << "Enter year car: ";
		cin >> year;
	}
	void Model() {
		cout << "Enter model car: ";
		cin >> model;

	}
	void startEngine() {
		cout << "Eyar: " << year <<"\t" << "Model: " << model << endl;
		cout << "Start enhine";
	}
};

class Car : public Venicle {
	public:
	int number;
};

class Motorcycle {
public:
	int number;
};


int main() {

	Car Camaz;
	cout << "Enter number car: ";
	cin >> Camaz.number;
	Camaz.getYear();
	Camaz.Model();
	cout << "Number: " << Camaz.number << endl;
	Camaz.startEngine();

	return 0;
}