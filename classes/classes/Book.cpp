#include "pch.h"
#include "Book.h"

Book::Book()
{
	name = "HERE IS NOTHING";
	avtor = "HERE IS NOTHING";
	num_stranic = -9999999999;
	god_izdania = -9999999999;
}

Book::Book(string name, string avtor, int num_stranic, int god_izdania) {
	this->name = name;
	this->avtor = avtor;
	this->num_stranic = num_stranic;
	this->god_izdania = god_izdania;
}

Book::~Book()
{
}