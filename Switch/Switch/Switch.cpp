#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"rus");
	int a = 0;
    cout << "Введите год своего рождения!\n";
	cin >> a;
	a = a % 12;
	if (a == 0) {
		cout << "Вы обезьяна\n";
	}
	else if (a == 1){
		cout << "Вы петух\n" << endl;
	}
	else if (a == 2) {
		cout << "Вы собака\n" << endl;
	}
	else if (a == 3) {
		cout << "Вы свинья\n" << endl;
	}
	else if (a == 4) {
		cout << "Вы крыса\n" << endl;
	}
	else if (a == 5) {
		cout << "Вы бык\n" << endl;
	}
	else if (a == 6) {
		cout << "Вы тигр\n" << endl;
	}
	else if (a == 7) {
		cout << "Вы кролик\n" << endl;
	}
	else if (a == 8) {
		cout << "Вы дракон\n" << endl;
	}
	else if (a == 9) {
		cout << "Вы змея\n" << endl;
	}
	else if (a == 10) {
		cout << "Вы лошадь\n" << endl;
	}
	else if (a == 11) {
		cout << "Вы коза\n" << endl;
	}
}
