#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int *Shaurma(int *ar, int *arr){
	int *a = new int[12];
	for (int i = 0; i < 12; i++) {
		a[i] = ar[i] + arr[i];
	}
	return a;
}

int Sosiska_v_teste(int *ar, int *arr) {
	int a = 0;
	int b = 0;
	int c;
	for (int i = 0; i < 12; i++) {
		a = ar[i] + a;
		b = arr[i] + b;
	}
	if (a > b) {
		c = 0;
	}
	else if (a < b) {
	    c = 1;
	}
	else {
	    c = 2;
	}
	return c;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int *shaurma = new int [12];
	int *sosiska_v_teste = new int [12];
	for (int i = 0; i < 12; i++) {
		shaurma[i] = rand() % 1950000 + 50000;
		sosiska_v_teste[i] = rand() % 1950000 + 50000;
	}
	string month[12];
	month[0] = "Январе";
	month[1] = "Феврале";
	month[2] = "Марте";
	month[3] = "Апрелье";
	month[4] = "Майе";
	month[5] = "Июнье";
	month[6] = "Июлье";
	month[7] = "Августе";
	month[8] = "Сентябрье";
	month[9] = "Октябрье";
	month[10] = "Ноябрье";
	month[11] = "Декабрье";
    cout << "Привет! Хочешь узнать сколько зарабатывает шавуха, которую ела Стася, и которую купит Жора Стасе на следующие занятие и сосиска в тесте, о которой мечтает Стася? Да? Если что, это было утверждение!" << endl;
	int *Return;
	Return = Shaurma(shaurma, sosiska_v_teste);
	for (int i = 0; i < 12; i++) {
		cout << "В " << month[i] << " шавуха, которую ела Стася, и которую купит Жора Стасе на следующие занятие и сосиска в тесте, о которой мечтает Стася заработали: " << Return[i] << ";" << endl;
	}
	int pobeditel;
	pobeditel = Sosiska_v_teste(shaurma, sosiska_v_teste);
	if (pobeditel == 0) {
		cout << "Шавуха победила!\n\n\n\n\n\n\n\n\n\n\n";
	}
	else if (pobeditel == 1) {
		cout << "Сосиска в тесте победила!\n\n\n\n\n\n\n\n\n\n\n";
	}
	else {
		cout << "Ничья\n\n\n\n\n\n\n\n\n\n\n";
	}
}