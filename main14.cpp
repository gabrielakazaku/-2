#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    setlocale(0, "");
    int figura, tipo, ancho, alto;
    char textura;

    cout << "[ 14 ] Самостоятельная работа | E+" << endl;
    cout << "Тема: [ FOR ]" << endl;
    cout << "Продолжение программы \"Геометрические фигуры\"." << endl;
    cout << "[ + ] Программа - \"Геометрические фигуры\"" << endl;
    cout << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
    cout << "[ 3 ] Прямоугольник" << endl;
    cout << endl;
    cout << "[ + ] Выберите фигуру: ";
    cin >> figura;

    if (figura == 3) {
        system("clear"); 

       
        cout << "[ + ] Фигура: \"Прямоугольник\"" << endl;
        cout << endl;
        cout << "[ 1 ] Заполненный" << endl;
        cout << "[ 2 ] Пустой" << endl;
        cout << endl;
        cout << "[ + ] Выберите тип: ";
        cin >> tipo;

        // Очищаем консоль
        system("clear"); 

        cout << "[ + ] Фигура: \"Прямоугольник\"" << endl;
        cout << endl;

        // Запрашиваем параметры
        cout << "[ + ] Ширина: ";
        cin >> ancho;
        cout << "[ + ] Высота: ";
        cin >> alto;
        cout << "[ + ] Текстура: ";
        cin >> textura;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

      
        for (int i = 0; i < alto; i++) {
            for (int j = 0; j < ancho; j++) {
                if (tipo == 2) { 
                    
                    if (i == 0  , j == 0 || j == ancho - 1) {
                        cout << textura << "   ";
                    }
                    else {
                        cout << ".   ";
                    }
                }
                else { 
                    cout << textura << "   ";
                }
            }
            cout << endl;
        }
    }
    else if (figura == 1) {
        cout << "Линия еще не реализована" << endl;
    }
    else if (figura == 2) {
        cout << "Квадрат еще не реализован" << endl;
    }
    else {
        cout << "Неверный выбор!" << endl;
    }

    return 0;
}
