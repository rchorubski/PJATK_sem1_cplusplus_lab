// lab2.cpp : Defines the entry point for the console application.
//


#include "pch.h"
#include <iostream>
#include <cmath>
#include <math.h>
#include "tchar.h"



using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	int a, rok5, rok, rokUro, miesiac, miesiacUro, dzien, dzienUro, lataZycia, miesiaceZycia, dniZycia, liczbaSlownie, liczbaDwucyfrowa,
		ocenaTestu, ocenaSwitch, pelnoletnosc, przypadki, pozycjaPierwsza, pozycjaDruga, pozycjaTrzecia, liczbaPalindrom, cyfraPierwsza, cyfraDruga, czySumaPiec, sumaCyfr;

	double a3, b3, c3, a4, b4, c4, d4, e4, min, max, odcinek1, odcinek2, odcinek3, pierwiastekHerona, poleHerona, aFunkcji, bFunkcji, xFunkcji;
	char znak;

	cout << "1. \nPodaj liczbe calkowita: " << endl;
	cin >> a;
	if (a % 2 == 0)
		cout << "Liczba " << a << " jest parzysta" << endl;
	else
		cout << "Liczba " << a << " jest nieparzysta" << endl;

	cout << "\n";
	cout << "\n";


	cout << "2. \nSprawdzanie czy liczba jest dodatnia/ujemna.\nPodaj liczbe calkowita: " << endl;
	cin >> a;

	if (a > 0)
		cout << "Liczba " << a << " jest dodatnia" << endl;
	else if (a < 0)
		cout << "Liczba " << a << " jest ujemna" << endl;
	else
		cout << "Liczba " << a << " jest rowna zero" << endl;

	cout << "\n";
	cout << "\n";

	cout << "3. \nSprawdzanie ktora z podanych liczb jest najmniejsza/najwieksza.\nPodaj liczbe nr 1: \n";
	cin >> a3;
	cout << "Podaj liczbe nr 2: \n";
	cin >> b3;
	cout << "Podaj liczbe nr 3: \n";
	cin >> c3;

	if ((a3 <= b3) && (a3 <= c3))
		cout << "Liczba " << a3 << " jest najmniejsza" << endl;
	else if ((b3 <= a3) && (b3 <= c3))
		cout << "Liczba " << b3 << " jest najmniejsza" << endl;
	else
		cout << "Liczba " << c3 << " jest najmniejsza" << endl;

	if ((a3 >= b3) && (a3 >= c3))
		cout << "Liczba " << a3 << " jest najwieksza" << endl;
	else if ((b3 >= a3) && (b3 >= c3))
		cout << "Liczba " << b3 << " jest najwieksza" << endl;
	else
		cout << "Liczba " << c3 << " jest najwieksza" << endl;

	cout << "\n";

	cout << "4. \nWczytywanie 5 liczb i wypisywanie wartosci najmniejszej i najwiekszej\n";
	cout << "Podaj liczbe nr 1: \n";
	cin >> a4;
	cout << "Podaj liczbe nr 2: \n";
	cin >> b4;
	cout << "Podaj liczbe nr 3: \n";
	cin >> c4;
	cout << "Podaj liczbe nr 4: \n";
	cin >> d4;
	cout << "Podaj liczbe nr 5: \n";
	cin >> e4;

	min = a4;
	if (b4 < min) min = b4;
	if (c4 < min) min = c4;
	if (d4 < min) min = d4;
	if (e4 < min) min = e4;

	cout << "Liczba " << min << " jest najmniejsza z podanych." << endl;

	max = a4;
	if (b4 > max) max = b4;
	if (c4 > max) max = c4;
	if (d4 > max) max = d4;
	if (e4 > max) max = e4;

	cout << "Liczba " << max << " jest najwieksza z podanych." << endl;

	cout << "\n";

	cout << "5. \nSprawdzanie roku przestepnego.\nPodaj rok:\n";
	cin >> rok5;
	if (((rok5 % 4 == 0) && (rok5 % 100 != 0)) || (rok5 % 400 == 0))
		cout << "Rok " << rok5 << " jest przestepny" << endl;
	else
		cout << "Rok " << rok5 << " nie jest przestepny" << endl;

	cout << "\n";




	do {
		cout << "6. \nPodaj numer miesiaca w liczbie to sie dowiesz jaki to:\n";
		cin >> miesiac;

		switch (miesiac)
		{
		case 1: cout << "Styczen \n"; break;
		case 2: cout << "Luty \n"; break;
		case 3: cout << "Marzec \n"; break;
		case 4: cout << "Kwiecien \n"; break;
		case 5: cout << "Maj \n"; break;
		case 6: cout << "Czerwiec \n"; break;
		case 7: cout << "Lipiec \n"; break;
		case 8: cout << "Sierpien \n"; break;
		case 9: cout << "Wrzesien \n"; break;
		case 10: cout << "Pazdziernik \n"; break;
		case 11: cout << "Listopad \n"; break;
		case 12: cout << "Grudzien \n"; break;
		default: cout << "Nie ma takiego miesiaca! \n"; break;
		}
	} while (miesiac < 1 || miesiac >12);
	cout << "\n";


	cout << "7. \nProgram wypisujacy liczbe rzymska na podstawie podanej arabskiej <0,3999>\nPodaj liczbe arabska od 1 do 3999:\n";
	cin >> a;
	if (a >= 3000) { a -= 3000; cout << "MMM"; }
	else if (a >= 2000) { a -= 2000; cout << "MM"; }
	else if (a >= 1000) { a -= 1000; cout << "M"; }

	if (a >= 900) { a -= 900; cout << "CM"; }
	else if (a >= 800) { a -= 800; cout << "DCCC"; }
	else if (a >= 700) { a -= 700; cout << "DCC"; }
	else if (a >= 600) { a -= 600; cout << "DC"; }
	else if (a >= 500) { a -= 500; cout << "D"; }
	else if (a >= 400) { a -= 400; cout << "CD"; }
	else if (a >= 300) { a -= 300; cout << "CCC"; }
	else if (a >= 200) { a -= 200; cout << "CC"; }
	else if (a >= 100) { a -= 100; cout << "C"; }


	if (a >= 90) { a -= 90; cout << "XC"; }
	else if (a >= 80) { a -= 80; cout << "LXXX"; }
	else if (a >= 70) { a -= 70; cout << "LXX"; }
	else if (a >= 60) { a -= 60; cout << "LX"; }
	else if (a >= 50) { a -= 50; cout << "L"; }
	else if (a >= 40) { a -= 40; cout << "XL"; }
	else if (a >= 30) { a -= 30; cout << "XXX"; }
	else if (a >= 20) { a -= 20; cout << "XX"; }
	else if (a >= 10) { a -= 10; cout << "X"; }

	switch (a)
	{
	case 1: cout << "I"; break;
	case 2: cout << "II"; break;
	case 3: cout << "III"; break;
	case 4: cout << "IV"; break;
	case 5: cout << "V"; break;
	case 6: cout << "VI"; break;
	case 7: cout << "VII"; break;
	case 8: cout << "VIII"; break;
	case 9: cout << "IX"; break;
	default: cout << ""; break;
	}
	cout << "\n";
	cout << "\n";


	cout << "8. \nProgram stwierdzajacy czy dany znak jest wielka litera, mala litera, cyfra, czy innym znakiem: \n";
	cout << "Podaj znak:\n";
	cin >> znak;

	if (znak >= 'a' && znak <= 'z') {
		cout << "Znak " << znak << " to mala litera\n";
	}
	else {
		if (znak >= 'A' && znak <= 'Z')
			cout << "Znak " << znak << " to wielka litera\n";

		else if (znak >= '0' && znak <= '9') {
			cout << "Znak " << znak << " to cyfra\n";
		}
		else
			cout << "Znak " << znak << " to inny znak\n";
	}

	cout << "\n";

	cout << "9. \nPobieranie daty urodzenia i aktualnej, liczenie pelnoletnosci: \n";

	do {
		cout << "Podaj dzisiejsza date w formacie dd:mm:rrrr - najpierw dzien\n";
		cin >> dzien;
	} while (dzien < 1 || dzien >31);

	do {
		cout << "Podaj miesiac: \n";
		cin >> miesiac;
	} while (miesiac < 1 || miesiac >12);


	cout << "Podaj rok: \n";
	cin >> rok;
	cout << "\nPodaj date swoich urodzin w formacie dd:mm:rrrr\n";

	do {
		cout << "Podaj dzien: \n";
		cin >> dzienUro;
	} while (dzienUro < 1 || dzienUro >31);

	do {
		cout << "Podaj miesiac: \n";
		cin >> miesiacUro;
	} while (miesiacUro < 1 || miesiacUro >12);

	do {
		cout << "Podaj rok: \n";
		cin >> rokUro;
	} while (rokUro > rok);

	cout << "\nDzisiejsza data: " << dzien << " " << miesiac << " " << rok << endl;
	cout << "Data Urodzin: " << dzienUro << " " << miesiacUro << " " << rokUro << endl;


	dniZycia = (rok - rokUro) * 365 + (miesiac - miesiacUro) * 31 + dzien - dzienUro;
	pelnoletnosc = 365 * 18;
	cout << "\nOsiemnascie lat to dni: " << pelnoletnosc << endl;

	cout << "\nZyjesz dni: " << dniZycia << endl;
	if (pelnoletnosc <= dniZycia) {
		cout << "Jestes pelnoletni" << endl;
	}
	else {
		cout << "Jestes niepelnoletni" << endl;
	}


	cout << "\n";

	cout << "10. \nProgram wczytujacy trzy dlugosci odcinkow i sprawdzajacy czy mozna stworzyc trojkat.\n";
	cout << "Podaj pierwszy odcinek\n";
	cin >> odcinek1;
	cout << "Podaj drugi odcinek\n";
	cin >> odcinek2;
	cout << "Podaj trzeci odcinek\n";
	cin >> odcinek3;

	if ((odcinek1 + odcinek2 > odcinek3) && (odcinek1 + odcinek3 > odcinek2) && (odcinek2 + odcinek3 > odcinek1)) {
		cout << "Mozliwe jest stworzenie trojkata z podanych odcinkow";
	}
	else { cout << "Stworzenie trojkata z podanych odcinkow nie jest mozliwe"; }

	cout << "\n";
	cout << "\n";


	cout << "11. \nProgram liczacy pole trojkata z wzoru Herona.\n";
	cout << "Podaj pierwszy odcinek\n";
	cin >> odcinek1;
	cout << "Podaj drugi odcinek\n";
	cin >> odcinek2;
	cout << "Podaj trzeci odcinek\n";
	cin >> odcinek3;

	if ((odcinek1 + odcinek2 > odcinek3) && (odcinek1 + odcinek3 > odcinek2) && (odcinek2 + odcinek3 > odcinek1)) {
		pierwiastekHerona = (odcinek1 + odcinek2 + odcinek3) * (odcinek1 + odcinek2 - odcinek3) * (odcinek1 - odcinek2 + odcinek3)
			* (-odcinek1 + odcinek2 + odcinek3);
		poleHerona = pow(pierwiastekHerona, 0.5) / 4;

		cout << "Pole trojkata wynosi: " << poleHerona << endl;
	}

	else cout << "Stworzenie trojkata z podanych odcinkow nie jest mozliwe";



	cout << "\n";
	cout << "\n";

	cout << "12.\nProgram liczacy miesce zerowe funkcji liniowej y = ax + b.\n";
	cout << "Podaj wspolczynnik a\n";
	cin >> aFunkcji;
	cout << "Podaj wspolczynnik b\n";
	cin >> bFunkcji;


	if (aFunkcji == 0 && bFunkcji != 0) {
		cout << "Funkcja nie ma miejsc zerowych\n";
	}
	else {
		if (aFunkcji == 0 && bFunkcji == 0) {
			cout << "Funkcja ma nieskonczenie wiele miejsc zerowych" << endl;
		}
		else {
			xFunkcji = -bFunkcji / aFunkcji;
			cout << "Miejsce zerowe funkcji to: " << xFunkcji << endl;
		}
	}

	cout << "\n";
	cout << "\n";

	cout << "13. Program wczytujacy liczbe arabska od 1 do 1 000 000, wypisujacy liczbe slownie\n";
	cout << "Podaj liczbe: \n";
	cin >> liczbaSlownie;

	while (liczbaSlownie < 1 || liczbaSlownie > 1000000) {
		cout << "Liczba nie jest prawidlowa, podaj prawidlowa:" << endl;
		cin >> liczbaSlownie;
	}
	cout << "Podana liczba to: " << liczbaSlownie << endl;
	cout << "\n";
	if (liczbaSlownie == 1000000)
		cout << "Milion";
	cout << "\n";


	if (liczbaSlownie >= 900000) { liczbaSlownie -= 900000; cout << "Dziewiecset "; }
	else if (liczbaSlownie >= 800000) { liczbaSlownie -= 800000; cout << "Osiemset "; }
	else if (liczbaSlownie >= 700000) { liczbaSlownie -= 700000; cout << "Siedemset "; }
	else if (liczbaSlownie >= 600000) { liczbaSlownie -= 600000; cout << "Szescset "; }
	else if (liczbaSlownie >= 500000) { liczbaSlownie -= 500000; cout << "Piecset "; }
	else if (liczbaSlownie >= 400000) { liczbaSlownie -= 400000; cout << "Czterysta "; }
	else if (liczbaSlownie >= 300000) { liczbaSlownie -= 300000; cout << "Trzysta "; }
	else if (liczbaSlownie >= 200000) { liczbaSlownie -= 200000; cout << "Dwiescie "; }
	else if (liczbaSlownie >= 100000) { liczbaSlownie -= 100000; cout << "Sto "; }

	if (liczbaSlownie >= 90000) { liczbaSlownie -= 90000; cout << "Dziewiecdziesiat "; }
	else if (liczbaSlownie >= 80000) { liczbaSlownie -= 80000; cout << "Osiemdziesiat "; }
	else if (liczbaSlownie >= 70000) { liczbaSlownie -= 70000; cout << "Siedemdziesiat "; }
	else if (liczbaSlownie >= 60000) { liczbaSlownie -= 60000; cout << "Szescdziesiat "; }
	else if (liczbaSlownie >= 50000) { liczbaSlownie -= 50000; cout << "Piecdziesiat "; }
	else if (liczbaSlownie >= 40000) { liczbaSlownie -= 40000; cout << "Czterdziesci "; }
	else if (liczbaSlownie >= 30000) { liczbaSlownie -= 30000; cout << "Trzydziesci "; }
	else if (liczbaSlownie >= 20000) { liczbaSlownie -= 20000; cout << "Dwadziescia "; }
	else if (liczbaSlownie >= 19000) { liczbaSlownie -= 19000; cout << "Dziewietnascie "; }
	else if (liczbaSlownie >= 18000) { liczbaSlownie -= 18000; cout << "Osiemnascie "; }
	else if (liczbaSlownie >= 17000) { liczbaSlownie -= 17000; cout << "Siedemnascie "; }
	else if (liczbaSlownie >= 16000) { liczbaSlownie -= 16000; cout << "Szesnascie "; }
	else if (liczbaSlownie >= 15000) { liczbaSlownie -= 15000; cout << "Pietnascie "; }
	else if (liczbaSlownie >= 14000) { liczbaSlownie -= 14000; cout << "Czternascie "; }
	else if (liczbaSlownie >= 13000) { liczbaSlownie -= 13000; cout << "Trzynascie "; }
	else if (liczbaSlownie >= 12000) { liczbaSlownie -= 12000; cout << "Dwanascie "; }
	else if (liczbaSlownie >= 11000) { liczbaSlownie -= 11000; cout << "Jedenascie "; }
	else if (liczbaSlownie >= 10000) { liczbaSlownie -= 10000; cout << "Dziesiec "; }

	if (liczbaSlownie >= 9000) { cout << "Dziewiec "; }
	else if (liczbaSlownie >= 8000) { cout << "Osiem "; }
	else if (liczbaSlownie >= 7000) { cout << "Siedem "; }
	else if (liczbaSlownie >= 6000) { cout << "Szesc "; }
	else if (liczbaSlownie >= 5000) { cout << "Piec "; }
	else if (liczbaSlownie >= 4000) { cout << "Cztery "; }
	else if (liczbaSlownie >= 3000) { cout << "Trzy "; }
	else if (liczbaSlownie >= 2000) { cout << "Dwa "; }
	else if (liczbaSlownie > 1000) { cout << "Jeden "; }

	przypadki = liczbaSlownie / 1000;
	switch (przypadki) {

	case 9: cout << "Tysiecy "; liczbaSlownie -= 9000; break;
	case 8: cout << "Tysiecy "; liczbaSlownie -= 8000; break;
	case 7: cout << "Tysiecy "; liczbaSlownie -= 7000; break;
	case 6: cout << "Tysiecy "; liczbaSlownie -= 6000; break;
	case 5: cout << "Tysiecy "; liczbaSlownie -= 5000; break;
	case 4: cout << "Tysiace "; liczbaSlownie -= 4000; break;
	case 3: cout << "Tysiace "; liczbaSlownie -= 3000; break;
	case 2: cout << "Tysiace "; liczbaSlownie -= 2000; break;
	case 1: cout << "Tysiac "; liczbaSlownie -= 1000; break;
	default: cout << ""; break;

	}


	if (liczbaSlownie == 1000) { liczbaSlownie -= 1000; cout << "Tysiac "; }
	if (liczbaSlownie >= 900) { liczbaSlownie -= 900; cout << "Dziewiecset "; }
	else if (liczbaSlownie >= 800) { liczbaSlownie -= 800; cout << "Osiemset "; }
	else if (liczbaSlownie >= 700) { liczbaSlownie -= 700; cout << "Siedemset "; }
	else if (liczbaSlownie >= 600) { liczbaSlownie -= 600; cout << "Szescset "; }
	else if (liczbaSlownie >= 500) { liczbaSlownie -= 500; cout << "Piecset "; }
	else if (liczbaSlownie >= 400) { liczbaSlownie -= 400; cout << "Czterysta "; }
	else if (liczbaSlownie >= 300) { liczbaSlownie -= 300; cout << "Trzysta "; }
	else if (liczbaSlownie >= 200) { liczbaSlownie -= 200; cout << "Dwiescie "; }
	else if (liczbaSlownie >= 100) { liczbaSlownie -= 100; cout << "Sto "; }


	if (liczbaSlownie >= 90) { liczbaSlownie -= 90; cout << "Dziewiecdziesiat "; }
	else if (liczbaSlownie >= 80) { liczbaSlownie -= 80; cout << "Osiemdziesiat "; }
	else if (liczbaSlownie >= 70) { liczbaSlownie -= 70; cout << "Siedemdziesiat "; }
	else if (liczbaSlownie >= 60) { liczbaSlownie -= 60; cout << "Szescdziesiat "; }
	else if (liczbaSlownie >= 50) { liczbaSlownie -= 50; cout << "Piecdziesiat "; }
	else if (liczbaSlownie >= 40) { liczbaSlownie -= 40; cout << "Czterdziesci "; }
	else if (liczbaSlownie >= 30) { liczbaSlownie -= 30; cout << "Trzydziesci "; }
	else if (liczbaSlownie >= 20) { liczbaSlownie -= 20; cout << "Dwadziescia "; }

	if (liczbaSlownie >= 19) { liczbaSlownie -= 19; cout << "Dziewietnascie "; }
	else if (liczbaSlownie >= 18) { liczbaSlownie -= 18; cout << "Osiemnascie "; }
	else if (liczbaSlownie >= 17) { liczbaSlownie -= 17; cout << "Siedemnascie "; }
	else if (liczbaSlownie >= 16) { liczbaSlownie -= 16; cout << "Szesnascie "; }
	else if (liczbaSlownie >= 15) { liczbaSlownie -= 15; cout << "Pietnascie "; }
	else if (liczbaSlownie >= 14) { liczbaSlownie -= 14; cout << "Czternascie "; }
	else if (liczbaSlownie >= 13) { liczbaSlownie -= 13; cout << "Trzynascie "; }
	else if (liczbaSlownie >= 12) { liczbaSlownie -= 12; cout << "Dwanascie "; }
	else if (liczbaSlownie >= 11) { liczbaSlownie -= 11; cout << "Jedenascie "; }
	else if (liczbaSlownie >= 100) { liczbaSlownie -= 10; cout << "Dziesiec "; }

	if (liczbaSlownie >= 9) { liczbaSlownie -= 9000; cout << "Dziewiec "; }
	else if (liczbaSlownie >= 8000) { liczbaSlownie -= 8000; cout << "Osiem "; }
	else if (liczbaSlownie >= 7000) { liczbaSlownie -= 7000; cout << "Siedem "; }
	else if (liczbaSlownie >= 6000) { liczbaSlownie -= 6000; cout << "Szesc "; }
	else if (liczbaSlownie >= 5000) { liczbaSlownie -= 5000; cout << "Piec "; }
	else if (liczbaSlownie >= 4000) { liczbaSlownie -= 4000; cout << "Cztery "; }
	else if (liczbaSlownie >= 3000) { liczbaSlownie -= 3000; cout << "Trzy "; }
	else if (liczbaSlownie >= 2000) { liczbaSlownie -= 2000; cout << "Dwa "; }
	else if (liczbaSlownie > 1000) { liczbaSlownie -= 1000; cout << "Jeden "; }

	switch (liczbaSlownie)
	{
	case 1: cout << "Jeden."; break;
	case 2: cout << "Dwa"; break;
	case 3: cout << "Trzy"; break;
	case 4: cout << "Cztery"; break;
	case 5: cout << "Piec"; break;
	case 6: cout << "Szesc"; break;
	case 7: cout << "Siedem"; break;
	case 8: cout << "Osiem"; break;
	case 9: cout << "Dziewiec"; break;
	default: cout << ""; break;
	}
	cout << "\n";
	cout << "\n";







	cout << "\n \n";

	cout << "14. Program sprawdzajacy czy podana liczba trzycyfrowa jest palindromem.\nPodaj liczbe:\n";

	cin >> liczbaPalindrom;

	while (liczbaPalindrom < 100 || liczbaPalindrom > 999) {
		cout << "Liczba nie jest prawidlowa, podaj prawidlowa:" << endl;
		cin >> liczbaPalindrom;
	}

	pozycjaPierwsza = liczbaPalindrom / 100;
	pozycjaDruga = liczbaPalindrom % 100;
	pozycjaTrzecia = liczbaPalindrom % 10;

	cout << "\n";

	if (pozycjaPierwsza == pozycjaTrzecia)
		cout << "Liczba jest palindromem" << endl;
	else
		cout << "Liczba nie jest palindromem" << endl;


	cout << "\n \n";

	cout << "15. Program sprawdzajacy czy cyfry dwucyfrowej liczby sa parzyste lub ich suma jest rowna 5\nPodaj liczbe:";
	cin >> liczbaDwucyfrowa;
	while (liczbaDwucyfrowa < 10 || liczbaDwucyfrowa >99) {
		cout << "Liczba nie jest dwucyfrowa, podaj wlasciwa:\n" << endl;
		cin >> liczbaDwucyfrowa;
	}


	cyfraPierwsza = liczbaDwucyfrowa / 10;
	cyfraDruga = liczbaDwucyfrowa % 10;
	czySumaPiec = cyfraPierwsza + cyfraDruga;

	cout << "Cyfra dziesiatek: " << cyfraPierwsza << "\nCyfra jednostek: " << cyfraDruga << endl;
	cout << "\n";
	if (cyfraPierwsza % 2 == 0) {
		cout << "Cyfra dziesiatek jest parzysta" << endl;
	}
	else {
		cout << "Cyfra dziesiatek jest nieparzysta" << endl;
	}

	if (cyfraDruga % 2 == 0) {
		cout << "Cyfra jednostek jest parzysta" << endl;
	}
	else {
		cout << "Cyfra jednostek jest nieparzysta" << endl;
	}
	sumaCyfr = cyfraPierwsza + cyfraDruga;
	cout << "Suma cyfr wynosi: " << sumaCyfr << endl;
	if (sumaCyfr == 5)
		cout << "Suma cyfr jest rowna piec." << endl;
	else
		cout << "Suma cyfr nie jest rowna piec." << endl;


	cout << "\n \n";

	cout << "16. Program wystawiajacy ocene z testu.\nPodaj punktacje 0-100:\n";
	cin >> ocenaTestu;


	while (ocenaTestu < 0 || ocenaTestu >100) {
		cout << "Ocena nie jest prawidlowa, podaj prawidlowa:" << endl;
		cin >> ocenaTestu;
	}
	cout << "\n";
	if (ocenaTestu <= 100 && ocenaTestu >= 99)
		cout << "Ocena celujaca" << endl;
	if (ocenaTestu <= 98 && ocenaTestu >= 85)
		cout << "Ocena badzo dobra" << endl;
	if (ocenaTestu <= 84 && ocenaTestu >= 70)
		cout << "Ocena dobra" << endl;
	if (ocenaTestu <= 69 && ocenaTestu >= 55)
		cout << "Ocena dostateczna" << endl;
	if (ocenaTestu <= 54 && ocenaTestu >= 40)
		cout << "Ocena dopuszczajaca" << endl;
	if (ocenaTestu <= 39)
		cout << "Ocena niedostateczna" << endl;
	cout << "\n";


	cout << "17. Program wystawiajacy ocene z testu (funkcja switch)\nPodaj punktacje 0-100:\n";
	cin >> ocenaSwitch;

	while (ocenaSwitch < 0 || ocenaSwitch >100) {
		cout << "Ocena nie jest prawidlowa, podaj wlasciwa:" << endl;
		cin >> ocenaSwitch;
	}

	ocenaSwitch = ocenaSwitch / 10;

	switch (ocenaSwitch)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4: cout << "Ocena niedostateczna" << endl; break;
	case 5: cout << "Ocena dopuszczajaca" << endl; break;
	case 6: cout << "Ocena dostateczna" << endl; break;
	case 7: cout << "Ocena dobra" << endl; break;
	case 8: cout << "Ocena bardzo dobra" << endl; break;
	case 9:
	case 10: cout << "Ocena celujaca" << endl; break;
	}


	getchar();
	getchar();

	return 0;
}