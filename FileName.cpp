#include <iostream>

using namespace std;

class Cars {
	
private:
	int* number = 0;
	int *year = 0;
	string* name = 0;
public:
	void Motion() {
		cout << "Start motion" << endl;
	}
	void Data() {
		number = new int();
		year = new int();
		name = new string();
	}
	void Input() {
		cout << "Input number, year, name: " << endl;
		cin >> *number >> *year >> * name;
	}
	void Print() {
		cout << *number << "\t" << *year << "\t" << *name << endl;
	}
	Cars() {
		cout << "Конструктор сработал" << endl;
	}
	~Cars() {
		delete number, year, name;
		cout << "Деструктор сработал" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Cars Moto;
	Moto.Motion();
	Moto.Data();
	Moto.Input();
	Moto.Motion();
	Moto.Print();
	
	return 0;
}