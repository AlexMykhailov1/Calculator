// Calculator.cpp
// Alex Mykhailov

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string op, ans;
	int a, b, c;

	do {
		cout << "Enter operation needed." << endl;
		cout << "+  -  *  / " << endl;
		cout << "Your choise: "; cin >> op;
		if (op == "+") {
			cout << "Enter the first number: "; cin >> a;
			cout << "Enter the second number: "; cin >> b;
			c = a + b;
			cout << "A + B = " << c << endl;
		}
		else if (op == "-") {
			cout << "Enter the first number: "; cin >> a;
			cout << "Enter the second number: "; cin >> b;
			c = a - b;
			cout << "A - B = " << c << endl;
		}
		else if (op == "/") {
			cout << "Enter the first number: "; cin >> a;
			cout << "Enter the second number: "; cin >> b;
			c = a / b;
			cout << "A / B = " << c << endl;
		}
		else if (op == "*") {
			cout << "Enter the first number: "; cin >> a;
			cout << "Enter the second number: "; cin >> b;
			c = a * b;
			cout << "A * B = " << c << endl ;
		}
		cout << "Do you want to calculate again?" << endl;
		cout << "Your answer: ";cin >> ans;
	} while (ans == "yes");

	cin.get();
}
