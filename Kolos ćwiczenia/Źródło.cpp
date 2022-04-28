#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

#define Zad2

#ifdef Zad1
using text = char[100];
using czas = int;
const char* MUSIC_TYPE[] = { "Klasyczna", "Popularna", "niszowa" };
enum class typ_muzyczny { klasyczna, popularna, niszowa };

const char* Album[] = {"zdrajcy metalu", "kie³bie we ³bie","piek³o", "Klasyczne Hity"};

struct Utwor {
	text title;
	czas time;
	const char* Album;
	typ_muzyczny type;
	int pozycja;

};

void wypelnij(Utwor &u,text t, czas c, const char* a, typ_muzyczny typ, int p) {

	strcpy(u.title, t);
	u.time = c;
	u.Album = a;
	u.type = typ;
	u.pozycja = p;

}


int tab_utw(Utwor const* ut, const char* a, typ_muzyczny t) {
	int suma = 0;
	for (int i = 0; i < 12; i++) {
		if (ut[i].Album == a && ut[i].type == t) {
			suma += ut[i].time;
		}
	}

	return suma;
}

ostream& operator<<(ostream& str, Utwor const& u) {
	str << "Utwór:\t\t\t" << u.title << endl
		<< "Czas trwania:\t\t" << u.time << endl
		<< "Album:\t\t\t" << u.Album << endl
		<< "Typ muzyczny:\t\t" << MUSIC_TYPE[(int)u.type] << endl
		<< "Pozycja w rankingu:\t" << u.pozycja << endl << endl;
	return str;
}








int main() {
	setlocale(LC_ALL, "");
	Utwor ut[] = { { "diabe³ z piek³a", 200, Album[0], typ_muzyczny::niszowa, 1 },
	{"baba i dziad", 230, Album[1], typ_muzyczny::popularna, 4},
		{ "pi¹tunio", 345, Album[0], typ_muzyczny::popularna,  2},
	{ "Poniedzia³ek", 245, Album[0], typ_muzyczny::niszowa, 5 },
		{ "Dla Elizy", 230, Album[3], typ_muzyczny::klasyczna, 3 },
		{ "Czo³g", 329, Album[1], typ_muzyczny::niszowa, 6 },
	{ "Pszczólka Maja", 125, Album[3], typ_muzyczny::popularna, 8},
		{ "Czerwone Karole", 270, Album[3], typ_muzyczny::popularna, 9 },
		{ "PIESEK", 180, Album[3], typ_muzyczny::niszowa, 10 },
	{ "KOT", 200, Album[3], typ_muzyczny::niszowa, 7},
		{ "DEUS VULT", 666, Album[2], typ_muzyczny::klasyczna, 11 },
		{ "Erol", 257, Album[2], typ_muzyczny::klasyczna, 12 } };
	for (int i = 0; i < 12; i++)
		cout << ut[i];

	cout << "£¹czny czas trwania:\t" << tab_utw(ut, Album[2], typ_muzyczny::klasyczna);
}

#endif


#ifdef Zad2
#include "funkcje.h"

int main() {
	setlocale(LC_ALL, "");
	int tablica[] = { 4,5,2,8,4,6,4,3,1,4,5,8,7,3,5,1,5,9,5,7};
	const size_t rozmiar = sizeof(tablica) / sizeof(int);
	funkcjamin(tablica, rozmiar,1); cout << endl;
	funkcjamin(tablica, rozmiar,0); cout << endl;
	funkcjamin(tablica, rozmiar, false); cout << endl;
	funkcjamin(tablica, rozmiar, true); cout << endl;

}



#endif