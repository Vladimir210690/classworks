#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	int arr[10]{};
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 99;
		cout << arr[i] << " ";
	}
	//Делаю пузырьковую сортировке
	int numb = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) { //Очень важно гнать цикл до 9, чтобы не сравнивать последнее значение с мусором
			if (arr[j] > arr[j + 1]) {
				numb = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = numb;
			}
		}
	}
	cout << endl << endl;

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}
