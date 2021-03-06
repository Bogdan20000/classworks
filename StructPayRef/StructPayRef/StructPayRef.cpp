#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Computer {
	string firma;
	string polzovatel;
	string procesor;
	string plata;
	string pamiat;
	string pamiat_2;
	string video_carta;
	string video_carta_2;
	string gostkij_disk;
	string privod;
	string kuler;
	string korpus;
	string blok_pitania;
	int operativnaya_pamyiat;
};
void ComPUTER(Computer &computer, string firma, string polzovatel, string procesor, string plata, string pamiat, string pamiat_2, string video_carta, string video_carta_2, string gostkij_disk, string privod, string kuler, string korpus, string blok_pitania, int operativnaya_pamyiat) {
	computer.blok_pitania = blok_pitania;
	computer.firma = firma;
	computer.gostkij_disk = gostkij_disk;
	computer.korpus = korpus;
	computer.kuler = kuler;
	computer.operativnaya_pamyiat = operativnaya_pamyiat;
	computer.pamiat = pamiat;
	computer.pamiat_2 = pamiat_2;
	computer.plata = plata;
	computer.polzovatel = polzovatel;
	computer.privod = privod;
	computer.procesor = procesor;
	computer.video_carta = video_carta;
	computer.video_carta_2 = video_carta_2;
}

void COMPUTER(Computer computer) {
	cout << "Блок питания компьютера: " << computer.blok_pitania << endl;
	cout << "Фирма компьютера: " << computer.firma << endl;
	cout << "Жосткий диск компьютера: " << computer.gostkij_disk << endl;
	cout << "Корпус компьютера: " << computer.korpus << endl;
	cout << "Кулер компьютера: " << computer.kuler << endl;
	cout << "Оперативная память компьютера: " << computer.operativnaya_pamyiat << endl;
	cout << "Память компьютера: " << computer.pamiat << endl;
	cout << "Память компьютера(2): " << computer.pamiat_2 << endl;
	cout << "Плата компьютера: " << computer.plata << endl;
	cout << "Пользователь компьютера: " << computer.polzovatel << endl;
	cout << "Привод компьютера: " << computer.privod << endl;
	cout << "Процесор компьютера: " << computer.procesor << endl;
	cout << "Видео карта компьютера: " << computer.video_carta << endl;
	cout << "Видео карта компьютера(2): " << computer.video_carta_2 << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	Computer computer;
	ComPUTER(computer, "Apple", "Стася :)", "Процессор Intel Core i7-970", "Плата ASUS LGA1366 Rampage III Extreme X58/ICH10R", "Память DDR3  2048MBx2 1600MHz Corsair XMS3  8-8-8-24 XMP", "Память DDR3  2048MBx2 1600MHz Corsair XMS3  8-8-8-24 XMP", "Видеокарта MSI GeForce GTX 570", "Видеокарта MSI GeForce GTX 570", "Жесткий диск 1Tb Seagate Barracuda 7200.12", "Привод Sony Optiarc/NEC (AD-7263S)", "Кулер Zalman 9900 MAX", "Корпус Miditower Thermaltake Element V", "БП FSP 900W", 6);
	COMPUTER(computer);
}