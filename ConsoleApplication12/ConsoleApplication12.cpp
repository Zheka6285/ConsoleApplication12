#include <iostream>

int main()
{
	using namespace std;
	
	setlocale(LC_ALL, "rus");

	int a;
	cout << "Квадрат: 1\nТриугольник: 2\nКрест: 3\n";
	cout << "input a: ";
	cin >> a;
	cout << "\n";
	switch (a) {

	case 1: cout << "**********\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "*        *\n";
		cout << "**********\n" << "\n"; break;

	case 2: cout << "*\n";
		cout << "**\n";
		cout << "* *\n";
		cout << "*  *\n";
		cout << "*   *\n";
		cout << "*    *\n";
		cout << "*     *\n";
		cout << "*      *\n";
		cout << "*       *\n";
		cout << "**********\n" << "\n"; break;

	case 3: cout << "    *    \n";
		cout << "    *    \n";
		cout << "    *    \n";
		cout << "    *    \n";
		cout << "*********\n";
		cout << "    *    \n";
		cout << "    *    \n";
		cout << "    *    \n";
		cout << "    *    \n" << "\n"; break;
	default: cout << "Ошибка" << "\n";
	}


}

