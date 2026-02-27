#include <iostream>
#include <cstdlib> 

int main() {
    setlocale(0, "");
    int choice;

    std::cout << "[ 1 ] Линия\n";
    std::cout << "[ 2 ] Квадрат\n";
    std::cout << "[ 3 ] Прямоугольник\n";
    std::cout << "[ 4 ] Треугольник\n";
    std::cout << "[ 5 ] Решетка\n";
    std::cout << "[ 6 ] Крестик\n";
    std::cout << "[ 7 ] Плюс\n\n";

    std::cout << "[ + ] Выберите фигуру: ";
    std::cin >> choice;

    system("cls");

    int size;
    char texture;

    if (choice == 5) {
  
        std::cout << "[ + ] Фигура: \"Решетка\"" << std::endl << std::endl;

      
        std::cout << "[ + ] Размер: ";
        std::cin >> size;

      
        std::cout << "[ + ] Текстура: ";
        std::cin >> texture;

        std::cout << std::endl;
        std::cout << "[ + ] Результат:" << std::endl;
        std::cout << std::endl;

     
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
    else if (choice == 6) {
        
        std::cout << "[ + ] Фигура: \"Крестик\"" << std::endl << std::endl;

        
        std::cout << "[ + ] Размер: ";
        std::cin >> size;

        
        std::cout << "[ + ] Текстура: ";
        std::cin >> texture;

        std::cout << std::endl;
        std::cout << "[ + ] Результат:" << std::endl;
        std::cout << std::endl;

      
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i + j == size - 1) {
                    std::cout << texture;
                }
                else {
                    std::cout << ".";
                }

                
                if (j < size - 1) {
                    std::cout << "     "; 
                }
            }
            std::cout << std::endl;
        }
    }
    else if (choice == 7) {
    
        std::cout << "[ + ] Фигура: \"Плюс\"" << std::endl << std::endl;

     
        std::cout << "[ + ] Размер: ";
        std::cin >> size;

        std::cout << "[ + ] Текстура: ";
        std::cin >> texture;

        std::cout << std::endl;
        std::cout << "[ + ] Результат:" << std::endl;
        std::cout << std::endl;

     
        int center = size / 2;

        
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == center || j == center) {
                    std::cout << texture;
                }
                else {
                    std::cout << ".";
                }

                if (j < size - 1) {
                    std::cout << "     "; 
                }
            }
            std::cout << std::endl;
        }
    }
    else {
        std::cout << "[ ! ] В данной версии доступны только фигуры:\n";
        std::cout << "      [5] Решетка, [6] Крестик и [7] Плюс\n";
    }

    return 0;
}
