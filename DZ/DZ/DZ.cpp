#include "pch.h"
#include <windows.h>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

struct Good {
	string name;
	float price;
	int count;
};

void add(Good goods[150], int &size) {
	cout << "Adding:\n";
	cout << "Имя: ";
	cin >> goods[size].name;
	cout << "Цена: ";
	cin >> goods[size].price;
	cout << "Количество: ";
	cin >> goods[size].count;

	size++;
}

void Print(Good goods[150], int size) {
	cout << "X---------------------------------------------------X\n";
	cout << "| Имя             |Цена          |Количество        |\n";
	cout << "X---------------------------------------------------X\n";
	for (int i = 0; i < size; i++) {
		cout << "| ";
		cout.width(16);
		cout << goods[i].name << "|";
		cout.width(14);
		cout << goods[i].price << "|";
		cout.width(18);
		cout << goods[i].count << "|\n";
		cout << "-----------------------------------------------------\n";
	}
	cout << endl << endl;
}

int main()
{
	
	setlocale(LC_ALL, "rus");
	Good goods[150];
	int size = 0;
	Print(goods, size);
	while (true) {
		system("CLS");
		Print(goods, size);
		int menu;
		cout << "Меню:\n 1.Add \n\n > ";
		cin >> menu;
		if (menu == 1) {
			add(goods, size);
		}
		else {
			break;
		}
	}
}