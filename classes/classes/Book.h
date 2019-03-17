#pragma once
#include <string>
using namespace std;
class Book
{
private:
	string name;
	string avtor;
	int num_stranic;
	int god_izdania;
public:
	Book();
	Book(string name, string avtor, int num_stranic, int god_izdania);
	~Book();
};