#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream file_in;
	int t = 0;
	int f = 0;
	int word[5][5];
	    file_in.open("C:\\Users\\Admin\\Desktop\\Websites.txt");
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				file_in >> word[i][j];
			}
		}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << word[i][j] << " ";
		}
		cout << endl;
	}
	int i = 0;
		for (int j = 0; j < 5; j++) {	
			t = t + word[i][j];
	}
		cout << t;
		int t = 0;
		int i = 1;
		for (int j = 0; j < 5; j++) {
			t = t + word[i][j];
		}
		cout << t;
		int t = 0;
		int i = 2;
		for (int j = 0; j < 5; j++) {
			t = t + word[i][j];
		}
		cout << t;
		int t = 0;
		int i = 3;
		for (int j = 0; j < 5; j++) {
			t = t + word[i][j];
		}
		cout << t;
		int t = 0;
		int i = 4;
		for (int j = 0; j < 5; j++) {
			t = t + word[i][j];
		}
	cout << t;
	file_in.close();
}