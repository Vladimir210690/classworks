#include <iostream>
using namespace std;

int main()
{
    const int ROW = 3;
    const int COL = 3;

    setlocale(LC_ALL, "RU");
    int mass[ROW][COL]{};
    bool go = true; //Ход 
    bool gameower = false;
    int a = 0; // Номер колонки
    int b = 0; // Номер столбца

    while (gameower == false) {
        system("cls");
        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COL; j++) {

                if (mass[i][j] == 0) { // Пустота
                    cout << "   ";
                }
                if (mass[i][j] == 1) { // Крестик
                    cout << " X ";
                }
                if (mass[i][j] == 2) { // Нолик
                    cout << " O ";
                }
            }
            cout << endl;
        }
      
        cout << "Введите номер колонки" << endl;
        cin >> a;
        
        if (a > 2) {
            a = 2;
        }
        cout << "Введите номер столбца" << endl;
        cin >> b ;
       
        if (b > 2) {
            b = 2;
        }

        if (go && mass[b][a] == 0) {
            mass[b][a] = 1;
            go = false;
        }
        else if (!go && mass[b][a] == 0) {
            mass[b][a] = 2;
            go = true;
        }
        system("pause");
    }
    return 0;
}


