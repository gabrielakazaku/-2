#include <iostream>
#include <windows.h> // для SetConsoleCP и SetConsoleOutputCP
using namespace std;

int main() {
    // Устанавливаем кодировку для поддержки русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;
    int wordNumber;
    bool exitProgram = false;

    while (!exitProgram) {
        
        cout << "\nПереводчик\n";
        cout << "[ 1 ] Русские слова\n";
        cout << "[ 2 ] Английские слова\n";
        cout << "[ 3 ] Выйти\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
        case 1: 
            cout << "\nПереводчик \"Список русских слов\"\n";
            cout << "[ 1 ] Дом\n";
            cout << "[ 2 ] Машина\n";
            cout << "[ 3 ] Кошка\n";
            cout << "[ 4 ] Собака\n";
            cout << "[ 5 ] Солнце\n";
            cout << "[ 6 ] Луна\n";
            cout << "[ 7 ] Вода\n";
            cout << "[ 8 ] Огонь\n";
            cout << "[ 9 ] Книга\n";
            cout << "[10 ] Стол\n";
            cout << "[11 ] Стул\n";
            cout << "[12 ] Окно\n";
            cout << "[13 ] Дверь\n";
            cout << "[14 ] Компьютер\n";
            cout << "[15 ] Телефон\n";
            cout << "Выберите номер слова: ";
            cin >> wordNumber;

            switch (wordNumber) {
            case 1: cout << "Перевод: дом -> house\n"; break;
            case 2: cout << "Перевод: машина -> car\n"; break;
            case 3: cout << "Перевод: кошка -> cat\n"; break;
            case 4: cout << "Перевод: собака -> dog\n"; break;
            case 5: cout << "Перевод: солнце -> sun\n"; break;
            case 6: cout << "Перевод: луна -> moon\n"; break;
            case 7: cout << "Перевод: вода -> water\n"; break;
            case 8: cout << "Перевод: огонь -> fire\n"; break;
            case 9: cout << "Перевод: книга -> book\n"; break;
            case 10: cout << "Перевод: стол -> table\n"; break;
            case 11: cout << "Перевод: стул -> chair\n"; break;
            case 12: cout << "Перевод: окно -> window\n"; break;
            case 13: cout << "Перевод: дверь -> door\n"; break;
            case 14: cout << "Перевод: компьютер -> computer\n"; break;
            case 15: cout << "Перевод: телефон -> phone\n"; break;
            default: cout << "Неправильный номер слова!\n";
            }
            break;

        case 2:
            cout << "\nПереводчик \"Список английских слов\"\n";
            cout << "[ 1 ] House\n";
            cout << "[ 2 ] Car\n";
            cout << "[ 3 ] Cat\n";
            cout << "[ 4 ] Dog\n";
            cout << "[ 5 ] Sun\n";
            cout << "[ 6 ] Moon\n";
            cout << "[ 7 ] Water\n";
            cout << "[ 8 ] Fire\n";
            cout << "[ 9 ] Book\n";
            cout << "[10 ] Table\n";
            cout << "[11 ] Chair\n";
            cout << "[12 ] Window\n";
            cout << "[13 ] Door\n";
            cout << "[14 ] Computer\n";
            cout << "[15 ] Phone\n";
            cout << "Выберите номер слова: ";
            cin >> wordNumber;

            switch (wordNumber) {
            case 1: cout << "Перевод: house -> дом\n"; break;
            case 2: cout << "Перевод: car -> машина\n"; break;
            case 3: cout << "Перевод: cat -> кошка\n"; break;
            case 4: cout << "Перевод: dog -> собака\n"; break;
            case 5: cout << "Перевод: sun -> солнце\n"; break;
            case 6: cout << "Перевод: moon -> луна\n"; break;
            case 7: cout << "Перевод: water -> вода\n"; break;
            case 8: cout << "Перевод: fire -> огонь\n"; break;
            case 9: cout << "Перевод: book -> книга\n"; break;
            case 10: cout << "Перевод: table -> стол\n"; break;
            case 11: cout << "Перевод: chair -> стул\n"; break;
            case 12: cout << "Перевод: window -> окно\n"; break;
            case 13: cout << "Перевод: door -> дверь\n"; break;
            case 14: cout << "Перевод: computer -> компьютер\n"; break;
            case 15: cout << "Перевод: phone -> телефон\n"; break;
            default: cout << "Wrong word number!\n";
            }
            break;

        case 3: 
            cout << "До свидания!\n";
            exitProgram = true;
            break;

        default:
            cout << "Неправильный выбор! Пожалуйста, выберите 1, 2 или 3.\n";
        }

        if (choice != 3) {
            cout << "\nНажмите Enter чтобы продолжить...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
