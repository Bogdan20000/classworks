#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
	int array[20];
	int a = 101;
	int b = 0;
	int c = 0; 
	int index;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		array[i] = rand() % 100;
	}
	for (int i = 0; i < 20; i++) {
		cout << array[i] << " ";
	}
	cout << "\n";
        for (int i = 0; i < 20; i++) {
		    if (array[i] < a) {
			a = array[i];
		}	
       
	}
		cout << a << endl;
		for (int i = 0; i < 20; i++) {
			if (array[i] > b) {
				b = array[i];
			}
		}
		a = 101;
		cout << b << endl;
		for (int i = 0; i < 20; i++) {
			if (array[i] < a) {
				a = array[i];
				index = i;
			}
		}
		cout << a << endl;
		a = 101;
		array[index] = INT_MAX;
		for (int i = 0; i < 20; i++) {
			if (array[i] < a) {
				a = array[i];
				index = i;
			}
		}
		cout << a << endl;
}
