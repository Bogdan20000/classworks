#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b) {
	int y = a;
	a = b;
	b = y;
}

int main()
{
	int *arr; 
	int size;
	cout << "n = ";
	cin >> size;
	if (size <= 0) {
		cerr << "Invalid size" << endl;
		return 1;
	}
	arr = new int[size]; 

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				for (int z = 0; z < size; z++) {
					cout << arr[z] << " ";
				}
				cout << endl;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}