#include <iostream>

void main() {
	std::cout << "Hello Word";

	int *pn = new int[1000];
	for (int i = 0; i < 1000; i++) {
		*(pn + i) = 2;
		std::cout << *pn << "\t";
	}
	delete[]pn;
	pn = nullptr;
}