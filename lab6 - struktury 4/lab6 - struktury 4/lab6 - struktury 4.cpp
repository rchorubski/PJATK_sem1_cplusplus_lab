
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
const int SAM_ID = 3;
const int SAM_NAZWA = 15;
const int SAM_TYP = 15;
const int SAM_KOLOR = 15;

struct samochod {
	char ID[SAM_ID];
	char samochod[SAM_NAZWA];
	char typ[SAM_TYP];
	int rok_produkcji;
	int przebieg;
	char kolor[SAM_KOLOR];
};



void menu(samochod SAM[], int liczba_samochodow);
void menu_gl(int opcja);
void edycja_samochodu(samochod * SAM, int & liczba_samochodow);
void dodaj_samochod(samochod SAM[], int & liczba_samochodow);
void kasuj_samochod(samochod SAM[], int & liczba_samochodow);

int szukaj_wg_ID(samochod SAM[], const int liczba_samochodow, char ID[]);

void lista_naglowek();
void lista_samochody(samochod SAM[]);
void lista_calosc(samochod SAM[], const int liczba_samochodow);




int indeks;

int main() {
	samochod * SAM;
	int liczba_samochodow;

	cout << "Podaj ilosc samochodow w bazie danych - dla rezerwacji pamieci : ";
	cin >> liczba_samochodow;


	SAM = new samochod[liczba_samochodow];

	menu(SAM, liczba_samochodow);

}

void menu_gl(int opcja)
{
	switch (opcja)
	{
	case 1: {
		cout << endl;
		cout << "SAMOCHODY" << endl;
		cout << "------------------------" << endl;
		cout << "MENU GLOWNE :" << endl;
		cout << "------------------------" << endl;
		cout << "1 - Dodaj Samochod" << endl;
		cout << "2 - Usun Samochod" << endl;
		cout << "3 - Edytuj Samochod" << endl;
		cout << "4 - Lista Samochodow" << endl;
		cout << "0 - Wyjscie" << endl;
		cout << ">>";
		break;
	}

	}
}

void menu(samochod SAM[], int liczba_samochodow)
{
	int opcja_menu;

	do {
		menu_gl(1);
		cin >> opcja_menu;
		switch (opcja_menu)
		{
		case 1: dodaj_samochod(SAM, liczba_samochodow);
			break;
		case 2: kasuj_samochod(SAM, liczba_samochodow);
			break;
		case 3: edycja_samochodu(SAM, liczba_samochodow);
			break;
		case 4: lista_calosc(SAM, liczba_samochodow);
			break;
		}

	} while (opcja_menu != 0);

}



void dodaj_samochod(samochod SAM[], int & liczba_samochodow)
{
	int n;
	cout << "Ile chcesz dodac samochodow? ";
	cin >> n;


	for (int i = 0; i < n; i++)
	{

		cout << "ID samochodu : ";
		cin >> SAM[indeks].ID;
		cout << "Marka samochodu: ";
		cin >> SAM[indeks].samochod;
		cout << "Typ samochodu: ";
		cin >> SAM[indeks].typ;
		cout << "Rok produkcji samochodu: ";
		cin >> SAM[indeks].rok_produkcji;
		cout << "Przebieg samochodu: ";
		cin >> SAM[indeks].przebieg;
		cout << "Kolor samochodu: ";
		cin >> SAM[indeks].kolor;

		indeks++;
	}
}

void kasuj_samochod(samochod SAM[], int & liczba_samochodow)
{
	char ID[SAM_ID];
	int ind;

	cout << " Podaj ID samochodu do skasowania: ";
	cin >> ID;
	if ((ind = szukaj_wg_ID(SAM, liczba_samochodow, ID)) != -1)
	{
		for (int i = ind; i < liczba_samochodow - 1; i++)
			SAM[i] = SAM[i + 1];

		indeks--;
		cout << "Sukces" << endl;
	}
	else
	{
		cout << "Nie odnaleziono samochodu o podanym ID " << ID << endl;
		system("pause");
	}
}



void edycja_samochodu(samochod * SAM, int & liczba_samochodow)
{
	char ID[SAM_ID];
	int ind;

	cout << " Podaj ID samochodu do edycji: ";
	cin >> ID;
	if ((ind = szukaj_wg_ID(SAM, liczba_samochodow, ID)) != -1)
	{
		for (ind; ind < liczba_samochodow - 1; ind++) {
			cout << "Stara marka samochodu: " << SAM[ind].samochod << endl;
			cout << "Nowa marka samochodu  :"; cin >> SAM[ind].samochod; cout << endl;
			cout << "Sukces" << endl;

			cout << "Stary typ samochodu: " << SAM[ind].typ << endl;
			cout << "Nowy typ samochodu:"; cin >> SAM[ind].typ; cout << endl;
			cout << "Sukces" << endl;

			cout << "Stary rok produkcji samochodu: " << SAM[ind].rok_produkcji << endl;
			cout << "Nowy rok produkcji samochodu:"; cin >> SAM[ind].rok_produkcji; cout << endl;
			cout << "Sukces" << endl;

			cout << "Stary przebieg samochodu: " << SAM[ind].przebieg << endl;
			cout << "Nowy przebieg samochodu:"; cin >> SAM[ind].przebieg; cout << endl;
			cout << "Sukces" << endl;

			cout << "Stary kolor samochodu: " << SAM[ind].kolor << endl;
			cout << "Nowy kolor samochodu:"; cin >> SAM[ind].kolor; cout << endl;
			cout << "Sukces" << endl;

		}
	}
	else
	{
		cout << "Nie odnaleziono samochodu o podanym ID " << ID << endl;
		system("pause");

	}

}



int szukaj_wg_ID(samochod * SAM, const int liczba_samochodow, char ID[])
{
	for (int i = 0; i < liczba_samochodow; i++)
		if (strcmp(SAM[i].ID, ID) == 0) return(i);

	return(-1);
}


void lista_naglowek()
{
	cout << endl;
	cout << "|ID |  MARKA  |     TYP    | ROK PROD|    PRZEBIEG  |  KOLOR  | " << endl;
	cout << "_______________________________________________________________" << endl;

}

void lista_samochody(samochod SAM[])
{
	cout << SAM->ID;
	cout << setw(10) << SAM->samochod;
	cout << setw(15) << SAM->typ;
	cout << setw(10) << SAM->rok_produkcji;
	cout << setw(15) << SAM->przebieg;
	cout << setw(10) << SAM->kolor;

	cout << endl;
}

void lista_calosc(samochod SAM[], const int liczba_samochodow)
{
	lista_naglowek();
	for (int i = 0; i < indeks; i++)
		lista_samochody(SAM + i);

	cout << "_____________________" << endl;
	cout << "Ilosc samochodow w bazie : " << indeks << endl;
	cout << endl;

}

