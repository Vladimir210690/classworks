#include <iostream>

using namespace std;

void Swap(int* arr, int* brr, int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		*(brr + i) = *(arr + i);
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	//int a = 0;
	//cout << "Сколько выделить памяти? ";
	//cin >> a;

	//int* pntr = new int[a];

	//for (int i = 0; i < a; i++) {

	//	*(pntr + i) = i;
	//	cout << *(pntr + i) << "\t";
	//}
	//cout << endl;

	//delete pntr;
	//pntr = NULL;

	int mass1[10]{ 3,5,1,11,6,78,43,4,5,9 };
	int mass2[10]{};

	int* pn1 = mass1;
	int* pn2 = mass2;

	Swap(pn1,pn2, 10);

	for (int i = 0; i < 10; i++) {
		cout << *(pn2 + i) << " ";
	}

	return 0;
}