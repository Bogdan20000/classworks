

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");

	bool a = true;
	if (a) {
		cout << "true!" << endl;
	}

	string name;
	cout << "Ваш логин" << endl;
	cin >> name;
	if (name == "bogdan") {
		cout << "Вход подтвержен!" << endl;
	}
	else {
		cout << "Уходи, незнакомец!" << endl;
	}
	
}



