#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

class FileManager
{
private:
    const string path = "./Kinosystem/"; // Relativer Pfad zum Projektverzeichnis
    vector<string> movies;
public:
    FileManager();
    ~FileManager();
    string movieListName = "MovieList.txt";
    string cinemaHalllistName = "CinemaHall.txt";
    string bookingList = "Bookings.txt";
    bool WriteFile(string& text, string& fileName);
    bool WriteFile(string& text, string& fileName, string& header);
    vector<string> ReadFile(string& fileName);
};

#endif //FILEMANAGER_H
