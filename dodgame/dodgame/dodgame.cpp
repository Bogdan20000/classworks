#include "pch.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

void drawField(char(*field)[10], int w) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}
}

int main()
{
	srand(time(NULL));
	char arr[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = ' ';
		}
		cout << endl;
	}
    int i = rand() % 10;
	int j = rand() % 10;
	arr[i][j] = '.';
	drawField(arr, 10);
	string what;
	for (int z = 0; z < 12; z++) {
		cin >> what;
		if (what == "w") {
			arr[i][j] = ' ';
			arr[i - 1][j] = '.';
		}
		if (what == "a") {
			arr[i][j] = ' ';
			arr[i][j - 1] = '.';
		}
		if (what == "s") {
			arr[i][j] = ' ';
			arr[i + 1][j] = '.';
		}
		if (what == "d") {
			arr[i][j] = ' ';
			arr[i][j + 1] = '.';
		}
    system("CLS");
	drawField(arr, 10);
	}
}