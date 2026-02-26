#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int choice, type, size;
    char texture;

    cout << "[ + ] Программа - \"Геометрические фигуры\"" << endl;
    cout << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
    cout << endl;
    cout << "[ + ] Выберите фигуру: ";
    cin >> choice;

    if (choice == 2)
    {
        cout << "[ + ] Фигура: \"Квадрат\"" << endl;
        cout << endl;
        cout << "[ 1 ] Заполненный" << endl;
        cout << "[ 2 ] Пустой" << endl;
        cout << endl;
        cout << "[ + ] Выберите тип: ";
        cin >> type;

        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;

        cout << endl;
        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        if (type == 1)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    cout << texture << " ";
                }
                cout << endl;
            }
        }

        if (type == 2)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (i == 0)
                    {
                        cout << texture << " ";
                    }
                    else if (i == size - 1)
                    {
                        cout << texture << " ";
                    }
                    else if (j == 0)
                    {
                        cout << texture << " ";
                    }
                    else if (j == size - 1)
                    {
                        cout << texture << " ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}
