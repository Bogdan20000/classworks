#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string a = "moto";
	string b = "cycle";
	string c = a + b;
	cout << c << endl;
}
