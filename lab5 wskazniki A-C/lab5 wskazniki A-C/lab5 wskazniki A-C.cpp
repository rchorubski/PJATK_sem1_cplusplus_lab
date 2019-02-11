// wskazniki.cpp : Defines the entry point for the console application.
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


void sum(int *k, int *l, int *s) {
	*s = (*k + *l);
}



int main(void)
{
	int  temp, *wskaznik, tab[4] = { 20,40,50,100 }, *wsk, a, b, suma, x5, y5, z5;


	float;
	double;
	char;


	temp = 100;
	cout << "A. Liczba zmiennej TEMP: " << temp << endl;
	wskaznik = &temp;
	*wskaznik = 200;
	cout << "Liczba wskazywana przez wskaznik: " << *wskaznik << endl;
	cout << "Adres wskaznika: " << wskaznik << endl;
	cout << "Liczba TEMP: " << temp << endl;

	cout << "\n\n";

	cout << "B. Tablice: " << endl;

	wsk = &tab[0];
	cout << "Element pierwszy tablicy --> " << *wsk << endl;
	wsk++;
	cout << "Element drugi tablicy --> " << *wsk << endl;
	wsk++;
	cout << "Element trzeci tablicy --> " << *wsk << endl;
	wsk++;
	cout << "Element czwarty tablicy --> " << *wsk << endl;


	cout << "\n\n";

	cout << "C. Funkcje: " << endl;

	cout << "Podaj liczbe a: ";
	cin >> a;
	cout << "Podaj liczbe b: ";
	cin >> b;

	sum(&a, &b, &suma);
	cout << "Suma: (" << a << " + " << b << ") = " << suma << endl;


	getchar();
	getchar();

	return 0;
}