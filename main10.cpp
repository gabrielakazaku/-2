#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(0, "");
    srand(time(0));

    int choice;

    do {
        cout << "\nМЕНЮ\n";
        cout << "1. Начать игру\n";
        cout << "2. Выйти\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        if (choice == 1) {
            
            int num1, num2, num3;

            num1 = rand() % 10 + 1;

            do {
                num2 = rand() % 10 + 1;
            } while (num2 == num1);

            do {
                num3 = rand() % 10 + 1;
            } while (num3 == num1 || num3 == num2);

            int attempts = 5;
            int guessed = 0;
            int guess;
            bool guessed1 = false, guessed2 = false, guessed3 = false;

            cout << "\n ИГРА НАЧАЛАСЬ\n";

            while (attempts > 0 && guessed < 3) {
                cout << "\n[ + ] Угаданных чисел: [ " << guessed << " / 3 ]\n";
                cout << "[ + ] Попыток: [ " << attempts << " ]\n";

                // Ввод числа
                cout << "[ > ] Угадать число: ";
                cin >> guess;

                // Проверка на корректность ввода
                if (guess < 1 || guess > 10) {
                    cout << "[ ! ] Ошибка! Число должно быть от 1 до 10. Попробуйте снова.\n";
                    continue;
                }

                // Проверяем, угадал ли игрок
                if (guess == num1 && !guessed1) {
                    cout << "[ + ] Вы угадали число!\n";
                    guessed1 = true;
                    guessed++;
                }
                else if (guess == num2 && !guessed2) {
                    cout << "[ + ] Вы угадали число!\n";
                    guessed2 = true;
                    guessed++;
                }
                else if (guess == num3 && !guessed3) {
                    cout << "[ + ] Вы угадали число!\n";
                    guessed3 = true;
                    guessed++;
                }
                else {
                    cout << "[ - ] Вы не угадали число!\n";
                }

                attempts--;
            }

            if (guessed == 3) {
                cout << "\nПОБЕДА!\n";
                cout << "Вы угадали все три числа!\n";
            }
            else {
                cout << "\nПРОИГРЫШ\n";
                cout << "Загаданные числа были: " << num1 << ", " << num2 << ", " << num3 << endl;
            }
        }

    } while (choice != 2);
    cout << "\nДо свидания!\n";
    return 0;
}
