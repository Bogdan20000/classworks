#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int b = 0;
	int d = 0;
	int c;
	int *QT = new int[20];
	for (int i = 0; i < 20; i++) {
		QT[i] = rand() % 90;
		QT[i] = QT[i] - 40;
	}
	for (int i = 0; i < 19; i++) {
		int a = QT[i] - QT[i + 1];
		if (a < 0) {
			a = a * -1;
		}
		if (b < a) {
			b = QT[i];
			d = QT[i + 1];
			c = i;
		}
	}
	for (int i = 0; i < 20; i++) {
		cout << QT[i] << " ";
	}
	cout << endl;
	cout << "Это номера: " << c + 1 << " и " << c + 2 << endl;
	cout << "Это числа: " << b << " и " << d << endl;
}