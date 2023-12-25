#include <iostream>
#include <windows.h>
#include <conio.h>

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
	
	for (int i = 0; i < 10; i++) {
		Revers(9, i);
		cout << "#" << endl;
	}
	cout << endl;
	

	Revers(15, 15);
	cout << 1;
	_getch();

	return 0;
}
