#include <iostream>

using namespace std;

int main() {
	int number = 0;
	int a = 0;
	int b = 0;
	cin >> number;
	int col = 0;
	int c = 0;
	c = number;
	int v = 0;
	int x = 0;
	
	for (;;) {
		a = number % 10;
		b = number / 10;
		number = b;
		col++;
		if (b == 0)
			break;
	
	}

	for (int i = 0; i < col; i++) {
		a = c % 10;
		b = c / 10;
		c = b;
		
		if (a == 3 || a == 6) {
			continue;
		}
		cout << a;
	}
	
	return 0;
}
