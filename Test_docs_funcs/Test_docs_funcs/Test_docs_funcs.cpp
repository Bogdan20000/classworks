#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class CAKE {
private:
	string name;
	int col;
public:
	CAKE() {
		name = "Here is nothing!!!";
		col = -9999999;
	}
	CAKE(string name, int col) {
		this->name = name;
		this->col = col;
	}
	void All_about_cake() {
			cout << "Enter name of cake:" << endl;
			cin >> name;
			cout << "Enter, how much cakes are in the storage:" << endl;
			cin >> col;
	}
};

class CAKE_SHOP {
private:
	string name;
	int col;
	int types = 4;
	CAKE *Cake = new CAKE[types];
public:
	CAKE_SHOP() {
		name = "Here is nothing!!!";
		col = -9999999;
	}
	CAKE_SHOP(int types) {
		name = "Here is nothing!!!";
		col = -9999999;
		this->types = types;
	}
	void All_about_cake() {
		for (int i = 0; i < types; i++) {
			Cake[i].All_about_cake();
		}
	}
		
};

int main()
{ 
	int a;
	cout << "How much types of cakes you have?:" << endl;
	cin >> a;
	CAKE_SHOP cake(a);
	cake.All_about_cake();
}