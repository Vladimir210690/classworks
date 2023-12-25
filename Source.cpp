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


int main(){
	srand(time(NULL));
	
	int a = 0;
	int b = 0;
	while (true) {
		cout << Randomizer(a, b);

	}

	return 0;
}