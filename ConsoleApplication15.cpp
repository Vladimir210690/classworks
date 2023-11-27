#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int arr[10]{ 25,36,98,2,45,1,65,97,47,33 };

	int real = sizeof(arr) / sizeof(arr[0]);
	cout << real << endl << endl;
	for (int i = 0; i < real; i++) {
		cout << arr[i] << endl;
	}
	cout << endl;
	return 0;
}

