#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void bogdan_super_rozgadivetel(string &a, int b) {
	for (int i = 0; i < a.length(); i++) {
		a[i] = a[i] - b;
	}
	cout << a << endl;
}

int main()
{
	ifstream file_in;
	setlocale(LC_ALL, "rus");
	string b;
	int c;
	file_in.open("C:\\Users\\Admin\\Desktop\\Загадыватель.txt");
	cout << "Привет!" << endl; 
	cout << "Я титичный розгадыватель!" << endl;
	file_in >> b;
	file_in >> c;
	cout << b << endl;
	file_in.close();
	ofstream file_out;
	file_out.open("C:\\Users\\Admin\\Desktop\\Загадыватель.txt");
	bogdan_super_rozgadivetel(b, c);
	cout << b << endl;
	file_out << b;
	file_out.close();
	return 0;
}