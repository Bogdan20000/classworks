#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int gg[15]
	for (int i = 0; i < 15; i++) {
		gg[i] = rand() % 46 - 10;
	}
	for (int i = 0; i < 15; i++) {
		cout << gg[i];
	}
}
