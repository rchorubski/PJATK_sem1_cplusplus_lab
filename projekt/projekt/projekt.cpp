// Projekt.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


int zabezpieczenie(int dzien, int miesiac, int rok) {

	int bladWejscia = 0;

	if (dzien >= 29 && miesiac == 2) {
		if (((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0) && dzien == 29) {
			//cout << "Podany miesiac jest ok!" << endl;
			bladWejscia = 0;
		}
		else {
			cout << "Podany miesiac nie ma tylu dni!" << endl;
			bladWejscia = 1;
		}

	}

	if (dzien == 31 && (miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11)) {

		cout << "Podany miesiac nie ma tylu dni!" << endl;
		bladWejscia = 1;

	}



	return bladWejscia;
}


string tydzien[] =
{ "Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela" };

int liczbaDniWRoku[] =
{ 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
string months[] = { "Styczen", "Luty", "Marzec",
						   "Kwiecien", "Maj", "Czerwiec",
						   "Lipiec", "Sierpien", "Wrzesien",
						   "Pazdziernik", "Listopad", "Grudzien" };

int dniMiesiaca[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


int przestepny(int rok) {
	return ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0);
}
int przestepnyJulianski(int rok) {
	return (rok % 4 == 0);
}



/*dla podanej daty wyznacza dzien tygodnia
0 - poniedziałek, 1 - wtorek, ... 6 - niedziela*/
int nazwaDniaTygodnia(int dzien, int miesiac, int rok) {
	int dzienRoku;
	int a, b, c;
	int wynik;

	dzienRoku = dzien + liczbaDniWRoku[miesiac - 1];
	if ((miesiac > 2) && (przestepnyJulianski(rok) == 1))
		dzienRoku++;

	a = (rok - 1) % 100;
	b = (rok - 1) - a;
	c = a + (a / 4);
	wynik = (((((b / 100) % 4) * 5) + c) % 7);
	wynik += dzienRoku - 1;
	wynik %= 7;

	return wynik;
}

int nazwaDniaTygodniaJulianskiego(int dzien, int miesiac, int rok) {
	int dzienRoku;
	int a, b, c;
	int wynik;

	dzienRoku = dzien + liczbaDniWRoku[miesiac - 1];
	if ((miesiac > 2) && (przestepnyJulianski(rok) == 1))
		dzienRoku++;

	a = (rok - 1) % 100;
	b = (rok - 1) - a;
	c = a + (a / 4);
	wynik = (((((b / 100) % 4) * 5) + c) % 7);
	wynik += dzienRoku - 1;
	wynik %= 7;

	return wynik;
}



string nazwaMiesiaca(int monthNumber)
{
	string months[] = { "Styczen", "Luty", "Marzec",
					   "Kwiecien", "Maj", "Czerwiec",
					   "Lipiec", "Sierpien", "Wrzesien",
					   "Pazdziernik", "Listopad", "Grudzien"
	};

	return (months[monthNumber]);
}





int obliczaniePierwszegoDniaRoku(int rok) {

	int dzien;
	dzien = (((rok - 1) * 365) + ((rok - 1) / 4) - ((rok - 1) / 100) + ((rok) / 400) + 1) % 7;

	return dzien;
}



void kalendarzGregorianski(int rokDoKalendarza) {

	int dniWdanymMiesiacu, dzienTygodnia = 0, DzienRozpoczeciaObliczen;

	if ((rokDoKalendarza % 4 == 0 && rokDoKalendarza % 100 != 0) || rokDoKalendarza % 400 == 0)
		dniMiesiaca[1] = 29;

	DzienRozpoczeciaObliczen = obliczaniePierwszegoDniaRoku(rokDoKalendarza);

	printf("\n  ------KALENDARZ DLA ROKU %d-------\n", rokDoKalendarza);

	for (int miesiacDoKalendarza = 0; miesiacDoKalendarza < 12; miesiacDoKalendarza++)
	{
		dniWdanymMiesiacu = dniMiesiaca[miesiacDoKalendarza];
		printf("\n  ------------%s-------------\n", nazwaMiesiaca(miesiacDoKalendarza).c_str());
		printf("  Nie  Pon  Wto  Sro  Czw  Ptk  Sob\n");

		for (dzienTygodnia = 0; dzienTygodnia < DzienRozpoczeciaObliczen; dzienTygodnia++)
			cout << "     ";
		for (int dzienDoKalendarza = 1; dzienDoKalendarza <= dniWdanymMiesiacu; dzienDoKalendarza++) {
			printf("%5d", dzienDoKalendarza);

			if (++dzienTygodnia > 6) {
				cout << "\n";
				dzienTygodnia = 0;
			}
			DzienRozpoczeciaObliczen = dzienTygodnia;

		}

	}

}



void kalendarzJulianski(int rokDoKalendarza) {

	int dniWdanymMiesiacu, dzienTygodnia = 0, DzienRozpoczeciaObliczen;

	if (rokDoKalendarza % 4 == 0)
		dniMiesiaca[1] = 29;

	DzienRozpoczeciaObliczen = obliczaniePierwszegoDniaRoku(rokDoKalendarza);

	printf("\n  ------KALENDARZ JULIANSKI DLA ROKU %d-------\n\n", rokDoKalendarza);

	for (int miesiacDoKalendarza = 0; miesiacDoKalendarza < 12; miesiacDoKalendarza++)
	{
		dniWdanymMiesiacu = dniMiesiaca[miesiacDoKalendarza];
		printf("\n  ------------%s-------------\n", nazwaMiesiaca(miesiacDoKalendarza).c_str());
		printf("  Nie  Pon  Wto  Sro  Czw  Ptk  Sob\n");

		for (dzienTygodnia = 0; dzienTygodnia < DzienRozpoczeciaObliczen; dzienTygodnia++)
			cout << "     ";
		for (int dzienDoKalendarza = 1; dzienDoKalendarza <= dniWdanymMiesiacu; dzienDoKalendarza++) {
			printf("%5d", dzienDoKalendarza);

			if (++dzienTygodnia > 6) {
				cout << "\n";
				dzienTygodnia = 0;
			}
			DzienRozpoczeciaObliczen = dzienTygodnia;

		}

	}

}





unsigned int policz_dni(unsigned int ilosc_miesiecy) {
	unsigned int tab[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	unsigned int ilosc_dni_w_miesiacu = 0;

	for (int i = 0; i < ilosc_miesiecy; i++)
		ilosc_dni_w_miesiacu += tab[i];

	return ilosc_dni_w_miesiacu;
}






int main()
{
	int dzien, miesiac, rok, wynik, bladWejscia, ilosc_dni_od_poczatku_ne;



	cout << "Przelicznik dat.\nProgram wyliczajacy dzien tygodnia na podstawie dowolnej daty w latach 1 - 2100 n.e." << endl;

	do {
		cout << "Podaj dzien: ";
		cin >> dzien;
	} while (dzien < 1 || dzien > 31);

	do {
		cout << "Podaj miesiac: ";
		cin >> miesiac;
	} while (miesiac < 1 || miesiac > 12);

	do {
		cout << "Podaj rok: ";
		cin >> rok;
	} while (rok < 1 || rok >2100);


	bladWejscia = zabezpieczenie(dzien, miesiac, rok);

	ilosc_dni_od_poczatku_ne = ((rok - 1) * 365) + policz_dni(miesiac - 1) - policz_dni(1 - 1) + dzien - 1;



	cout << "Dni od 1 stycznia roku 1 n.e:  " << ilosc_dni_od_poczatku_ne;
	if (bladWejscia != 1) {

		if (ilosc_dni_od_poczatku_ne >= 577352) {
			kalendarzGregorianski(rok);
			wynik = nazwaDniaTygodnia(dzien, miesiac, rok);
			cout << endl << "\n\nW podanej dacie - rok: " << rok << ", miesiac: " << miesiac << ", dzien: " << dzien << " - dniem tygodnia byl dzien: " << tydzien[wynik] << endl;
		}


		else if (ilosc_dni_od_poczatku_ne <= 577341) {
			kalendarzJulianski(rok);
			wynik = nazwaDniaTygodniaJulianskiego(dzien, miesiac, rok);
			cout << endl << "\n\nW podanej dacie - rok: " << rok << ", miesiac: " << miesiac << ", dzien: " << dzien << " - dniem tygodnia byl dzien: " << tydzien[wynik] << endl;
		}
		else {
			cout << "\nNie bylo takiego dnia w historii ludzkosci, bo papiez Grzegorz przelaczal kalendarz julianski na gregorianski" << endl;
		}
		cout << endl << endl;




	}
	cin.sync();

	return 0;
}