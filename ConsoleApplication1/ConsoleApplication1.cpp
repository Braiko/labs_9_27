// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "ConsoleApplication1.h"

using namespace std;

void lab01();
void lab02();
void lab03();
void lab04();

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "hello my dear friends. \nIn this program you found compilation from your fride labs and some other tasks.\nFor fun, your labs will be modify (fo prevent copypaste)" << endl;
	cout << "chose labs for run" << endl << endl;
	cout << "a for lab01 \n\t(Найти все числа от 0 до 100 000, цифры в котором, возводятся в куб и сумируются, и при этом полученое число = данному*2)" << endl << endl;
	cout << "b for lab02 \n\t(Дано целое число. Получить новое число, развернув запись исходного числа на 180° (то есть, зеркально. например, было 1267, стало 7621))" << endl << endl;
	cout << "c for lab03 \n\t(Дано два дійсних числа. Вивести перше з них якщо воно більше другого, і обидва якщо це не так.)" << endl << endl;
	cout << "d for lab04 \n\t(Дано три дійсних числа і вивести ті з них, котрі потрапляють в проміжок (1;3))" << endl << endl;
	char answer;
	cin >> answer;
	switch (answer)
	{
	case 'a':
		lab01();
		break;
	case 'b':
		lab02();
		break;
	case 'c':
		lab03();
		break;
	case 'd':
		lab04();
		break;

	default:
		break;
	}
	system("pause");
	return 0;
}

void lab01() {
	int MAX_NUMBER = 100000;
	int sum = 0;
	int workNumber = 0;
	for (int i = 0;i < MAX_NUMBER;i++) {
		int sum = 0;
		workNumber = i;
		int remainder = 0;
		do
		{
			remainder = workNumber % 10;
			workNumber = workNumber / 10;
			sum += remainder*remainder*remainder;
		} while (workNumber > 0);
		if (sum == i * 10)
		{
			cout << i << endl;
		}
	}
}

void lab02() {
	cout << "please enter eny positive number" << endl;
	int number;
	cin >> number;
	int remainder = 0;
	do {
		remainder = number % 10;
		number = number / 10;
		cout << remainder;
	} while (number > 0);
}

void lab03() {
	double a, b;
	cout << "please enter tow number" << endl;
	cin >> a;
	cin >> b;
	if (a > b)
		cout << a;
	else
		cout << a << " " << b << endl;
}

void lab04() {
	cout << "plase enter 3 number" << endl;
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a < 3 && a>1)
		cout << a << endl;
	if (b < 3 && b > 1)
		cout << b << endl;
	if (c < 3 && c>1)
		cout << c << endl;;
}