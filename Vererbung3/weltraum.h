#pragma once


// eigentlich bekommt jede Klasse ihre eigene Header-Datei und falls erforderlich eine eigene cpp Datei

// allgemeine Klasse - Basisklasse 

class Himmelskoerper
{
public:
	double masse;	// Einhet???
	double radius;	// km 

};


// spezialisierte Klasse
class Stern : public Himmelskoerper
{
public:
	double leuchtkraft;	// Enheit ???

};



class Planet : public Himmelskoerper
{
public:
	bool istBewohnt;	// gibt an, ob auf dem Planeten Leben vorhanden ist
};



class Mond : public Himmelskoerper
{
public:
	double umlaufzeit;	// Einheit???


};