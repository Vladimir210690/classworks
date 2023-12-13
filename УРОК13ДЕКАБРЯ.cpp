#include <iostream>

using namespace std;

int Min(int a, int b) {
    if (a <= b) {
        return a;
    }
    else  {
        return b;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    int c = 0, d = 0;
    cout << "Введите первое число: ";
    cin >> c;
    cout << "Введите второе число: ";
    cin >> d;

    cout << Min(c, d);

    return 0;
}
