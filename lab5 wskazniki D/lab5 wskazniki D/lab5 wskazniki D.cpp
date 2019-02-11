// ConsoleApplication3.cpp : Defines the entry point for the console application.
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

int suma(int lhs, int rhs) {
	return lhs + rhs;
}

int main() {
	cout << "D. Funkcje: " << endl;

	int(*wsk_suma) (int a, int b);
	wsk_suma = &suma;

	cout << "4+5 = " << wsk_suma(4, 5) << endl;
	getchar();
	return 0;

}