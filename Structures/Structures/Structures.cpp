#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct TIME {
	int year;
	int date;
	int month;
	int hour;
	int minutes;
};

struct TICKET {
	string name;
	int row;
	int seat;
	int cena;
	string kupura;
	TIME tIME;
};

string tIME(TIME a) {
	int b = 0;
	string res = to_string(a.date) + "." + to_string(b) + to_string(a.month) + "." + to_string(a.year) + " " + "в" + " " + to_string(a.hour) + ":" + to_string(a.minutes);
	return res;
}

string Ticket(TICKET a) {
	string res = "Фильм: " + a.name + "\n" + "Ряд:" + " " + to_string(a.row) + "\n" + "Место:" + " " + to_string(a.seat) + "\n" + "Цена этого билета:" + " " + to_string(a.cena) + " " + a.kupura + "\n" + "Сеанс будет:" + " " + tIME(a.tIME);
	return res;
}

void vivod(string file_name, string text) {
	ofstream file_in;
	file_in.open(file_name);
	file_in << text;
	file_in.close();
}

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Привет!\n";
	cout << "Хочешь купить тут билеты?\n";
	TICKET ticket1;
	ticket1.name = "Super_Bogdan";
	ticket1.row = 1;
	ticket1.seat = 14;
	ticket1.cena = 1000000;
	ticket1.kupura = "долларов";
	ticket1.tIME.date = 21;
	ticket1.tIME.month = 3;
	ticket1.tIME.year = 2019;
	ticket1.tIME.hour = 17;
	ticket1.tIME.minutes = 30;
	if (ticket1.tIME.month < 10) {
		to_string(ticket1.tIME.month) = "0" + ticket1.tIME.month;
	}
	if (ticket1.tIME.minutes < 10) {
		to_string(ticket1.tIME.minutes) = "0" + ticket1.tIME.minutes;
	}
	string TEXT = Ticket(ticket1);
	cout << TEXT << endl;
	string file_name = "C:\\Users\\Admin\\Desktop\\film.txt";
	vivod(file_name, TEXT);
}