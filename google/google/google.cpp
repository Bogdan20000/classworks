#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int a;
	int b;
	int c;
	int e;
	int f;
	cout << "Введите число, в котором есть хоть одна четверка\n";
	cin >> a;
	int d;
	for (int count = 0; count < a; count++) {
	cin >> d;
start:	b = rand() % d;
	c = d - b;
	while (b > 0) {
		e = b % 10;
		b = b / 10;
		cout << b << endl;
        if (e == 4) {
		    goto start;
	}
	}
	while (c > 0) {
		f = c % 10;
		c = c / 10;
		if (f == 4) {
			goto start;
		}
	}
	cout << "Case #" << count + 1 << " " << b << " " << c << endl;
	}
}