#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int number_of_rozetok;
	int size_rozetok = 1;
	int size_rozetki;
	cout << "Введите количество розеток:" << endl;
	cin >> number_of_rozetok;
	for (int z = 0; z < number_of_rozetok; z++) {
        cout << "Введите количество раземов:" << endl;
		cin >> size_rozetki;
		size_rozetok = size_rozetok + size_rozetki;
	}
	cout << "И так у нас ";
	cout << size_rozetok - number_of_rozetok << " чайников" << endl;
}