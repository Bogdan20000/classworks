

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
    std::cout << "Hello World!\n"; 
	cout << "Введите первую координату" << endl;
	float x1;
	cin >> x1;
	cout << "Введите вторую координату" << endl;
	float y1;
	cin >> y1;
	cout << "Введите третюю координату" << endl;
	float x2;
	cin >> x2;
	cout << "Введите четвертую координату" << endl;
	float y2;
	cin >> y2;
	cout << "Разстояние: " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << "!" << endl;
}


