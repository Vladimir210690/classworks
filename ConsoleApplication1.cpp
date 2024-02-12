#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
//#define PI 3.14

using namespace std;

class Figure {
protected:
	int x;
	int y;
public:
	virtual double square() = 0;
};

class Triangle : public Figure {
protected:
	int a;
	int b;
public:
	virtual double square() override {
		return (a * b) / 2.0;
	}
	void Set(int a, int b) {
		this->a = a;
		this->b = b;
	 }

};

class Circle : public Figure {
protected:
	int r;
public:
	virtual double square() override {
		return M_PI * r * r;
	}
	void Set(int r) {
		this->r = r;
	}
};

class Square : public Figure{
protected:
	int c;
public:
	virtual double square() override {
		return c * c;
	}
	void Set(int c) {
		this->c = c;
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	cout << M_PI << endl;

	Circle fir;
	fir.Set(3);

	Square llot;
	llot.Set(6);

	Triangle uti;
	uti.Set(2, 6);

	cout << "Triangle: " << uti.square() << endl;
	cout << "Circle: " << fir.square() << endl;
	cout << "Square: " << llot.square() << endl;

	return 0;
}


