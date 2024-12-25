#ifndef HELPER_H
#define HELPER_H

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class Helper
{
private:
	const string path = "./Kinosystem/"; // Relativer Pfad zum Projektverzeichnis
	vector<string> movies;
public:
	Helper();
	~Helper();
	string movieListName = "MovieList.txt";
	string cinemaHalllistName = "CinemaHall.txt";
	string bookingList = "Bookings.txt";
	bool WriteFile(string& text, string& fileName);
	bool WriteFile(string& text, string& fileName, string& header);
	vector<string> ReadFile(string& fileName);
};

#endif // HELPER_H
