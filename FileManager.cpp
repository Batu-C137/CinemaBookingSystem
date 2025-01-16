#include "FileManager.h"

FileManager::FileManager(){}
FileManager::~FileManager(){}

bool FileManager::WriteFile(string& text, string& fileName)
{   
    string pathName = path + fileName;
    // Erstellen eines ofstream-Objekts mit dem angegebenen Pfad
    ofstream data(pathName, ios::app);

    if (!data)
    {
        cerr << "File couldn´t be opened!" << endl;
        return false;
    }

    // Schreiben von Text in die Datei
    data << text + '\n';

    // Datei schließen
    data.close();

    return true;
}

bool FileManager::WriteFile(string& text, string& fileName, string& header)
{
    string pathName = path + fileName;

    // Erstellen eines ofstream-Objekts mit dem angegebenen Pfad
    ifstream check(pathName);
    if (!check.is_open()) 
    {
        ofstream data(pathName);
        if (data.is_open())
        {
            data << header + '\n' << endl;
            data.close();
        }
        else
        {
            cerr << "Error : file does not exist.";
        }
    }

    ofstream data(pathName, ios::app);

    if (!data)
    {
        cerr << "File couldn´t be opened!" << endl;
        return false;
    }

    // Zeilen in der Datei zählen, um die Nummerierung zu bestimmen
    int lineCount = 0;
    string line;
    ifstream inFile(pathName);
    while (getline(inFile, line))
    {
        if (!line.empty()) // Leere Zeilen ignorieren
            lineCount++;
    }
    inFile.close();

    // Schreiben von Text in die Datei
    data << lineCount << ". " << text + '\n';

    // Datei schließen
    data.close();

    return true;
}

vector<string> FileManager::ReadFile(string& fileName)
{    
    string pathName = path + fileName;
    ifstream data(pathName);
    int i = 0;
    string readLine;

    // Überprüfen, ob die Datei erfolgreich geöffnet wurde
    if (!data)
    {
        cerr << "Error : file does not exist." << std::endl;
        return movies;
    }

    movies.clear();

    // Zeilenweise aus der Datei lesen
    while (getline(data, readLine))
    {
        movies.push_back(readLine);
        //i++;
    }

    // Datei schließen
    data.close();

    return movies;
}