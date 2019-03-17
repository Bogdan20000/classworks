#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Worker {
	string name;
	int salary;
};

void show(Worker w) {
	if (w.salary < 12000 && w.salary > 9000) {
		cout << "Имя:" << w.name << endl;
		cout << "Зарплата" << w.salary << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	Worker worker;
	cout << "Имя работника:" << endl;
	cin >> worker.name;
	cout << "Зарплата " << worker.name << ":" << endl;
	cin >> worker.salary;
	show(worker);
}