#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int n = 10;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
        cout << &(arr[i]) << endl;
	}
}