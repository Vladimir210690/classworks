#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void Revers(int x, int y) {

	COORD rev{ x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), rev);
}

int main() {

	int x = 15;
	int y = 15;
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
	
	int t = 0;
	while (true) {

		if (_kbhit()) {
			switch (_getch()) {
			case 'a':
				x--;
				break;
			case 'd':
				x++;
				break;
			case 'w':
				y--;
				break;
			case 's':
				y++;
				break;
			}
		}
		t = rand() % 10;
		Revers(x, y);
		cout << t;
	}
	_getch();

	return 0;
}
