#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void bogdan_super(string &a, int b) {
	for (int i = 0; i < a.length(); i++) {
		a[i] = a[i] + b;
	}
	cout << a << endl;
}

int main()
{
	ofstream file_in;
	setlocale(LC_ALL, "rus");
	string a;
	int b;
	file_in.open("C:\\Users\\Admin\\Desktop\\Загадыватель.txt");
	cout << "Привет!" << endl;;
	cout << "Введи предложение" << endl;
	cin >> a;
	cout << "Введи число" << endl;
	cin >> b;
	bogdan_super(a, b);
	file_in << a << endl;
	file_in << b;
	return 0;
}