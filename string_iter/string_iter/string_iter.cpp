#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] > 96 && a[i] < 123) {
            a[i] -= 32;
		}
		else {
			a[i] = a[i] + 0;
		}
	}
    cout << a << endl;
	return 0;
}