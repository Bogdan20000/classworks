#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int* V_Massiv(){
	int* Mass = new int[30];
	ifstream mass("C:\\Users\\Admin\\Desktop\\Temperature.txt");
	for (int i = 0; i < 30; i++) {
		mass >> Mass[i];
	}
	mass.close();
	return Mass;
}

int* Something(int *s) {
	int max = INT32_MIN;
	int min = INT32_MAX;
	int* Mass = new int[2];
	for (int i = 0; i < 30; i++) {
		if (s[i] > max) {
			max = s[i];
		}
		if (s[i] < min) {
			min = s[i];
		}
		Mass[0] = max;
		Mass[1] = min;
	}
	return Mass;
}

int main()
{
	/*int a;
	int b = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		b = b + c;
	}
	cout << b;*/
	int *v_massiv = V_Massiv();
	for (int i = 0; i < 30; i++) {
		cout << v_massiv[i] << endl;
	}
	cout << endl;
	int* something = Something(v_massiv);
	for (int i = 0; i < 2; i++) {
		cout << something[i] << endl;
	}
}