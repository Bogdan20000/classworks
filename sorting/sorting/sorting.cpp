#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int b = 10;
	int chocolatka = 0;
	int c = 100001;
	int *a = new int[b];
	for (int i = 0; i < b; i++) {
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < b; i++) {
		for (int x = 0; x < b; x++) {
			if (a[x] < c) {
				c = a[x];
			}
		}
	}
    cout << c << " ";
	c = c + 100001;
}