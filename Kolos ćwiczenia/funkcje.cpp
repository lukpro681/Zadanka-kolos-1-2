#include "funkcje.h"

void funkcjamin(int* tab, size_t rozmiar, int rodzaj)
{
	if (rodzaj == 1) {
		int min = tab[0];
		int index = 0;
		for (int i = 0; i < (rozmiar - 1); i++) {
			if (min > tab[i]) {
				min = i;

			}
			if (tab[i] < tab[index]) {
				index = i;
			}
		}
		cout << "Najmniejszy element tablicy o wartoœci: " << tab[index] << "\njest na pozycji nr : " << index + 1;
	}
	else {
		int min = tab[0];
		int index = 0;
		for (int i = (rozmiar - 1); i > 0; i--) {
			if (min > tab[i]) {
				min = i;

			}
			if (tab[i] <= tab[index]) {
				index = i;
			}
		}
		cout << "Najmniejszy element tablicy o wartoœci: " << tab[index] << "\njest na pozycji nr : " << index + 1;
	}
}


void funkcjamin(int* tab, size_t rozmiar, bool opcja)
{
	if (opcja) {
		int min = tab[0];
		int index = 0;
		for (int i = (rozmiar - 1); i > 0; i--) {
			if (min > tab[i]) {
				min = i;

			}
			if (tab[i] < tab[index]) {
				index = i;
			}
		}
		cout << "Najmniejszy element tablicy o wartoœci: " << tab[index] << "\njest na pozycji nr : " << index + 1;
	}
	else {
			int min = tab[0];
			int index = 0;
			for (int i = 0; i < (rozmiar - 1); i++) {
				if (min > tab[i]) {
					min = i;

				}
				if (tab[i] <= tab[index]) {
					index = i;
				}
			}
			cout << "Najmniejszy element tablicy o wartoœci: " << tab[index] << "\njest na pozycji nr : " << index + 1;
		}
}
