#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string nastroenie;
question: cout << "Привет!\n";
	cout << "Как жизнь?\n";
	cin >> nastroenie;
	if (nastroenie == "OK" || nastroenie == "Ok" || nastroenie == "ok" || nastroenie == "fine" || nastroenie == "good" || nastroenie == "Norm" || nastroenie == "normal" || nastroenie == "norm" || nastroenie == "Good" || nastroenie == "Fine" || nastroenie == "Normal" || nastroenie == "super" || nastroenie == "Super" || nastroenie == "okey" || nastroenie == "Okey") {
		cout << "Ето отлично!\n";
	}
	else if (nastroenie == "Bad" || nastroenie == "bad" || nastroenie == "Not" || nastroenie == "not" || nastroenie == "Not_so_good" || nastroenie == "not_so_good" || nastroenie == "So" || nastroenie == "so" || nastroenie == "so_so" || nastroenie == "So_so") {
		cout << "Плохо :(\n";
		cout << "Желаю, чтоб все было лучьше!\n";
	}
	else {
		cout << "Плохо тебя понимаю!\n";
		cout << "Если что, то надо писать на английском\n";
		cout << "К примеру Okey, или Bad\n";
		goto question;
	}
}