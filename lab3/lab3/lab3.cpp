// lab3.cpp : Defines the entry point for the console application.
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
	int i1, i2, n2, wynik2 = 1, i3, j3, n3, k3, n4, i4, j4, n5, i5, j5, i7, podzielne13, rok_poczatkowy, rok_koncowy, a = 1, b = 1, mnozenie, n10, i10, suma = 0, n11, i11, n12, i12, suma12 = 0, h, i13, j13;



	cout << "1. \nProgram wypisujacy kolejne liczby calkowite od 11 do 33" << endl;

	for (i1 = 11; i1 <= 33; i1++) {
		cout << " " << i1;
	}

	cout << "\n\n";



	cout << "2. \nProgram wczytujacy wartosc liczby naturalnej n (n>=0), obliczajacy wartosc 2^n i wypisujacy wynik na ekranie w formacie 2^n = x " << endl;

	cout << "Podaj liczbe naturalna n= " << endl;
	cin >> n2;
	for (i2 = 1; i2 <= n2; i2++) {
		wynik2 *= 2;
	}
	cout << "2^" << n2 << " = " << wynik2 << endl;


	cout << "\n\n";

	cout << "3. \nProgram wczytujacy dwie liczby naturalne n i k i rysujacy z gwiazdek na ekranie prostokat posiadajacy n wierszy i n kolumn" << endl;

	cout << "Podaj liczbe wierszy n= " << endl;
	cin >> n3;
	cout << "Podaj liczbe kolumn k= " << endl;
	cin >> k3;

	cout << "\n\n";

	for (i3 = 1; i3 <= n3; i3++) {
		for (j3 = 1; j3 <= k3; j3++) {
			cout << "*";
		}
		cout << "" << endl;

	}

	cout << "\n\n";

	cout << "4. \nProgram wczytujacy liczbe naturalna n i rysujacy z gwiazdek na ekranie trojkat prostokatny" << endl;
	cout << "Podaj liczbe naturalna n= " << endl;

	cin >> n4;
	cout << "\n";

	for (i4 = 1; i4 <= n4; i4++) {
		for (j4 = 1; j4 <= i4; j4++) {
			cout << "*";
			cout << "";
		}
		cout << "\n";
	}

	cout << "\n\n";

	cout << "5. \nProgram wczytujacy liczbe naturalna n i rysujacy z gwiazdek na ekranie trojkat rownoramienny" << endl;
	cout << "Podaj liczbe naturalna n= " << endl;

	cin >> n5;

	for (i5 = 1; i5 <= n5; i5++) {

		for (j5 = 1; j5 <= n5 - i5; j5++) {
			cout << " ";
		}
		for (j5 = 1; j5 <= 2 * i5 - 1; j5++) {
			cout << "*";
		}

		cout << "\n";
	}
	cout << "\n\n";

	cout << "6.\nTabliczka mnozenia w formie tabelki." << endl;

	for (a = 1; a <= 10; a++) {
		for (b = 1; b <= 10; b++) {

			mnozenie = a * b;
			cout << setw(4) << mnozenie;
		}
		cout << "" << endl;

	}

	cout << "\n\n";

	cout << "7. \nWypisywanie liczb podzielnych przez 13 w zakresie 1-100: " << endl;


	for (i7 = 1; i7 <= 100; i7++) {

		podzielne13 = i7 % 13;
		if (podzielne13 == 0)
			cout << i7 << " ";
		else
			cout << "";

	}
	cout << "\n\n";


	cout << "8.\nWczytaj z klawiatury rok_poczatkowy i rok_koncowy oraz wypisz na ekranie wszystkie lata przestepne od roku_poczatkowego do roku_koncowego wlacznie." << endl;
	cout << "\nPodaj rok poczatkowy" << endl;

	cin >> rok_poczatkowy;

	cout << "\nPodaj rok koncowy" << endl;
	cin >> rok_koncowy;

	cout << "\nLata przestepne z tego zakresu to:" << endl;

	for (rok_poczatkowy; rok_poczatkowy <= rok_koncowy; rok_poczatkowy++)
	{
		if (((rok_poczatkowy % 4 == 0) && (rok_poczatkowy % 100 != 0)) || (rok_poczatkowy % 400 == 0)) {
			cout << rok_poczatkowy << " ";
		}
		else {
			cout << "";
		}
	}

	cout << "\n\n";

	cout << "10.\nProgram wczytujacy liczbe calkowita n (n>2) i wypisujacy na ekranie wartosc sumy 1+2+...+n." << endl;

	do {
		cout << "Podaj n:" << endl;
		cin >> n10;
	} while (n10 <= 2);


	for (i10 = 1; i10 <= n10; i10++) {

		suma = suma + i10;

	}
	cout << "Suma dla n elementow wynosi: " << suma << endl;

	cout << "\n\n";

	cout << "11.\nProgram drukujacy na ekranie kolejne liczby podzielne przez 7, ilosc liczb wczytywana z klawiatury." << endl;
	cout << "Podaj ilosc wyswietlonych liczb n:" << endl;
	cin >> n11;

	for (i11 = 0; i11 < 7 * n11; i11++) {

		if (i11 % 7 == 0)
		{
			cout << i11 << " ";
		}
		else {
			cout << "";
		}
	}

	cout << "\n\n";


	cout << "12.\nProgram obliczajacy sume n poczatkowych liczb nieparzystych." << endl;
	cout << "Podaj liczbe n:" << endl;

	cin >> n12;

	for (i12 = 1; i12 <= 2 * n12; i12++) {

		if (i12 % 2 == 1)
		{
			suma12 = suma12 + i12;
		}

	}


	cout << "\n\n";
	cout << "suma to: " << suma12 << endl;


	cout << "\n\n";
	cout << "13.\nProgram drukujacy liczby, wysokosc wczytywana z klawiatury." << endl;
	cout << "Podaj wysokosc h:" << endl;


	cin >> h;
	cout << "\n\n";
	for (i13 = 1; i13 <= h; i13++) {
		for (j13 = 1; j13 <= i13; j13++) {
			cout << i13 * j13 << " ";
			cout << "";
		}
		cout << "\n";
	}




	getchar();
	getchar();

	return 0;
}