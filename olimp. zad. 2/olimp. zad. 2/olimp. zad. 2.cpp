#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int nom_oh;
	string slovo;
	cout << "Введите слово" << endl;
	cin >> slovo;
	cout << "Введите номер буквы, которая лишняя" << endl;
	cin >> nom_oh;
	nom_oh = nom_oh - 1;
	slovo[nom_oh] = ' ';
	cout << slovo;
}