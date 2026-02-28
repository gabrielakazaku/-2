#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void drawSquare(vector<vector<char>>& grid, int x, int y, int size, char texture) {
    if (size < 2) return;

    for (int i = 0; i < size; i++) {
        grid[x][y + i] = texture;
        grid[x + size - 1][y + i] = texture;
        grid[x + i][y] = texture;
        grid[x + i][y + size - 1] = texture;
    }

    drawSquare(grid, x + 2, y + 2, size - 4, texture);
}

int main() {
    setlocale(0, "");
    int choice;

    cout << "[ + ] Программа - \"Геометрические фигуры\"\n\n";

    cout << "[ 1 ] Линия\n";
    cout << "[ 2 ] Квадрат\n";
    cout << "[ 3 ] Прямоугольник\n";
    cout << "[ 4 ] Треугольник\n";
    cout << "[ 5 ] Решетка\n";
    cout << "[ 6 ] Крестик\n";
    cout << "[ 7 ] Плюс\n";
    cout << "[ 8 ] Ромб\n";
    cout << "[ 9 ] Змейка\n";
    cout << "[ 10 ] Рекурсивный квадрат\n\n";

    cout << "[ + ] Выберите фигуру: ";
    cin >> choice;

    system("cls");

    int size;
    char texture;

    if (choice == 5) {
        cout << "[ + ] Фигура: \"Решетка\"" << endl << endl;

        cout << "[ + ] Размер: ";
        cin >> size;

        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if ((i + j) % 2 == 0) {
                    cout << ". ";
                }
                else {
                    cout << texture << " ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 6) {
        cout << "[ + ] Фигура: \"Крестик\"" << endl << endl;

        cout << "[ + ] Размер: ";
        cin >> size;

        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == j || i + j == size - 1) {
                    cout << texture;
                }
                else {
                    cout << ".";
                }

                if (j < size - 1) {
                    cout << "     ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 7) {
        cout << "[ + ] Фигура: \"Плюс\"" << endl << endl;

        cout << "[ + ] Размер: ";
        cin >> size;

        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        int center = size / 2;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == center || j == center) {
                    cout << texture;
                }
                else {
                    cout << ".";
                }

                if (j < size - 1) {
                    cout << "     ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 8) {
        cout << "[ + ] Фигура: \"Ромб\"" << endl << endl;

        cout << "[ + ] Размер: ";
        cin >> size;

        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        int center = size / 2;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (abs(i - center) + abs(j - center) == center) {
                    cout << texture;
                }
                else {
                    cout << ".";
                }

                if (j < size - 1) {
                    cout << "     ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 9) {
        cout << "[ + ] Фигура: \"Змейка\"" << endl << endl;

        cout << "[ + ] Размер: ";
        cin >> size;

        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i % 3 == 0) {
                    cout << texture;
                }
                else if (i % 3 == 1) {
                    if (j == size - 1) {
                        cout << texture;
                    }
                    else {
                        cout << ".";
                    }
                }
                else {
                    if (j == 0) {
                        cout << texture;
                    }
                    else {
                        cout << ".";
                    }
                }

                if (j < size - 1) {
                    cout << "     ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 10) {
        cout << "[ + ] Фигура: \"Рекурсивный квадрат\"" << endl << endl;

        cout << "[ + ] Размер: ";
        cin >> size;

        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        vector<vector<char>> grid(size, vector<char>(size, '.'));

        drawSquare(grid, 0, 0, size, texture);

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << grid[i][j];
                if (j < size - 1) {
                    cout << "     ";
                }
            }
            cout << endl;
        }
    }
    else {
        cout << "[ ! ] Неверный выбор фигуры\n";
    }

    return 0;
}
