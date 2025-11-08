#include<iostream>
using namespace std;

int main() {

	setlocale(0, "");

	cout << " \x1b[94m[+]\x1b[0mСкладывать\n \x1b[94m[-]\x1b[0mВычитать\n \x1b[94m[*]\x1b[0mУмножать\n \x1b[94m[/]\x1b[0mДелить\n \x1b[95mВведите операцию: \x1b[0m ";
	char answer;
	cin >> answer;

	cout << " \x1b[93mВведите первое число: \x1b[0m ";
	float answer1;
	cin >> answer1;

	cout << " \x1b[93mВведите второе число: \x1b[0m ";
	float answer2;
	cin >> answer2;

	if (answer == '+') {
		float x = answer1 + answer2;
		cout << " \x1b[96mОтвет: \x1b[0m" << x << endl;
	}
	else if (answer == '-') {
		float y = answer1 - answer2;
		cout << " \x1b[96mОтвет: \x1b[0m" << y << endl;
	}
	else if (answer == '*') {
		float z = answer1 * answer2;
		cout << " \x1b[96mОтвет: \x1b[0m " << z << endl;
	}
	else if (answer == '/') {
		float c = answer1 / answer2;
		cout << " \x1b[96mОтвет: \x1b[0m " << c << endl;
	}
	else {
		cout << " \x1b[91mТакой операции нет\x1b[0m";
	}


	return 0;

}
