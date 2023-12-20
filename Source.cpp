#include <iostream>

using namespace std;

template <typename T1, typename T2>

T1 Foo(T1 a, T2 b) {


	return a + b;
}

auto Foo2(int a, double b) {

	return a + b;
}

short main() {
	setlocale(LC_ALL, "RU");
	long long number = 123456789123456789;

	cout << sizeof(long long) << endl;
	cout << number << endl;
	cout << "Привет мир" << endl;
	cout << Foo(3.5,5) << endl;
	cout << Foo2(3, 5.9) << endl;

	return 0;
}

