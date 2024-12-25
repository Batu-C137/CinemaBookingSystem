#ifndef MOVIE_H
#define MOVIE_H

#include<iostream>
#include <vector>
#include <tuple>

using namespace std;

class Movie
{
private:
	//struct Film {
	//	string name;
	//	string genre;
	//	int dauer;
	//};

	//vector<Film> filme;

	string titel;
	string genre;
	int length_min;


public:
	Movie(const string& titel, const string& genre, int movieLength);
	Movie();
	//~Filme();
	//void filmInfo();
	string getTitel() const;
	string getGenre() const;
	int getDauer() const;

	void setTitel(const string& neuerTitel);
	void setGenre(const string& neuesGenre);
	void setDauer(int neueDauer);
	//vector<Film> getFilm() const;
	//void setFilm(string name, string genre, int dauer);
};

#endif //MOVIE_H
