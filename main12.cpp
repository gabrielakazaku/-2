#include <iostream>
#include <string>
#include <cstdlib> // для system("clear") или system("cls")

using namespace std;

int main() {
    setlocale(0, "");
    string playerName = "Игрок";
    int questionsCount = 10;
    int colorScheme = 1; // 1 - стандартный, 2 - зеленый, 3 - желтый

    bool isRunning = true;

    while (isRunning) {
        system("clear");

        if (colorScheme == 1) {
            cout << "\033[0m";
        }
        else if (colorScheme == 2) {
            cout << "\033[32m";
        }
        else if (colorScheme == 3) {
            cout << "\033[33m"; 
        }

        cout << "         ДОБРО ПОЖАЛОВАТЬ!          \n";
        cout << "         ВИКТОРИНА ПО IT            \n";
        cout << "ГЛАВНОЕ МЕНЮ:\n";
        cout << "1. Начать игру\n";
        cout << "2. Настройки\n";
        cout << "3. Правила\n";
        cout << "4. Выйти\n";
        cout << "Выберите пункт: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
           
            int lives = 3;
            int score = 0;
            int currentQuestion = 0;
            bool gameOver = false;

            int maxQuestions = questionsCount;

            while (!gameOver && currentQuestion < maxQuestions) {
                system("clear");

                cout << "\033[36m[ + ] Игрок: " << playerName << " | жизни: " << lives << " | очки: " << score << "\033[0m\n";

                if (colorScheme == 1) {
                    cout << "\033[0m";
                }
                else if (colorScheme == 2) {
                    cout << "\033[32m";
                }
                else if (colorScheme == 3) {
                    cout << "\033[33m";
                }


                if (currentQuestion == 0) {
                    cout << "[ 1 ] Вопрос: Системный язык программирования?\n";
                    cout << "[ A ] Python  [ B ] C#\n";
                    cout << "[ C ] Ruby    [ D ] C++\n";
                    cout << "[ + ] Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'D' || answer == 'd') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: D (C++)\033[0m\n";
                    }
                }
                else if (currentQuestion == 1) {
                    cout << "[ 2 ] Вопрос: Какой язык используется для стилей веб-страниц?\n";
                    cout << "[ A ] HTML   [ B ] CSS\n";
                    cout << "[ C ] JavaScript  [ D ] PHP\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'B' || answer == 'b') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: B (CSS)\033[0m\n";
                    }
                }
                else if (currentQuestion == 2) {
                    cout << "[ 3 ] Вопрос: Какая компания создала Java?\n";
                    cout << "[ A ] Microsoft  [ B ] Apple\n";
                    cout << "[ C ] Sun Microsystems  [ D ] Google\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'C' || answer == 'c') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: C (Sun Microsystems)\033[0m\n";
                    }
                }
                else if (currentQuestion == 3) {
                    cout << "[ 4 ] Вопрос: Что означает IDE?\n";
                    cout << "[ A ] Integrated Development Environment\n";
                    cout << "[ B ] Internet Data Explorer\n";
                    cout << "[ C ] Internal Development Engine\n";
                    cout << "[ D ] Interactive Design Environment\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'A' || answer == 'a') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: A (Integrated Development Environment)\033[0m\n";
                    }
                }
                else if (currentQuestion == 4) {
                    cout << "[ 5 ] Вопрос: Какой тег используется для ссылки в HTML?\n";
                    cout << "[ A ] <link>   [ B ] <a>\n";
                    cout << "[ C ] <href>   [ D ] <url>\n";
                    cout << " Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'B' || answer == 'b') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: B (<a>)\033[0m\n";
                    }
                }
                else if (currentQuestion == 5) {
                    cout << "[ 6 ] Вопрос: Какой тип данных в C++ для целых чисел?\n";
                    cout << "[ A ] float    [ B ] string\n";
                    cout << "[ C ] int      [ D ] char\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'C' || answer == 'c') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: C (int)\033[0m\n";
                    }
                }
                else if (currentQuestion == 6) {
                    cout << "[ 7 ] Вопрос: Что такое Git?\n";
                    cout << "[ A ] Язык программирования\n";
                    cout << "[ B ] Система контроля версий\n";
                    cout << "[ C ] Текстовый редактор\n";
                    cout << "[ D ] Операционная система\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'B' || answer == 'b') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: B (Система контроля версий)\033[0m\n";
                    }
                }
                else if (currentQuestion == 7) {
                    cout << "[ 8 ] Вопрос: Какая функция выводит текст в Python?\n";
                    cout << "[ A ] console.log()  [ B ] System.out.println()\n";
                    cout << "[ C ] echo           [ D ] print()\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'D' || answer == 'd') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: D (print())\033[0m\n";
                    }
                }
                else if (currentQuestion == 8 && maxQuestions >= 9) {
                    cout << "[ 9 ] Вопрос: Какой цикл выполняется хотя бы один раз?\n";
                    cout << "[ A ] for   [ B ] while\n";
                    cout << "[ C ] do-while  [ D ] foreach\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'C' || answer == 'c') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: C (do-while)\033[0m\n";
                    }
                }
                else if (currentQuestion == 9 && maxQuestions >= 10) {
                    cout << "[ 10 ] Вопрос: Что такое API?\n";
                    cout << "[ A ] Application Programming Interface\n";
                    cout << "[ B ] Advanced Program Integration\n";
                    cout << "[ C ] Application Process Instruction\n";
                    cout << "[ D ] Automated Programming Interface\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'A' || answer == 'a') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: A (Application Programming Interface)\033[0m\n";
                    }
                }
                else if (currentQuestion == 10 && maxQuestions >= 11) {
                    cout << "[ 11 ] Вопрос: Какая СУБД является реляционной?\n";
                    cout << "[ A ] MongoDB  [ B ] MySQL\n";
                    cout << "[ C ] Redis     [ D ] Cassandra\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'B' || answer == 'b') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: B (MySQL)\033[0m\n";
                    }
                }
                else if (currentQuestion == 11 && maxQuestions >= 12) {
                    cout << "[ 12 ] Вопрос: Какой оператор используется для условия в C++?\n";
                    cout << "[ A ] if   [ B ] when\n";
                    cout << "[ C ] cond [ D ] ?\n";
                    cout << "Выбрать ответ (A/B/C/D): ";

                    char answer;
                    cin >> answer;

                    if (answer == 'A' || answer == 'a') {
                        score += 10;
                        cout << "\033[32mПравильно! +10 очков\033[0m\n";
                    }
                    else {
                        lives--;
                        cout << "\033[31mНеправильно! Правильный ответ: A (if)\033[0m\n";
                    }
                }

                currentQuestion++;
                if (lives <= 0) {
                    gameOver = true;
                    system("clear");
                    cout << "           ИГРА ОКОНЧЕНА!             \n";
                    cout << "         ВЫ ПРОИГРАЛИ! :(              \n";
                    cout << "Игрок: " << playerName << "\n";
                    cout << "Счет: " << score << "\n";
                    cout << "Нажмите Enter для возврата в меню...";
                    cin.ignore();
                    cin.get();
                    break;
                }

                cout << "Нажмите Enter для следующего вопроса...";
                cin.ignore();
                cin.get();
            }
            if (!gameOver && lives > 0) {
                system("clear");
                cout << "           ПОБЕДА!                    \n";
                cout << "    ВИКТОРИНА ЗАВЕРШЕНА!             \n";
                cout << "Игрок: " << playerName << "\n";
                cout << "Оставшиеся жизни: " << lives << "\n";
                cout << "Набранные очки: " << score << "\n";
                cout << "Нажмите Enter для возврата в меню...";
                cin.ignore();
                cin.get();
            }
        }
        else if (choice == 2) {
            bool inSettings = true;

            while (inSettings) {
                system("clear");

                if (colorScheme == 1) {
                    cout << "\033[0m";
                }
                else if (colorScheme == 2) {
                    cout << "\033[32m";
                }
                else if (colorScheme == 3) {
                    cout << "\033[33m";
                }

                cout << "           НАСТРОЙКИ                \n";
                cout << "1. Редактировать имя игрока (текущее: " << playerName << ")\n";
                cout << "2. Количество вопросов (текущее: " << questionsCount << ")\n";
                cout << "3. Цвет интерфейса (текущий: " << (colorScheme == 1 ? "Стандартный" : (colorScheme == 2 ? "Зеленый" : "Желтый")) << ")\n";
                cout << "4. Вернуться в главное меню\n";
                cout << "Выберите пункт: ";

                int settingsChoice;
                cin >> settingsChoice;

                if (settingsChoice == 1) {
                    cout << "Введите новое имя игрока: ";
                    cin.ignore();
                    getline(cin, playerName);
                }
                else if (settingsChoice == 2) {
                    cout << "Выберите количество вопросов (8, 10, 12): ";
                    cin >> questionsCount;

                    if (questionsCount != 8 && questionsCount != 10 && questionsCount != 12) {
                        questionsCount = 10; // По умолчанию
                        cout << "Неверное значение! Установлено 10 вопросов.\n";
                        cout << "Нажмите Enter...";
                        cin.ignore();
                        cin.get();
                    }
                }
                else if (settingsChoice == 3) {
                    cout << "Выберите цвет интерфейса:\n";
                    cout << "1. Стандартный\n";
                    cout << "2. Зеленый\n";
                    cout << "3. Желтый\n";
                    cout << "Ваш выбор: ";
                    cin >> colorScheme;

                    if (colorScheme < 1 || colorScheme > 3) {
                        colorScheme = 1;
                    }
                }
                else if (settingsChoice == 4) {
                    inSettings = false;
                }
            }
        }
        else if (choice == 3) {
            // ПРАВИЛА
            system("clear");

            if (colorScheme == 1) {
                cout << "\033[0m";
            }
            else if (colorScheme == 2) {
                cout << "\033[32m";
            }
            else if (colorScheme == 3) {
                cout << "\033[33m";
            }

            cout << "             ПРАВИЛА                \n";
            cout << "1. Игрок получает 10 очков за правильный ответ\n";
            cout << "2. За правильный ответ игрок проходит дальше\n";
            cout << "3. За неправильный ответ игрок теряет одну жизнь\n";
            cout << "4. У игрока изначально 3 жизни\n";
            cout << "5. Игра заканчивается победой после всех вопросов\n";
            cout << "6. Игра заканчивается поражением при потере всех жизней\n";
            cout << "Нажмите Enter для возврата в меню...";
            cin.ignore();
            cin.get();
        }
        else if (choice == 4) {
            system("clear");
            cout << "Спасибо за игру! До свидания!\n";
            isRunning = false;
        }
        else {
            cout << "Неверный выбор! Нажмите Enter...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
