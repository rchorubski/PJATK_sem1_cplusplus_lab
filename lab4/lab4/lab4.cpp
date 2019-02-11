// lab4.cpp : Defines the entry point for the console application.
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

/*14 i 15 dla chetnych!*/

int _tmain(int argc, _TCHAR* argv[])
{
	int a1, b1, i1, n2, an, i2, a3, b3, suma3 = 0, i3, n4, k4, i4 = 1, j4 = 1, n5, wybor6, a6, b6, n7, iteracja = 1, pierwsza, i8 = 2, liczba9, wynik9 = 0, suma10 = 0, dodawanie10, wybor;
	double silnia = 1, rKuli, rStozka, VKuli, VStozka, HStozka, rWalca, HWalca, VWalca, aProstopadloscianu, bProstopadloscianu, hProstopadloscianu, VProstopadloscianu, aSzescianu, VSzescianu;
	char;


	cout << "1. \nProgram wczytujacy dwie liczby naturalne, wyznaczajacy wszystkie liczby parzyste z przedzialu [a,b]:" << endl;
	cout << "Podaj a:" << endl;
	cin >> a1;
	cout << "Podaj b:" << endl;
	cin >> b1;

	i1 = a1;

	while (i1 <= b1) {
		if (i1 % 2 == 0)
			cout << i1 << " ";
		i1++;
	}
	cout << "\n\n";

	cout << "2. \nWzor ciagu wyglada a(n)=2n-1. Program wczytujacy liczbe calkowita dodatnia n i wypisujacy na ekranie kolejne wyrazy ciagu: a(1), a(2), ..., a(n)" << endl;
	cout << "Podaj n:" << endl;
	cin >> n2;
	i2 = 0;
	while (++i2 <= n2) {
		an = 2 * i2 - 1;
		cout << "a" << i2 << "= " << an << endl;
	}

	cout << "\n\n";


	cout << "3. \Program wczytujacy dwie liczby naturalne, wyznaczajacy sume kolejnych liczb calkowitych poczawszy od a, skonczywszy na b." << endl;
	cout << "Podaj a:" << endl;
	cin >> a3;
	cout << "Podaj b:" << endl;
	cin >> b3;

	i3 = a3;

	while (i3 <= b3) {
		cout << i3 << " ";
		suma3 = i3 + suma3;
		i3++;
	}

	cout << "\nSuma wynosi: " << suma3;
	cout << "\n\n";


	cout << "4. \Program wczytujacy dwie liczby naturalne dodatnie n i k, rysujacy z gwiazdek prostokat posiadajacy n wierszy i k kolumn." << endl;
	cout << "Podaj n:" << endl;
	cin >> n4;
	cout << "Podaj k:" << endl;
	cin >> k4;


	while (i4 <= n4)
	{
		while (j4 <= k4)
		{
			cout << "*";
			j4++;
		}
		cout << "\n";
		i4++;
		j4 = 1;
	}

	cout << "\n\n";
	cout << "5. \Program wczytujacy liczbe dodatnia." << endl;

	do {
		cout << "Podaj liczbe dodatnia:" << endl;
		cin >> n5;
	} while (n5 <= 0);

	cout << "Podana liczba " << n5 << " jest dodatnia" << endl;

	cout << "\n\n";


	cout << "6. \nProgram umozliwiajacy obliczenie pol figur plaskich:\n" << endl;
	cout << "MENU: \n";
	cout << "1 - oblicz pole prostokata.\n";
	cout << "2 - oblicz pole kwadratu.\n";
	cout << "3 - oblicz pole trojkata.\n";
	cout << "0 - koniec.\n";
	do {
		cout << "Twoj wybor:\n";
		cin >> wybor6;
		switch (wybor6)
		{
		case 0: break;
		case 1: cout << "Podaj dlugosc boku a = \n";
			cin >> a6;
			cout << "Podaj dlugosc boku b = \n";
			cin >> b6;
			cout << "Pole prostokata wynosi =" << a6 * b6 << endl;
			break;
		case 2: cout << "Podaj dlugosc boku a = \n";
			cin >> a6;
			cout << "Pole kwadratu wynosi =" << a6 * a6 << endl;
			break;
		case 3: cout << "Podaj dlugosc boku a = \n";
			cin >> a6;
			cout << "Podaj dlugosc boku b = \n";
			cin >> b6;
			cout << "Pole trojkata wynosi =" << a6 * b6 / 2.0 << endl;
			break;
		default:
			cout << "Blad. Nieznany wybor\n";
			break;
		}
	} while (wybor6 != 0);



	cout << "\n\n";



	cout << "7. \nProgram obliczajacy wartosc n! dla wczytanej z klawiatury liczby naturalnej.\nPodaj n:" << endl;


	cin >> n7;

	while (iteracja <= n7)
	{
		silnia = iteracja * silnia;
		iteracja++;
	}

	cout << "wynik to: " << silnia << endl;
	cout << "\n\n";



	cout << "8. \nProgram stwierdzajacy ze podana liczba jest liczba pierwsza.\nPodaj liczbe:" << endl;

	cin >> pierwsza;

	while (i8 <= pierwsza)
	{
		if (pierwsza%i8 == 0)
		{
			if (pierwsza == i8)
				cout << "Liczba jest liczba pierwsza";
			else
			{
				cout << "Liczba nie jest liczba pierwsza";
				break;
			}
		}
		i8++;

	}


	cout << "\n\n";


	cout << "9. \nProgram obliczajacy sume cyfr dla wczytanej z klawiatury liczby naturalnej.\n Podaj liczbe:" << endl;

	cin >> liczba9;
	wynik9;



	do {

		wynik9 = wynik9 + liczba9 % 10;
		liczba9 = liczba9 / 10;

	} while (liczba9 != 0);

	cout << "suma to: " << wynik9 << endl;

	cout << "\n\n";

	cout << "10. \nProgram sumujacy kolejne liczby calkowite podawane przez uzytkownika, az do napotkania zera." << endl;


	do {
		cout << "Podaj wartosc do dodania: " << endl;
		cin >> dodawanie10;
		suma10 = suma10 + dodawanie10;
		cout << "\n";
	} while (dodawanie10 != 0);

	cout << "suma calosci az do wystapienia zera to: " << suma10 << endl;

	cout << "\n\n";



	cout << "11. \nProgram liczacy objetosc wybranej bryly.\nWybierz co chcesz liczyc:\n1. Kula\n2. Stozek\n3. Walec\n4. Prostopadloscian\n5. Szescian\n0. Wyjscie" << endl;



	do {
		cout << "Wybierz opcje: " << endl;
		cin >> wybor;

		switch (wybor) {

		case 0: break;
		case 1:
		{
			cout << "\nWybrales objetosc kuli.\nPodaj promien r: " << endl;
			cin >> rKuli;
			VKuli = (4 / 3) *3.14 *rKuli*rKuli*rKuli;
			cout << "\nObjetosc kuli wynosi: " << VKuli << endl;

			break;
		}
		case 2:
		{
			cout << "\nWybrales objetosc stozka.\nPodaj promien r: " << endl;
			cin >> rStozka;
			cout << "\nPodaj wysokosc stozka: " << endl;
			cin >> HStozka;

			VStozka = (1 / 3) *3.14 *rStozka*rStozka*HStozka;

			cout << "\nObjetosc stozka wynosi: " << VStozka << endl;

			break;
		}
		case 3:
		{
			cout << "\nWybrales objetosc walca.\nPodaj promien r: " << endl;
			cin >> rWalca;
			cout << "\nPodaj wysokosc walca: " << endl;
			cin >> HWalca;

			VWalca = 3.14 *rWalca*rWalca*HWalca;

			cout << "\nObjetosc walca wynosi: " << VWalca << endl;

			break;
		}
		case 4:
		{
			cout << "\nWybrales objetosc prostopadloscianu.\nPodaj bok a: " << endl;
			cin >> aProstopadloscianu;
			cout << "\nPodaj bok b: " << endl;
			cin >> bProstopadloscianu;
			cout << "\nPodaj wysokosc prostopadloscianu: " << endl;
			cin >> hProstopadloscianu;

			VProstopadloscianu = aProstopadloscianu * bProstopadloscianu * hProstopadloscianu;

			cout << "\nObjetosc prostopadloscianu wynosi: " << VProstopadloscianu << endl;

			break;
		}

		case 5:
		{
			cout << "\nWybrales objetosc szescianu.\nPodaj bok a: " << endl;
			cin >> aSzescianu;

			VSzescianu = aSzescianu * aSzescianu * aSzescianu;

			cout << "\nObjetosc szescianu wynosi: " << VSzescianu << endl;

			break;
		}

		}
	} while (wybor != 0);



	getchar();
	getchar();

	return 0;
}