#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cin >> a;
	while (a > 0) {
		b = a % 10;
		a = a / 10;
		if (b == 4) {
			b = b - 1;
		}

		cout << b << endl;
	}
}