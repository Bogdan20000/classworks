#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	int array;
	setlocale(LC_ALL, "rus");
	string names[40]{ "кот ","Вася ","Бомж ","президент ","Петя ","Саша ","Даша ","Паша ","Маша ","Жора ","Богдан ","Артем ","королева ","король ","Яна ","Оля ","Даня ","Ярик ","Тема ","Ваня ","Соня ","Юля ","Алкоголик ","Артур ","Злата ","Олексей ","Какашка ","Миша ","корова ","Стася ","Аня ","Витя ","Юда ","Дина ","Сергей ","Денис ","Дима ","Диана ","Игорь ","Катя " };
        srand(time(NULL));`
	array = rand() % 40;
	cout << names[array];
	string doing[16]{ "прыгает ","бегает ","спит ","кушает ", "п'ет пиво ","гавкает ","ничего не делает ","убивает ","пиляет ","гавкает ","смеется ","думает ", "хочет подарок ","гавкает ","ничего не делает ","убивает " };
	srand(time(NULL));
	array = rand() % 16;
	cout << doing[array];
	string why[8]{ "потому, что он(она) таким(ой) радился(ась)","потому, что на улице зима","потому, что хочет стать извесным(ой)","потому, что любит себя","потому, что он(она) так хочет","потому, что он(она) устал(а)","потому, что хочет пить","потому, что хочет спать" };
	srand(time(NULL));
		array = rand() % 8;
	cout << why[array];
}
