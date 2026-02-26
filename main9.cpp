#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;

    cout << "[ + ] Цикл \"WHILE\"" << endl;

    while (true) {
        cout << "\n[ + ] Введите число: ";
        cin >> number;

        if (number == 0) {
            break;
        }

        if (number < 1 || number > 15) {
            cout << "[ ! ] Ошибка: число должно быть от 1 до 15!" << endl;
            continue;
        }

        int circle = 1;
        while (circle <= number) {
            cout << "[ + ] Цикл отработал. Круг: " << circle << "." << endl;
            circle++;
        }
    }

    cout << "[ + ] Программа завершена." << endl;
    return 0;
}
