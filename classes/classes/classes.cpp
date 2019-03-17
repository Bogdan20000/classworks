#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Cat {

	string name;
	int age;
	double weight;
public:
	Cat() {
		name = "None";
		age = 0;
		weight = 0;
	}
	Cat(string name, int age, double weight) { //конструктор от Бога
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
	Cat(string name) {
		this->name = name;
		age = 0;
		weight = 0;
	}
	void sayMeow() {
		cout << name << " said meow!" << endl;
	}
};

int main()
{
	setlocale (LC_ALL, "RUS");
	Cat cat("Snowball", 3, 4.5);
	cat.sayMeow();
	Cat *cat2 = new Cat("Pusher", 7, 5.2);
	cat2->sayMeow();
    cout << ""; 
}