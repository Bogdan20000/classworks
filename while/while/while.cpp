#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int b;
	cout << "Введи число\n";
    cin >> a;
	int c = 1;
	while (c < a + 1) {		
		b = b * c;
		c = c + 1;
	}
    cout << b;
}