#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    setlocale(0, "");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int figura, tipo, altura;
    char textura;

    cout << "[ 15 ] Самостоятельная работа | M-\n";
    cout << "Тема: [ FOR ]\n";
    cout << "Продолжение программы \"Геометрические фигуры\".\n";
    cout << "[ + ] Программа - \"Геометрические фигуры\"\n\n";
    cout << "[ 1 ] Линия\n";
    cout << "[ 2 ] Квадрат\n";
    cout << "[ 3 ] Прямоугольник\n";
    cout << "[ 4 ] Треугольник\n\n";
    cout << "[ + ] Выберите фигуру: ";
    cin >> figura;

    if (figura != 4) {
        cout << "В этой версии программы доступен только треугольник.\n";
        return 1;
    }

    system("cls");

    cout << "[ + ] Фигура: \"Треугольник\"\n\n";
    cout << "[ 1 ] Заполненный\n";
    cout << "[ 2 ] Пустой\n\n";
    cout << "[ + ] Выберите тип: ";
    cin >> tipo;


    cout << "\n[ + ] Размер: ";
    cin >> altura;

    cout << "[ + ] Текстура: ";
    cin >> textura;


    cout << "\n[ + ] Результат:\n\n";

    if (tipo == 1) {

        for (int i = 1; i <= altura; i++) {
     
            for (int j = altura - i; j > 0; j--) {
                cout << "   ";
            }

      
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << " " << textura << " ";
            }
            cout << endl;
        }
    }
    else if (tipo == 2) {

        for (int i = 1; i <= altura; i++) {

            for (int j = altura - i; j > 0; j--) {
                cout << "   ";
            }


            for (int j = 1; j <= (2 * i - 1); j++) {
               
                if (j == 1 , i == altura) {
                    cout << " " << textura << " ";
                }
                else {
                    cout << " . ";
                }
            }
            cout << endl;
        }
    }

    cout << endl;
    system("pause");
    return 0;
}
