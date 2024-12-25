#ifndef BUCHUNGEN_H
#define BUCHUNGEN_H

#include<iostream>
#include "Movie.h"

using namespace std;

class Buchungen
{
private:
	int buchungsNummer = 0;
	Movie& film;
	int saalNummer = 0;
	int reihe = 0;
	int sitz = 0;

public:
	Buchungen(int buchungsNummer, int saalNummer, int reihe, int sitz, Movie& film);
	~Buchungen();

	void BuchungAendern(int buchungsNummer);
	void BuchungStonieren(int buchungsNummer);
};

#endif //BUCHUNGEN_H
