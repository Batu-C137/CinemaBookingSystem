#include"Buchungen.h"

Buchungen::Buchungen(int buchungsNummer, int saalNummer, int reihe, int sitz, Movie& film) : buchungsNummer(buchungsNummer),
saalNummer(saalNummer), reihe(reihe), sitz(sitz), film(film){}

Buchungen::~Buchungen()
{

}

void Buchungen::BuchungAendern(int buchungsNummer)
{
	switch (buchungsNummer)
	{
	default:
		break;
	}
}

void Buchungen::BuchungStonieren(int buchungsNummer)
{
	switch (buchungsNummer)
	{
	default:
		break;
	}
}