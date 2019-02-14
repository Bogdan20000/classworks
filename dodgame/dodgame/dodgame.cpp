#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
#include <conio.h>
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
	setlocale(LC_ALL, "rus");
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
	int what;
	for (int z = 0; z < 100000; z++) {
		if (i < 0 || i>10 || j < 0 || j>10) {
			cout << "Выход за пределы!!!" << endl;
			continue;
		}
		what = _getch();
		if (what == 72 || what == 119) {
			arr[i][j] = ' ';
			arr[i - 1][j] = '.';
			i = i - 1;
		}
		if (what == 75 || what == 97) {
			arr[i][j] = ' ';
			arr[i][j - 1] = '.';
			j = j - 1;
		}
		if (what == 80 || what == 115) {
			arr[i][j] = ' ';
			arr[i + 1][j] = '.';
			i = i + 1;
		}
		if (what == 77 || what == 100) {
			arr[i][j] = ' ';
			arr[i][j + 1] = '.';
			j = j + 1;
		}
    system("CLS");
	drawField(arr, 10);
	}
}