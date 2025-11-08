#include<iostream>
using namespace std;

int main() {

	setlocale(0, "");

	cout << " \x1b[94mВведите число: \x1b[0m";
	float answer;   
	cin >> answer;

	if (answer >= 0 && answer <= 10) {
		cout << " \x1b[96mЧисло в диапазоне: 0-10 \x1b[0m" << endl;
	}
	else if (answer >= 11 && answer <= 20) {
		cout << " \x1b[96mЧисло в диапазоне: 11-20 \x1b[0m" << endl;
	}
	else if (answer >= 21 && answer <= 30) {
		cout << " \x1b[96mЧисло в диапазоне: 21-30 \x1b[0m" << endl;
	}
	else if (answer >= 31 && answer <= 40) {
		cout << " \x1b[96mЧисло в диапазоне: 31-40 \x1b[0m" << endl;
	}
	else if (answer >= 41 && answer <= 50) {
		cout << " \x1b[96mЧисло в диапазоне: 41-50 \x1b[0m" << endl;
	}
	else if (answer >= 51 && answer <= 60) {
		cout << " \x1b[96mЧисло в диапазоне: 51-60 \x1b[0m" << endl;
	}
	else if (answer >= 61 && answer <= 70) {
		cout << " \x1b[96mЧисло в диапазоне: 61-70 \x1b[0m" << endl;
	}
	else if (answer >= 71 && answer <= 80) {
		cout << " \x1b[96mЧисло в диапазоне: 71-80 \x1b[0m" << endl;
	}
	else if (answer >= 81 && answer <= 90) {
		cout << " \x1b[96mЧисло в диапазоне: 81-90 \x1b[0m" << endl;
	}
	else if (answer >= 91 && answer <= 100) {
		cout << " \x1b[96mЧисло в диапазоне: 91-100 \x1b[0m" << endl;
	}
	else if (answer < 0) {
		cout << " \x1b[91mОшибка! Число меньше 0 \x1b[0m" << endl;
	}
	else {
		cout << " \x1b[91mОшибка! Число больше 100\x1b[0m";
	}


	return 0;

}
