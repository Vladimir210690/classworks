#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct People {
	int age = 0;
	string name;
};
People arr[3];

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	string names;

	for (int i = 0; i < 3; i++) {
		cout << "¬ведите ваше им€: ";
		cin >> arr[i].name;
		cout << "¬ведите ваш возраст: ";
		cin >> arr[i].age;
		system("cls");
	}
	cout << endl << endl;

	for (int i = 0; i < 3; i++) {
		cout << i << "\t" << arr[i].name << "\t" << arr[i].age << endl;
	}
	return 0;
}