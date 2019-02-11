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

struct numbers
{
	int a, b;
	double c;
}num;

void print_numbers(struct numbers a) {
	cout << "Wartosci w strukturze a = " << a.a << endl;
	cout << "Wartosci w strukturze b = " << a.b << endl;
	cout << "Wartosci w strukturze c = " << a.c << endl << endl;
}


void set_numbers(struct numbers *s) {
	(*s).a = 1;
	s->b = 2;
	s->c = 3.5;

}

struct Osoba
{
	string imie, nazwisko;

	int rok_urodzenia;
}o;


struct Szkola {

	string imie, nazwisko;
	int ocena;
};






int main()
{
	int liczba_uczniow;
	float;
	double;
	char;
	Szkola Uczniowie[100];

	num.a = 5;
	num.b = 6;
	num.c = 0.5;

	cout << "Przyklad 1.\n";
	print_numbers(num);

	struct numbers another_numbers = { 3, 4 , 4.4 };
	print_numbers(another_numbers);

	cout << "\n\n";
	cout << "Przyklad 2.\n";


	set_numbers(&num);
	cout << "Wartosci w strukturze a = " << num.a << endl;
	cout << "Wartosci w strukturze b = " << num.b << endl;
	cout << "Wartosci w strukturze c = " << num.c << endl << endl;


	cout << "\n\n";
	cout << "1.Struktura o nazwie Osoba posiadajaca pola: imie, nazwisko, rok urodzenia.\n";

	cout << "Podaj imie: \n";
	cin >> o.imie;
	cout << "\nPodaj nazwisko: \n";
	cin >> o.nazwisko;
	cout << "\nPodaj rok urodzenia: \n";
	cin >> o.rok_urodzenia;

	cout << "\n\nPodane dane to:\nImie: " << o.imie << "\nNazwisko: " << o.nazwisko << "\nRok urodzenia: " << o.rok_urodzenia << endl;




	cout << "\n\n";
	cout << "2.Struktura o nazwie Uczen zawierajaca pola: imie, nazwisko i tablice ocen.\n";



	cout << "Powiedz ilu jest uczniow: \n";

	cin >> liczba_uczniow;

	cout << "\n";
	for (int i = 0; i < liczba_uczniow; i++) {
		cout << "\nUczen " << i + 1 << endl;
		cout << "\nPodaj imie: \n";
		cin >> Uczniowie[i].imie;
		cout << "\nPodaj nazwisko: \n";
		cin >> Uczniowie[i].nazwisko;
		do {
			cout << "\nPodaj ocene: \n";
			cin >> Uczniowie[i].ocena;
		} while (Uczniowie[i].ocena < 1 || Uczniowie[i].ocena > 6);
	}

	cout << "\n\nPodane dane to:\n ";
	for (int j = 0; j < liczba_uczniow; j++) {
		cout << "\nUczen " << j + 1 << endl;
		cout << Uczniowie[j].imie << " " << Uczniowie[j].nazwisko << ", Ocena: " << Uczniowie[j].ocena << endl;
	}



	getchar();
	getchar();

	return 0;
}

