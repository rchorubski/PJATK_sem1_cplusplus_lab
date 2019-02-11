
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

double silnia(int n1) {
	if (n1 <= 0) return 1;
	else
		return (n1*silnia(n1 - 1));
}

void zamiana(int liczba2) {
	if (liczba2 > 1) {
		zamiana(liczba2 / 2);
		cout << liczba2 % 2;
	}
	else
		cout << liczba2;
}

long long fib(int n3) {

	if (n3 == 0)
		return 0;
	else if (n3 == 1)
		return 1;
	else return fib(n3 - 1) + fib(n3 - 2);
}


int wartoscCiagu(int an) {



	if (an == 1)
		return 1;
	else
		return (wartoscCiagu(an - 1) * wartoscCiagu(an - 1) - 3);


	//ciag (n-1) * ciag (n-1)-3
	// an = (an-1)^2 -3

}


unsigned int ackermann(unsigned int m, unsigned int n) {
	if (m == 0) {
		return n + 1;
	}
	if (n == 0) {
		return ackermann(m - 1, 1);
	}
	return ackermann(m - 1, ackermann(m, n - 1));
}


int sumowanieN(int n, int a) {

	if (n == 1)
		return a;
	else
		return sumowanieN(n - 1, a + 1) + a;

}


int sumaCyfrNaturalnej(long n) {

	if (n > 0)
		return n % 10 + sumaCyfrNaturalnej(n / 10);

	return 0;

}


double potega(double n, int k)
{
	if (k == 0)
		return 1;
	else
		return n * potega(n, k - 1);
}





int _tmain(int argc, _TCHAR* argv[])
{
	int liczba1, liczba2, n3, n1, x1, n2, m2, n33, a33 = 1, n4, n5, k5;
	float;
	double;
	char;

	cout << "Przyklad 1.\nPodaj liczbe do obliczenia silni\n";

	do {
		cin >> liczba1;
		cout << liczba1 << " ! = " << silnia(liczba1) << endl;
		break;
	} while (liczba1 != 0);

	cout << "\n\n";

	cout << "Przyklad 2.\nZamiana liczb dziesietnych na dwojkowe\nPodaj liczbe do zamiany:\n";

	do {
		cin >> liczba2;
		zamiana(liczba2);
		break;
	} while (liczba2 != 0);

	cout << "\n\n";

	cout << "Przyklad 3.\nImplementacja wersji rekurencyjnej ciagu Fibonacciego\nPodaj n:\n";

	cin >> n3;

	if (n3 < 0)
		cout << "\nBledny parametr!";
	else
		cout << "Fib(" << n3 << ") = " << fib(n3) << endl;

	cout << "\n\n";

	cout << "1.\nProgram wczytujacy od uzytkownika liczbe calkowita n i wypisujacy na ekranie wartosc podanego ciagu\n";
	cout << "a1 = 1\nan+1 = (an)^2 -3" << endl;
	cout << "Podaj n: ";
	cin >> n1;


	//do{
	cout << "wynik podanego ciagu to = " << wartoscCiagu(n1) << endl;
	//}while (n1!=0);

	cout << "\n\n";


	cout << "2.\nWersja rekurencyjna funkcji Ackermana (n,m >=0):\n" << endl;


	cout << "Podaj n " << endl;
	cin >> n2;
	cout << "Podaj m " << endl;
	cin >> m2;


	cout << "A(" << m2 << ", " << n2 << ") = " << ackermann(m2, n2) << "\n";

	cout << "\n\n";

	cout << "3.\nObliczanie sumy kolejnych liczb od 1 do n w sposob rekurencyjny." << endl;


	cout << "Podaj do jakiej liczby sumowac  " << endl;
	cin >> n33;


	cout << "Wynik sumy to: " << sumowanieN(n33, a33) << endl;

	cout << "\n\n";

	cout << "4.\nWyznaczanie sumy cyfr liczby naturalnej w sposob rekurencyjny." << endl;


	cout << "Podaj liczbe naturalna:  " << endl;
	cin >> n4;

	cout << "\nSuma cyfr liczby " << n4 << " wynosi " << sumaCyfrNaturalnej(n4) << endl;

	cout << "\n\n";

	cout << "5.\nObliczanie n do potegi k w sposob rekurencyjny." << endl;


	cout << "Podaj n " << endl;
	cin >> n5;
	cout << "Podaj k " << endl;
	cin >> k5;

	cout << n5 << " do potegi " << k5 << " wynosi " << potega(n5, k5) << endl;


	getchar();
	getchar();

	return 0;
}