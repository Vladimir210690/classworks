#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void Curs(int x, int y) {
	COORD cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
}

class Game {
public:
	int x = 10;
	int y = 10;
	bool pero = true;
	bool drawOwer = false;

	void Draw() {
		if (pero == true) {
			cout << "#";
		}
		else if (pero == false) {
			cout << " ";
		}
	}

	int Motion() {

		while (!drawOwer) {
			Curs(x,y);
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
				case 'q':
					if (pero == true) {
						pero = false;
					}
					else if (pero == false) {
						pero = true;
					}
					break;
				case 'e':
					drawOwer = true;
					break;
				}
				

			}
			Draw();
		}
		return 0;
	}

	
};


int main() {
	
	Game game;
	game.Motion();
	cout << endl;
	
	
	
	return 0;
}