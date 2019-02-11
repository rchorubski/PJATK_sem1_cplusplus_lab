
// struktury.cpp : Defines the entry point for the console application.
//


#include "pch.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include "tchar.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string>

using namespace std;
const int OW_ID = 3;
const int OW_NAZWA = 15;



struct owoc {
	char ID[OW_ID];
	char owoc[OW_NAZWA];

};



void menu(owoc OW[], int liczba_owocow);
void menu_gl(int opcja);
void edycja_owocu(owoc * OW, int & liczba_owocow);
void dodaj_owoce(owoc OW[], int & liczba_owocow);
void kasuj_owoce(owoc OW[], int & liczba_owocow);

int szukaj_wg_ID(owoc OW[], const int liczba_owocow, char ID[]);

void lista_naglowek();
void lista_owoce(owoc OW[]);
void lista_calosc(owoc OW[], const int liczba_owocow);

int indeks;

int main() {
	owoc * OW;
	int liczba_owocow;

	cout << "Podaj ilosc owocow w bazie danych - dla rezerwacji pamieci : ";
	cin >> liczba_owocow;


	OW = new owoc[liczba_owocow];

	menu(OW, liczba_owocow);

}

void menu_gl(int opcja)
{
	switch (opcja)
	{
	case 1: {
		cout << endl;
		cout << "OWOCE" << endl;
		cout << "------------------------" << endl;
		cout << "MENU GLOWNE :" << endl;
		cout << "------------------------" << endl;
		cout << "1 - Dodaj Owoc" << endl;
		cout << "2 - Usun Owoc" << endl;
		cout << "3 - Edytuj Owoce" << endl;
		cout << "4 - Lista Owocow" << endl;
		cout << "0 - Wyjscie" << endl;
		cout << ">>";
		break;
	}

	}
}

void menu(owoc OW[], int liczba_owocow)
{
	int opcja_menu;

	do {
		menu_gl(1);
		cin >> opcja_menu;
		switch (opcja_menu)
		{
		case 1: dodaj_owoce(OW, liczba_owocow);
			break;
		case 2: kasuj_owoce(OW, liczba_owocow);
			break;
		case 3: edycja_owocu(OW, liczba_owocow);
			break;
		case 4: lista_calosc(OW, liczba_owocow);
			break;
		}

	} while (opcja_menu != 0);

}



void dodaj_owoce(owoc OW[], int & liczba_owocow)
{
	int n;
	cout << "Ile chcesz dodac owocow? ";
	cin >> n;


	for (int i = 0; i < n; i++)
	{

		cout << "ID owocu : ";
		cin >> OW[indeks].ID;
		cout << "Owoc : ";
		cin >> OW[indeks].owoc;
		indeks++;
	}
}

void kasuj_owoce(owoc OW[], int & liczba_owocow)
{
	char ID[OW_ID];
	int ind;

	cout << " Podaj ID owocu do skasowania: ";
	cin >> ID;
	if ((ind = szukaj_wg_ID(OW, liczba_owocow, ID)) != -1)
	{
		for (int i = ind; i < liczba_owocow - 1; i++)
			OW[i] = OW[i + 1];

		indeks--;
		cout << "Sukces" << endl;
	}
	else
	{
		cout << "Nie odnaleziono owocu o podanym ID " << ID << endl;
		system("pause");
	}
}



void edycja_owocu(owoc * OW, int & liczba_owocow)
{
	char ID[OW_ID];
	int ind;

	cout << " Podaj ID owocu do edycji: ";
	cin >> ID;
	if ((ind = szukaj_wg_ID(OW, liczba_owocow, ID)) != -1)
	{
		for (int i = ind; i < liczba_owocow - 1; i++) {
			cout << "Stara nazwa owocu: " << OW[i].owoc << endl;

			cout << "Nowa nazwa owocu  :"; cin >> OW[i].owoc; cout << endl;
			cout << "Sukces" << endl;
		}
	}
	else
	{
		cout << "Nie odnaleziono owocu o podanym ID " << ID << endl;
		system("pause");

	}

}



int szukaj_wg_ID(owoc OW[], const int liczba_owocow, char ID[])
{
	for (int i = 0; i < liczba_owocow; i++)
		if (strcmp(OW[i].ID, ID) == 0) return(i);

	return(-1);
}


void lista_naglowek()
{
	cout << endl;
	cout << "|ID |OWOC     " << endl;
	cout << "_____________________" << endl;

}

void lista_owoce(owoc OW[])
{
	cout << "  " << OW->ID;
	cout << setw(15) << OW->owoc;
	cout << endl;
}

void lista_calosc(owoc OW[], const int liczba_owocow)
{
	lista_naglowek();
	for (int i = 0; i < indeks; i++)
		lista_owoce(OW + i);

	cout << "_____________________" << endl;
	cout << "Ilosc owocow w bazie : " << indeks << endl;
	cout << endl;

}