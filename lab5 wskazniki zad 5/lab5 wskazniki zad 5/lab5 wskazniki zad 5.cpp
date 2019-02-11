
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



int zamiana(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	return 0;
}


int main() {

	int  x5, y5, z5;


	cout << "5. Zamiana: " << endl;
	x5 = 5;
	y5 = 7;
	cout << " a = " << x5 << "  b = " << y5;
	z5 = zamiana(&x5, &y5);

	cout << "\nPo zamianie: a=" << x5 << "  b = " << y5;
	getchar();
	return 0;

}