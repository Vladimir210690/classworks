#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
//#define PI 3.14

using namespace std;

class Figure { // Создаем главный класс фигур
protected:
	int x;
	int y;
public:
	virtual double square() = 0;
};

class Triangle : public Figure { // Создаем наследуемый класс треугольник
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

class Circle : public Figure { // создаем наследуемый класс круг
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

class Square : public Figure{ // создаем наследуемый класс квадрат
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

	char t;
	const int arrsize = 3;
	Figure* mass[arrsize];
	int index = 0;
	bool flag = true;

	do {
		cout << "Enter type Figure: " << endl;
		cout << "T - треугольник " << endl;
		cout << "C - круг " << endl;
		cout << "S - квадрат " << endl;
		cout << "! - выход " << endl;

		cin >> t;
		switch (t) {
		case 'T':
			Triangle * pntr = new Triangle;
			int a, b;
			cout << "Введите длинну сторон прямоугольного треугольника: ";
			cin >> a >> b;

			pntr->Set(a, b);
			mass[index] = pntr;
			index++;
			break;
		case 'C':
			Circle * pntr1 = new Circle;
			int r;
			cout << "Введите радиус круга: ";
			cin >> r;

			pntr1->Set(r);
			mass[index] = pntr1;
			index++;

			break;
		case 'S':
			Square * pntr2 = new Square;
			int g;
			cout << "Введите длинну стороны квадрата: ";
			cin >> g;

			pntr2->Set(g);
			mass[index] = pntr2;
			index++;


			break;
		case '!':
			flag = false;
			break;

		default:
			cout << "Error ";
			break;
		}

		if (index == 3) {
			flag = false;
		}

	} while (flag);

	double ss = 0.0;
	for (int i = 0; i < arrsize; i++) {
		cout << "Площадь фигуры: " << i + 1 << " - " << mass[i]->square() << endl;
	}

	return 0;
}

