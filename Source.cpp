#include <iostream>
#include <ctime>

using namespace std;

void Revers(int arr[], int n) {
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		swap(arr[i], arr[j]);
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int SIZE = 10;

	int mass[SIZE]{};

	for (int i = 0; i < SIZE; i++) {
		mass[i] = rand() % 100;
		cout << mass[i] << " ";
	}
	cout << endl << endl;
	Revers(mass, SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << mass[i] << " ";
	}

	return 0;
}