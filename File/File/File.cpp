#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ifstream file_in;
	int word[34];
	file_in.open("C:\\Users\\Admin\\Desktop\\text.txt");
	for (int i = 0; i < 34; i++) {
		file_in >> word[i];
	}
	for (int i = 0; i < 34; i++) {
		cout << word[i] << endl;
	}
	file_in.close();
}