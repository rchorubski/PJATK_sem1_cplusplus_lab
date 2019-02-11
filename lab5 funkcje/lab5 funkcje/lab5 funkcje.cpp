// lab5 funkcje.cpp : Defines the entry point for the console application.
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
#define ROZMIAR 10

using namespace std;
int a5 = 5;


int zwiekszonaSuma(int argument2A, int argument2B)
{
	int zmienna2;
	cout << "Jestem w funkcji zwiekszonaSuma!\n";
	cout << "Podano argumenty: " << argument2A << " oraz " << argument2B << endl;
	zmienna2 = rand() % 100 + 1;
	cout << "Wylosowano liczbe: " << zmienna2 << endl;
	return argument2A + argument2B + zmienna2;
}

void potegi(int a3)
{
	int i3;
	cout << "Jestem w funkcji potegi!\nPodano argument:" << a3 << endl;
	for (i3 = 0; i3 < 7; i3++)
		cout << pow(a3, i3) << endl;

}

int czytajLiczbe(void)
{
	double liczba4;
	cout << "Jestem w funkcji czytajLiczbe!\n";
	do {
		cout << "Podaj liczbe calkowita: ";
		cin >> liczba4;
	} while (liczba4 != (int)liczba4);
	return (int)liczba4;
}

int funkcja5(void)
{
	int a5 = 7;
	cout << "a(funckja) = " << a5 << endl;
	cout << "ROZMIAR = " << ROZMIAR << endl;
	return a5;
}
int statyczna5(int a5)
{
	int z5 = 5;
	static int zs = 5;
	z5++; zs++; a5++;
	cout << "z = " << z5 << " " << "zs= " << zs << " " << "a(statyczna) =" << a5 << endl;
	return a5;
}


int sumaCalkowitych(void)
{
	int a6, b6, pomocnicza6, suma6 = 0;

	cout << "Podaj dolny zakres przedzialu a=\n ";
	cin >> a6;
	cout << "Podaj gorny zakres przedzialu b=\n ";
	cin >> b6;

	if (a6 > b6) {
		pomocnicza6 = a6;
		a6 = b6;
		b6 = pomocnicza6;
		cout << "\nPodales zly zakres, zamieniono za ciebie a z b!" << endl;
	}
	pomocnicza6 = a6;

	while (pomocnicza6 <= b6) {
		cout << pomocnicza6 << " ";
		suma6 = pomocnicza6 + suma6;
		pomocnicza6++;
	}
	return suma6;

}


int losowanieCalkowitych(void)
{
	int a7, b7, wylosowana7;

	cout << "Podaj dolny zakres przedzialu a=\n ";
	cin >> a7;
	cout << "Podaj gorny zakres przedzialu b=\n ";
	cin >> b7;

	if (a7 > b7) {
		wylosowana7 = 0;
		cout << "\nPodales zly zakres!" << endl;
	}
	if (a7 < b7) {
		wylosowana7 = rand() % (b7 - a7 + 1) + a7;
	}
	return wylosowana7;

}





int lotto(int argument8A, int argument8B)
{
	int losowanie[6], n8;
	bool juzByla[1000] = { false };
	cout << "\nLosowanie 6 z 49!\n";


	for (int i8 = 0; i8 < 6; i8++)
	{
		do
		{
			n8 = rand() % argument8B + argument8A;
			losowanie[i8] = n8;
		} while (juzByla[n8] == true);
		juzByla[n8] = true;
	}

	for (int i8 = 0; i8 < 6; i8++)
		cout << losowanie[i8] << " ";
	cout << endl;
	return 0;
}

int calkowitaParzysta() {

	double liczba9;
	bool warunekParzystosci = false, warunekCalkowitosci = false;
	do {
		warunekParzystosci = false, warunekCalkowitosci = false;
		cout << "\nPodaj liczbe: ";
		cin >> liczba9;
		cout << "\nPodana liczba to: " << liczba9;

		if (fmod(liczba9, 2) == 0) {
			cout << "\nWpisana liczba jest parzysta";
			warunekParzystosci = true;
		}
		else {
			cout << "\nWpisana liczba jest nieparzysta";
			warunekParzystosci == false;
		}
		if (fmod(liczba9, 2) == 1 || fmod(liczba9, 2) == 0) {
			cout << "\nWpisana liczba jest calkowita";
			warunekCalkowitosci = true;
		}
		else {
			cout << "\nWpisana liczba nie jest calkowita";
			warunekCalkowitosci == false;
		}
	} while (warunekParzystosci == false || warunekCalkowitosci == false);

	return liczba9;
}


int czyPierwsza() {
	int pierwsza, i10 = 2;

	cout << "Podaj liczbe: \n";
	cin >> pierwsza;

	while (i10 <= pierwsza)
	{
		if (pierwsza%i10 == 0)
		{
			if (pierwsza == i10) {
				cout << "Liczba jest liczba pierwsza";
				return 1;
			}
			else
			{
				cout << "Liczba nie jest liczba pierwsza";
				return 0;
				break;
			}
		}
		i10++;

	}

}




int czyPierwsza11(int a) {
	int pierwsza11, i11 = 2;

	pierwsza11 = a;

	while (i11 <= pierwsza11)
	{
		if (pierwsza11%i11 == 0)
		{
			if (pierwsza11 == i11) {
				return a;
			}
			else
			{
				return 0;
				break;
			}
		}
		i11++;

	}

}




int main()
{
	srand(time(NULL));
	int a2 = 2, b2 = 8, wynik2, wynik4, i5, z6, z7, a8, b8, wynik8, wynik9, a9, wynik10, n11, a11, b11, losowanie11;
	float;
	double argument1 = 9, wynik1;
	char;

	cout << "1. Funkcja obliczajaca pierwiastek kwadratowy." << endl;
	cout << "Podana liczba do pierwiastkowania: " << argument1 << endl;
	wynik1 = sqrt(argument1);
	cout << "Wynik to: " << wynik1 << endl;
	cout << "\n\n";

	cout << "2. Jestem w funkcji main, wywoluje funkcje:\n" << endl;
	wynik2 = zwiekszonaSuma(a2, b2);
	cout << "\nJestem z powrotem w funkcji main - uzyskany wynik to: " << wynik2 << endl;
	cout << "\n\n";

	cout << "3. Jestem w funkcji main, wywoluje funkcje:\n" << endl;
	potegi(3);
	cout << "\n\n";

	cout << "4. Jestem w funkcji main, wywoluje funkcje:\n\n" << endl;
	wynik4 = czytajLiczbe();
	cout << "\nJestem z powrotem w funkcji main - wczytana liczba to: " << wynik4 << endl;

	cout << "5. \n\n" << endl;
	cout << "a (main) = " << a5 << endl;
	a5 = funkcja5();
	cout << "teraz a(main) = " << a5 << endl;
	for (i5 = 0; i5 < ROZMIAR; i5++) {
		statyczna5(a5);
		cout << "teraz a(main) = " << a5 << endl;
	}
	cout << "\n\n";

	cout << "6. Funkcja zwracajaca sume liczb calkowitych z zakresu [a,b], gdzie a i b to argumenty wejsciowe.";
	cout << "Kiedy a > b - funkcja zamienia miejscami a i b i liczy sume." << endl;
	z6 = sumaCalkowitych();
	cout << "\nSuma wynosi: " << z6;
	cout << "\n\n";

	cout << "7. Funkcja ktora losuje liczbe calkowita z przedzialu [a,b], gdzie a i b to argumenty wejsciowe.";
	cout << " Jesli a > b - funkcja informuje o tym fakcie i zwraca zero." << endl;
	z7 = losowanieCalkowitych();
	cout << "\n";
	cout << "Wylosowana przez ciebie liczba to " << z7 << endl;
	cout << "\n\n";

	cout << "8. Funkcja lotto, losujaca liczby z przedzialu [1,49], zadna z wylosowanych liczb nie moze sie powtarzac.";

	a8 = 1;
	b8 = 49;
	wynik8 = lotto(a8, b8);
	cout << "\n\n";


	cout << "9. Funkcja, ktora czyta od uzytkownika dowolna liczbe tak dlugo, az uzytkownik poda liczbe calkowita i parzysta - ta liczba jest zwracana przez funkcje.";

	wynik9 = calkowitaParzysta();
	cout << "\n\nZwrocona liczba to: " << wynik9;
	cout << "\n\n";

	cout << "10. Funkcja sprawdzajaca, czy podana jako argument liczba jest liczba pierwsza. Funkcja zwraca wartosc: 0 (nie jest pierwsza) lub 1 (jest pierwsza).";

	wynik10 = czyPierwsza();

	cout << "\nZwrocona liczba to: " << wynik10;
	cout << "\n\n";



	cout << "11. Funkcja wypisujaca macierz nxn, gdzie n jest argumentem wejsciowym. Dla kazdego miejsca w macierzy jest losowana liczba calkowita z zakresu [1,100] i jesli ta wylosowana liczba jest pierwsza - jest wstawiana do macierzy";

	cout << "\nPodaj rozmiar macierzy nxn: \n";
	cin >> n11;



	for (a11 = 1; a11 <= n11; a11++) {
		for (b11 = 1; b11 <= n11; b11++) {

			losowanie11 = rand() % 100 + 1;

			cout << setw(4) << czyPierwsza11(losowanie11);
		}
		cout << "" << endl;
	}



	getchar();
	getchar();

	return 0;
}
