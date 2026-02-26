#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int month, day;

    cout << "[ + ] Календарь" << endl;
    cout << "[ 1 ] Январь" << endl;
    cout << "[ 2 ] Февраль" << endl;
    cout << "[ 3 ] Март" << endl;
    cout << "[ 4 ] Апрель" << endl;
    cout << "[ 5 ] Май" << endl;
    cout << "[ 6 ] Июнь" << endl;
    cout << "[ 7 ] Июль" << endl;
    cout << "[ 8 ] Август" << endl;
    cout << "[ 9 ] Сентябрь" << endl;
    cout << "[ 10 ] Октябрь" << endl;
    cout << "[ 11 ] Ноябрь" << endl;
    cout << "[ 12 ] Декабрь" << endl;

    cout << "[ + ] Выберите месяц: ";
    cin >> month;

    // Проверка месяца через switch с default
    string monthName;
    int maxDays;

    switch (month) {
    case 1:
        monthName = "Январь";
        maxDays = 31;
        break;
    case 2:
        monthName = "Февраль";
        maxDays = 28;
        break;
    case 3:
        monthName = "Март";
        maxDays = 31;
        break;
    case 4:
        monthName = "Апрель";
        maxDays = 30;
        break;
    case 5:
        monthName = "Май";
        maxDays = 31;
        break;
    case 6:
        monthName = "Июнь";
        maxDays = 30;
        break;
    case 7:
        monthName = "Июль";
        maxDays = 31;
        break;
    case 8:
        monthName = "Август";
        maxDays = 31;
        break;
    case 9:
        monthName = "Сентябрь";
        maxDays = 30;
        break;
    case 10:
        monthName = "Октябрь";
        maxDays = 31;
        break;
    case 11:
        monthName = "Ноябрь";
        maxDays = 30;
        break;
    case 12:
        monthName = "Декабрь";
        maxDays = 31;
        break;
    default:
        cout << "[ - ] Ошибка: неверный номер месяца!" << endl;
        return 1;
    }

    cout << "[ + ] Выбран месяц - \"" << monthName << "\"" << endl;
    cout << "[ + ] Выберите день месяца (1-" << maxDays << "): ";
    cin >> day;

    // Проверка дня через switch (каждый день - отдельный case)
    bool validDay = false;

    switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
        if (day <= maxDays) {
            validDay = true;
        }
        break;
    default:
        validDay = false;
    }

    if (validDay) {
        // Определяем правильное окончание месяца
        string monthGenitive;
        switch (month) {
        case 1: monthGenitive = "января"; break;
        case 2: monthGenitive = "февраля"; break;
        case 3: monthGenitive = "марта"; break;
        case 4: monthGenitive = "апреля"; break;
        case 5: monthGenitive = "мая"; break;
        case 6: monthGenitive = "июня"; break;
        case 7: monthGenitive = "июля"; break;
        case 8: monthGenitive = "августа"; break;
        case 9: monthGenitive = "сентября"; break;
        case 10: monthGenitive = "октября"; break;
        case 11: monthGenitive = "ноября"; break;
        case 12: monthGenitive = "декабря"; break;
        default: monthGenitive = ""; break;
        }

        cout << "[ + ] Календарь: " << day << " " << monthGenitive << "." << endl;
    }
    else {
        cout << "[ - ] Ошибка: неверный день месяца!" << endl;
    }

    return 0;
}
