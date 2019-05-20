#include <iostream>
#include <string>
#include "weltraum.h"



using namespace std;


int main()
{
	cout << "Programm zu Vererbung3" << endl << endl;


	Stern sonne;
	sonne.masse = 1.0;		// eine Sonnenmase
	sonne.radius = 696342;
	sonne.leuchtkraft = 1.0;
	//sonne.leuchtkraft = 3.846e26;	// Watt entspricht 3.846*10^26


	Stern alphaCentauri;
	alphaCentauri.radius = 199999;
	alphaCentauri.leuchtkraft = 4.5;	// 4.5 mal stärker als die Sonne
	alphaCentauri.masse = 2.039;


	Planet erde;

	erde.radius = 6347;
	erde.masse = 0.01;
	erde.istBewohnt = true;


	Mond erdmond;

	erdmond.radius = 1000;
	erdmond.masse = 0.0001;
	erdmond.umlaufzeit = 29.5; // tage



	system("pause");
	return 0;
}
