#include <iostream>
#include <windows.h>

using namespace std;

void Revers(int x, int y) {

	COORD rev{ x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), rev);
}

int main() {

	for (int i = 0; i < 10; i++) {
		cout << "#" << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "#";
	}
	cout << endl;
	
	for (int i = 0; i < 11; i++) {
		Revers(10, i);
		cout << "#" << endl;
	}
	cout << endl;

	return 0;
}