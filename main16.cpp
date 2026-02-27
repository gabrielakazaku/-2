#include <iostream>
#include <string>
#include <cstdlib>

    int main() {
        setlocale(0, "");
        int choice;

        std::cout << "[ 16 ] Самостоятельная работа | E+\n";
        std::cout << "Тема: [ FOR ]\n";
        std::cout << "Продолжение программы \"Геометрические фигуры\".\n";
        std::cout << "[ + ] Программа - \"Геометрические фигуры\"\n\n";

        std::cout << "[ 1 ] Линия\n";
        std::cout << "[ 2 ] Квадрат\n";
        std::cout << "[ 3 ] Прямоугольник\n";
        std::cout << "[ 4 ] Треугольник\n";
        std::cout << "[ 5 ] Решетка\n\n";

        std::cout << "[ + ] Выберите фигуру: ";
        std::cin >> choice;

        if (choice == 5) {

            system("cls"); 


            int size;
            char texture;

            std::cout << "[ + ] Фигура: \"Решетка\"\n\n";

            std::cout << "[ + ] Размер: ";
            std::cin >> size;

            std::cout << "\n[ + ] Текстура: ";
            std::cin >> texture;


            std::cout << "\n[ + ] Результат:\n\n";

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i + j) % 2 == 0) {

                        std::cout << ". ";
                    }
                    else {

                        std::cout << texture << " ";
                    }
                }
                std::cout << std::endl;
            }
        }
        else {
            std::cout << "\n[ ! ] В данной версии доступна только фигура \"Решетка\" (5)\n";
        }

        return 0;
    }
