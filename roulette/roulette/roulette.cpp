
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
    int randomNumber = rand() % 50 + 1;
	int b = 0;
	int c = 0;
	cout << "Шарик попал на поле" << randomNumber << endl;
	// 1
	cout << "Игра 1" << endl;
	if (randomNumber > 25) {
		cout << "Вы выиграли\n";
		b = b + 1;
	}
	else {
		cout << "Вы проиграли" << endl;
		c = c + 1;
	}

	// 2
	cout << "Игра 2" << endl;
	if (randomNumber > 10 && randomNumber < 30) {
		cout << "Вы выиграли\n";
		b = b + 1;
	}
	else {
		cout << "Вы проиграли" << endl;
		c = c + 1;
	}

	// 3
	cout << "Игра 3" << endl;
	int a = randomNumber % 2;
	if (a == 0) {
		cout << "Вы выиграли\n";
		b = b + 1;
	}
	else {
		cout << "Вы проиграли" << endl;
		c = c + 1;
	}
	cout << "Вы выиграли" << b << endl;
	cout << "Вы проиграли" << c << endl;
}
