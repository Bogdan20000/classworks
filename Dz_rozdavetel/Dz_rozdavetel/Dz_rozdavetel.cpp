#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int array;
	int a;
    cout << "Enter, how much students in the class:\n"; 
	cin >> a;
	string *students = new string[a];
	for (int i = 0; i < a; i++) {
		cout << "Enter " << i+1 <<
		cin >> students[i];
	}
	srand(time(NULL));
	array = rand() % a;
	cout << students[array];
}