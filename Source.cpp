#include <iostream>
#include <string>
using namespace std;

class human { // Наследуемый класс
public:
	int age = 0;
	int weight = 0;
	string name;

};


class people : public human { // Осуществление наследования
public:
	int age = 0;

};



int main() {
	people first; // Создание обьекта для главного класса и вывод данных наследуемого
	first.weight = 10;
	cin >> first.name;
	cout << first.weight << "\t" << first.name;


	return 0;
}
