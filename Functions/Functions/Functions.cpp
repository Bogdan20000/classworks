#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {
	string a;
	cin >> a;
	if (a[0] > 96 && a[0] < 123) {
		a[0] -= 32;
	}
	else {
		a[0] = a[0];
	}
         
	 
	for (int i = 0; i < a.length(); i++) {
		if (a[i] < 65 || a[i] > 9) {
			a[i] += 32;
		}
	}
	cout << a << endl;
}