#ifndef CINEMASYSTEM_H
#define CINEMASYSTEM_H

#include<iostream>
#include<string>
#include "Movie.h"
#include "CinemaHall.h"
#include "Helper.h"

using namespace std;

class CinemaSystem
{
private:
	vector<Movie> filme;
	Helper helper;
public:
	CinemaSystem();
	~CinemaSystem();

	void AddMovie(const Movie& movie);
	void DeleteMovie(const string& titel);
	void AddHall(const CinemaHall& cinemaHall);
	void CreateBooking(int hallNumber, const string& titel, int row, int seat);
	void CancleBooking(int buchungsNummer);
};

#endif // CINEMASYSTEM_H
