#include <iostream>
#include <ctime>

using namespace std;

int Randomizer(int a, int b) {
	a = rand() % 2;
	b = rand() % 2;

	if (a == b) {
		return Randomizer(a, b);
	}
	else {
		int c = a + b;
		return c;
	}
}

int Draw(int a) {
	if (a != 0) {
		a--;
		cout << "#\t";
		Draw(a);
	}
	else {
		return 0;
	}
}

int main(){
	srand(time(NULL));
	
	int a = 8;
	int b = 0;

	int g = a;
	while (g != 0) {
		cout << Randomizer(a, b) << "\t";
		g--;
	}
	cout << endl << endl;
	
	Draw(a);

	return 0;
}
