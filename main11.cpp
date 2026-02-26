#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(0, "");
    int figura;      
    int tipo;        
    int dlina;      
    char tekstura;   
    int i;           

    cout << "Программа - \"Геометрические фигуры\"" << endl;
    cout << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << endl;
    cout << "Выберите фигуру: ";
    cin >> figura;

    if (figura == 1) {
        
        system("cls"); 
       
        cout << "Фигура: \"Линия\"" << endl;
        cout << endl;
        cout << "[ 1 ] Горизонтальная" << endl;
        cout << "[ 2 ] Вертикальная" << endl;
        cout << endl;
        cout << " Выберите тип: ";
        cin >> tipo;

       
        cout << "Длина линии: ";
        cin >> dlina;
        cout << "Текстура линии: ";
        cin >> tekstura;

       
        cout << endl;
        cout << "Результат:" << endl;
        cout << endl;

      
        i = 1; 
        if (tipo == 1) { 
            while (i <= dlina) {
                cout << tekstura << "  ";
                i++;
            }
            cout << endl;
        }
        else if (tipo == 2) { 
            while (i <= dlina) {
                cout << tekstura << endl;
                i++;
            }
        }
    }

    cout << endl;
    return 0;
}
