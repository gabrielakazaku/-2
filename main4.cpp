#include<iostream>
using namespace std;

int main() {

	setlocale(0, "");

	cout << " \x1b[95mВведите целое число: \x1b[0m";
	int number;
	cin >> number;

	int numberPK = 1;
	
	while (numberPK <= 9) {
		int answer;
		cout << " \x1b[94mРешите пример: \x1b[0m" << number << " * " << numberPK << " = ";
		cin >> answer;

		int correct = number * numberPK;

		if (answer == correct) {
			cout << " \x1b[96mПример решен верно! \x1b[0m" << endl;
		}
		else {
			cout << " \x1b[91mПример решен неверно! \x1b[0m" << endl;
			return 1;
		}
		numberPK++;
	}
	cout << " \x1b[92mВсе примеры решены! \x1b[0m" << endl;
	
	return 0;

}
