// tablice.cpp : Defines the entry point for the console application.
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
	int n1, tab1[1000], i1, i2, n2, tab2[1000], i3, j3, n3, tab3[1000], tmp3, i4, n4, tab4[1000], suma4 = 0, tmp4, i5 = 0, j5, tab5[1000], liczba5, n7, tab7[1000], min7, max7, j7 = 0, i7, tab8[1000], n8, i8, j8, tmp8, tab9[1000], n9, i9, wynik9 = 0, n10, i10, tab10[1000], dodatnie10 = 0, ujemne10 = 0, zero10 = 0,
		reszta8, decymalna11, osemkowy = 0, i11 = 1, szesnastkowy = 0, reszta16, decymalna12, i12 = 1, j12, temp;

	char hex[100];

	cout << "1. Program wczytujacy ciag n (1<=n<=1000) liczb calkowitych i wypisujacy wczytane liczby na ekranie" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n1;
	} while (n1 <= 0 || n1 > 1000);

	for (i1 = 0; i1 < n1; i1++) {
		cout << "Podaj tab[" << i1 << "]=";
		cin >> tab1[i1];
	}
	cout << "Elementy tablicy: \n";
	for (i1 = 0; i1 < n1; i1++)
		cout << " " << tab1[i1];
	cout << "\n\n";


	cout << "2. Program wczytujacy ciag n (1<=n<=1000) liczb calkowitych i wypisujacy wczytane liczby w odwrotnej kolejnosci na ekranie" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n2;
	} while (n2 <= 0 || n2 > 1000);

	for (i2 = 0; i2 < n2; i2++) {
		cout << "Podaj tab[" << i2 << "]=";
		cin >> tab2[i2];
	}

	cout << "Elementy tablicy: \n";
	for (i2 = n2 - 1; i2 >= 0; i2--)
		cout << " " << tab2[i2];
	cout << "\n\n";


	cout << "3. Program wczytujacy ciag n (1<=n<=1000) liczb calkowitych, sortujacy je niemalejaco i wypisujacy posortowane liczby na ekranie" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n3;
	} while (n3 <= 0 || n3 > 1000);

	for (i3 = 0; i3 < n3; i3++) {
		cout << "Podaj tab[" << i3 << "]=";
		cin >> tab3[i3];
	}


	for (i3 = 0; i3 < n3; i3++)
		for (j3 = i3 + 1; j3 < n3; j3++)
			if (tab3[i3] > tab3[j3]) {
				tmp3 = tab3[i3];
				tab3[i3] = tab3[j3];
				tab3[j3] = tmp3;
			}

	cout << "\n\n";
	cout << "Elementy tablicy: \n";
	for (i3 = 0; i3 < n3; i3++)
		cout << " " << tab3[i3];
	cout << "\n\n";

	cout << "4. Program wczytujacy ciag n (1<=n<=1000) liczb calkowitych i wypisujacy na ekranie sume wczytanych liczb" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n4;
	} while (n4 <= 0 || n4 > 1000);

	for (i4 = 0; i4 < n4; i4++) {
		cout << "Podaj tab[" << i4 << "]=";
		cin >> tab4[i4];
	}

	for (i4 = 0; i4 < n4; i4++)
		suma4 = suma4 + tab4[i4];

	cout << "Suma elementow tablicy: " << suma4 << endl;

	cout << "\n\n";


	cout << "5. Program wczytujacy liczbe naturalna i wypisujacy na ekranie te liczbe w systemie dwojkowym" << endl;

	cout << "Podaj liczbe naturalna:" << endl;
	cin >> liczba5;
	while ((liczba5 / 2 != 0) || ((liczba5 / 2 == 0) && (liczba5 % 2 != 0)))
	{
		tab5[i5++] = liczba5 % 2;
		liczba5 /= 2;
	}
	for (j5 = i5 - 1; j5 >= 0; j5--)
		cout << tab5[j5];

	cout << "\n\n";

	cout << "7. Program wczytujacy ciag n (1<=n<=1000) liczb calkowitych i wypisujacy na ekranie najmniejsza i najwieksza wczytana liczbe" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n7;
	} while (n7 <= 0 || n7 > 1000);

	for (i7 = 0; i7 < n7; i7++) {
		cout << "Podaj tab[" << i7 << "]=";
		cin >> tab7[i7];
	}
	cout << "Elementy tablicy: \n";
	for (i7 = 0; i7 < n7; i7++)
		cout << " " << tab7[i7];
	cout << "\n\n";


	min7 = tab7[j7];
	max7 = tab7[j7];
	for (j7 = 0; j7 < n7; j7++)
	{
		if (tab7[j7] < min7) min7 = tab7[j7];
	}
	cout << "Wartosc minimalna z tablicy to " << min7 << endl;

	for (j7 = 0; j7 < n7; j7++)
	{
		if (tab7[j7] > max7) max7 = tab7[j7];
	}
	cout << "Wartosc maksymalna z tablicy to " << max7 << endl;
	cout << "\n\n";

	cout << "8. Program wczytujacy ciag n (1<=n<=1000) liczb naturalnych i wypisujacy na ekranie wszystkie parzyste liczby w kolejnosci niemalejacej" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n8;
	} while (n8 <= 0 || n8 > 1000);

	for (i8 = 0; i8 < n8; i8++) {
		cout << "Podaj tab[" << i8 << "]=";
		cin >> tab8[i8];
	}
	cout << "Elementy tablicy: \n";
	for (i8 = 0; i8 < n8; i8++)
		cout << " " << tab8[i8];
	cout << "\n\n";

	for (i8 = 0; i8 < n8; i8++) {
		for (j8 = i8 + 1; j8 < n8; j8++) {
			if (tab8[i8] > tab8[j8])
			{
				tmp8 = tab8[i8];
				tab8[i8] = tab8[j8];
				tab8[j8] = tmp8;
			}

		}
	}
	cout << "Posortowane elementy tablicy: \n";
	for (i8 = 0; i8 < n8; i8++)
		cout << " " << tab8[i8];
	cout << "\n\n";
	cout << "Liczby parzyste w kolejnosci niemalejacej: \n";

	for (i8 = 0; i8 < n8; i8++) {
		if (tab8[i8] % 2 == 0)
			cout << " " << tab8[i8];

	}
	cout << "\n\n";

	cout << "9. Program wczytujacy ciag n (1<=n<=1000) liczb calkowitych i wypisujacy na ekranie sume kwadratow tych liczb" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n9;
	} while (n9 <= 0 || n9 > 1000);

	for (i9 = 0; i9 < n9; i9++) {
		cout << "Podaj tab[" << i9 << "]=";
		cin >> tab9[i9];
	}
	cout << "Elementy tablicy: \n";
	for (i9 = 0; i9 < n9; i9++) {
		cout << " " << tab9[i9];
	}

	cout << "\n\n";

	cout << "Elementy tablicy do kwadratu: \n";
	for (i9 = 0; i9 < n9; i9++) {

		tab9[i9] = tab9[i9] * tab9[i9];
		cout << " " << tab9[i9];
	}

	cout << "\n\n";
	cout << "Suma kwadratow elementow: \n";

	for (i9 = 0; i9 < n9; i9++) {

		wynik9 += tab9[i9];

	}
	cout << wynik9;



	cout << "\n\n";

	cout << "10. Program wczytujacy ciag n (1<=n<=1000) liczb calkowitych i wypisujacy na ekranie liczb jest dodatnich, ile ujemnych, ile rownych zero" << endl;

	do {
		cout << "Podaj liczbe elementow tablicy  1<=n<=1000:\n";
		cin >> n10;
	} while (n10 <= 0 || n10 > 1000);

	for (i10 = 0; i10 < n10; i10++) {
		cout << "Podaj tab[" << i10 << "]=";
		cin >> tab10[i10];
	}
	cout << "Elementy tablicy: \n";
	for (i10 = 0; i10 < n10; i10++) {
		cout << " " << tab10[i10];
	}

	cout << "\n\n";
	for (i10 = 0; i10 < n10; i10++)
	{
		if (tab10[i10] < 0)
			ujemne10++;
		if (tab10[i10] > 0)
			dodatnie10++;
		if (tab10[i10] == 0)
			zero10++;
	}
	cout << "Ilosc elementow dodatnich: " << dodatnie10;
	cout << "\nIlosc elementow ujemnych: " << ujemne10;
	cout << "\nIlosc elementow zerowych: " << zero10;


	cout << "\n\n";

	cout << "11. Program wczytujacy liczbe naturalna i zamieniajacy ja system osemkowy." << endl;

	cout << "Podaj liczbe naturalna:" << endl;
	cin >> decymalna11;
	while (decymalna11 != 0) {

		reszta8 = decymalna11 % 8;
		decymalna11 = decymalna11 / 8;
		osemkowy = osemkowy + reszta8 * i11;
		i11 = i11 * 10;
	}
	cout << "\n";
	cout << "Liczba w podanym systemie osemkowym to: " << osemkowy << endl;

	cout << "\n\n";

	cout << "12. Program wczytujacy liczbe naturalna w systemie dziesietnym i zamieniajacy ja system szesnastkowy." << endl;

	cout << "Podaj liczbe naturalna:" << endl;
	cin >> decymalna12;

	reszta16 = decymalna12;

	while (reszta16 != 0)
	{
		temp = reszta16 % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		hex[i12++] = temp;
		reszta16 = reszta16 / 16;

	}
	cout << "Wynik to: \n";

	for (j12 = i12 - 1; j12 > 0; j12--)
	{
		cout << hex[j12];
	}



	getchar();
	getchar();

	return 0;
}
