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

	for (int i = 0; i < 3; i++) { // Заполняем структуру данными людей
		cout << "Введите ваше имя: ";
		cin >> arr[i].name;
		cout << "Введите ваш возраст: ";
		cin >> arr[i].age;
		system("cls");
	}
	cout << endl << endl;

	cout << "ID\t" << "name\t" << "age" << endl;
	for (int i = 0; i < 3; i++) { // Выгружаем структуру с данными людей
		cout << i + 1 << "\t" << arr[i].name << "\t" << arr[i].age << endl;
	}
	return 0;
}
