#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
start:  cout << "В наличии имеются:\nЯблоки (ввести число 1)(цена 15грн. за килограм)\nБананы (ввести число 2)(цена 30 грн. за килограм)\nГруши (ввести число 3)(цена 35 грн. за килограм)\n"; 
	cout << "Введите нужный товар\n";
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	cin >> a;
	
	if (a == 1) {
		c = 15;
	}
	else if (a == 2) {
		c = 30;
	}
	else if (a == 3) {
		c = 35;
	}
	else {
		cout << "Чтото не так\n";
		goto start;
	}
	cout << "Введите количество товара в килограммах\n";
	cin >> b;
	cout << "Вы должны заплатить:\n"; 
	d = (b * c + 50);
	e = (b * c);
	cout << "С курьером\n";
	cout << d;
	cout << "Самовывозом\n";
	cout << e;
}


