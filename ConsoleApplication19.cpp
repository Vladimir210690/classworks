#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int max = 0;
	int arr[10]{};

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 89 + 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	max = arr[0];
	int number = 0;
	int maxindex = 0;
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxindex = i;
			
		}
		 number = arr[9];
	}
	cout << "Maxindex = " << maxindex << endl;
	cout << "Max = " << max << endl;

	arr[9] = max;
	arr[maxindex] = number;

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}




	return 0;
}
