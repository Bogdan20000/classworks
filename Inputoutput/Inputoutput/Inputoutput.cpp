// Я украинец
// Ето первый урок по вводу и выводу
// За ету програму вы должны мне 2000000000 долларов 

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() // начало программы
{
	setlocale(LC_ALL, "rus");
	cout << "Введите скорость в километрах за час" << endl;
	float h;
	cin >> h;
	cout << "Введите время (часы)" << endl;
	float a;
	cin >> a;
	cout << "Ответ: " << h * a << "километров" << endl;

} // начало

