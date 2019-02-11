// lab4b.cpp : Defines the entry point for the console application.
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

int _tmain(int argc, _TCHAR* argv[])
{
	int x1, y1, x3, y3, wyborWaluty, potega5, podstawa5, wynik5 = 1, potega6 = 1, podstawa6 = 1, wynik6 = 0, szereg6, i7, j7, pierwsza7, przedzial7;
	float x1A, y1A, x2A, x2B, y2B, licznik2, wspA, wspB, waluta, mianownik2, wspA_AB, wspB_AB, wspA_AC, wspB_AC, wspA_BC, wspB_BC;
	double;
	char;

	cout << "1. Program wczytujacy wspolrzedne punktu P=(x,y) i wypisujacy na ekranie informacje, do ktorej cwiartki nalezy\n";
	cout << "Podaj wspolrzedna X:\n";
	cin >> x1;
	cout << "Podaj wspolrzedna Y:\n";
	cin >> y1;
	cout << "\n";

	cout << "Podane punkty to x= " << x1 << " oraz y= " << y1 << endl;

	if (x1 == 0 && y1 == 0) {
		cout << "Punkt lezy na osi OX oraz OY\n (0,0)";
	}
	else {
		if (x1 > 0 && y1 > 0) {
			cout << "Podany punkt (" << x1 << "," << y1 << ") lezy w cwiartce pierwszej" << endl;
		}
		if (x1 < 0 && y1 > 0) {
			cout << "Podany punkt (" << x1 << "," << y1 << ") lezy w cwiartce drugiej" << endl;
		}
		if (x1 < 0 && y1 < 0) {
			cout << "Podany punkt (" << x1 << "," << y1 << ") lezy w cwiartce trzeciej" << endl;
		}
		if (x1 > 0 && y1 < 0) {
			cout << "Podany punkt (" << x1 << "," << y1 << ") lezy w cwiartce czwartej" << endl;
		}
		if (x1 == 0) {
			cout << "Podany punkt (" << x1 << "," << y1 << ") lezy na osi OX" << endl;
		}
		if (y1 == 0) {
			cout << "Podany punkt (" << x1 << "," << y1 << ") lezy na osi OY" << endl;
		}


	}

	cout << "\n\n";

	cout << "2. Program wczytujacy wspolrzedne dwoch punktow A=(x1,y1) i B=(x2,y2) oraz  wypisujacy na ekranie wzor funkcji liniowej przechodzacej przez te dwa punkty\n";
	cout << "Podaj wspolrzedna dla punktu A:\nx1 = ";
	cin >> x1A;
	cout << "\nPodaj wspolrzedna dla punktu A:\ny1 = ";
	cin >> y1A;
	cout << "\n";
	cout << "Podaj wspolrzedna dla punktu B:\nx2 = ";
	cin >> x2B;
	cout << "\nPodaj wspolrzedna dla punktu B:\ny2 = ";
	cin >> y2B;
	cout << "\n";


	licznik2 = y2B - y1A;
	mianownik2 = (x2B - x1A);

	if (mianownik2 == 0 && y1A == y2B)
		cout << " Wykres lezy na osi OY y = " << y1A;


	else {
		wspA = licznik2 / mianownik2;

		wspB = y1A - wspA * x1A;


		if (wspA != 0 && wspB != 0) {

			if (wspA == 1) {
				cout << "Wzor funkcji liniowej to: y= x + " << wspB;
			}
			else {
				cout << "Wzor funkcji liniowej to: y= " << wspA << "x" << "+" << wspB;
			}
		}

		if (wspA == 0 && wspB != 0) {
			cout << "Wspolczynnik a funkcji jest rowny zero, funkcja przybiera postac y= " << wspB;
		}

		if (wspA != 0 && wspB == 0) {


			if (wspA == 1) {
				cout << "Wzor funkcji liniowej to: y= x";
			}
			else {
				cout << "Wzor funkcji liniowej to: y= " << wspA << "x";
			}
		}
	}

	cout << "\n\n";



	cout << "3. Dany jest trojkat o wspolrzednych A=(-4,-4), B=(4,-2), C=(6,6). Sprawdzanie, czy punkt P lezy wewnatrz, na zewnatrz, czy na boku trojkata ABC" << endl;
	cout << "Podaj wspolrzedne swojego punktu.\nx= ";
	cin >> x3;
	cout << "\ny= ";
	cin >> y3;
	cout << "\n";
	/*Wskazówka : Wyznacz proste AB, AC i BC oraz sprawdź położenie punktu P względem
	 wyznaczonych prostych	*/



	 /*wspA = y2B - y1A / (x2B- x1A) ;
	 wspB = y1A - wspA* x1A; */



	wspA_AB = (-2 + 4) / (4 + 4);
	wspB_AB = -4 - (wspA_AB * -4);

	wspA_AC = (6 + 4) / (6 + 4);
	wspB_AC = -4 - (wspA_AC * -4);

	wspA_BC = (6 + 2) / (6 - 4);
	wspB_BC = -2 - (wspA_BC * -4);

	if ((y3 > (wspA_AB * x3 + wspB_AB)) && (y3 < (wspA_AC * x3 + wspB_AC)) && (y3 < (wspA_BC * x3 + wspB_BC)))
		cout << "Podany punkt lezy wewnatrz trojkata";
	else {
		if ((y3 == (wspA_AB * x3 + wspB_AB)) || (y3 == (wspA_AC * x3 + wspB_AC)) || (y3 == (wspA_BC * x3 + wspB_BC)))
			cout << "Podany punkt lezy na brzegu trojkata";
		else
			cout << "Podany punkt lezy poza trojkatem";
	}

	cout << "\n\n";

	cout << "4. Program wczytujacy kwote w zlotych, a nastepnie przeliczajacy ja na wybrana walute: funty, dolary, euro." << endl;

	cout << "Podaj kwote do przeliczenia:\n" << endl;
	cin >> waluta;
	do {
		cout << "\nPodaj na co chcesz zamienic:\n1. Funty\n2. Dolary\n3. Euro\n4. Wyjscie" << endl;
		cin >> wyborWaluty;

		switch (wyborWaluty)
		{
		case 4: break;
		case 1: cout << waluta << " zl to " << waluta * 4.85 << " funtow" << endl; break;
		case 2: cout << waluta << " zl to " << waluta * 3.78 << " dolarow" << endl; break;
		case 3: cout << waluta << " zl to " << waluta * 4.29 << " euro" << endl; break;

		}

	} while (wyborWaluty != 4);


	cout << "\n\n";

	cout << "5. Wczytaj liczbe naturalna n>0 i oblicz n do potegi n.\nPodaj n= " << endl;
	cin >> potega5;
	podstawa5 = potega5;
	cout << "\n";

	cout << "Podana liczba to: " << potega5 << endl;

	do {
		wynik5 = podstawa5 * wynik5;
		potega5--;
	} while (potega5 != 0);


	cout << "Wynik to: " << wynik5 << endl;

	cout << "\n\n";

	cout << "6. Wczytaj liczbe naturalna n>0 i oblicz sumy szeregu 1^1 + 2^2 + 3^3 +...+ n^n." << endl;

	do {

		cout << "\nPodaj n= " << endl;
		cin >> szereg6;

	} while (szereg6 <= 0);

	cout << "\n";

	cout << "Podana potega to: " << szereg6 << endl;


	do {

		wynik6 = podstawa6 * potega6 + wynik6;
		cout << "potega w kroku = " << potega6 << "  podstawa w kroku = " << podstawa6 << "  wynik w kroku: " << wynik6 << endl;
		potega6++;
		podstawa6++;

	} while (potega6 < szereg6 + 1);

	cout << "Wynik to: " << wynik6 << endl;


	cout << "\n\n";

	cout << "7. Wczytaj liczbe naturalna n>0 i oblicz wszystkie liczby pierwsze z przedzialu [1,n]" << endl;



	do {

		cout << "\nPodaj n= " << endl;
		cin >> przedzial7;

	} while (przedzial7 < 0);

	cout << "\n";

	if (przedzial7 < 2)
		cout << "Podana liczba nie jest pierwsza";


	for (int i7 = 1; i7 <= przedzial7; i7++)
	{

		pierwsza7 = 0;
		for (j7 = 2; j7 <= i7 / 2; j7++) {

			if (i7%j7 == 0) {
				pierwsza7++;
				break;
			}
		}
		if (pierwsza7 == 0 && i7 != 1)
			cout << i7 << " ";
	}


	getchar();
	getchar();

	return 0;
}