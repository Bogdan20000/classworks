#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n = 0;
	int b = 0;
	int c = 0;
	cout << "Введите число\n";
	cin >> n;
	cout << "Введите стопень\n";
	cin >> с;
	for (int i = 1; i <= n; i++) {
		b += i;
		cout << i;
		cout << " + ";
	}
	cout << b << endl;
}