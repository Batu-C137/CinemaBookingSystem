#include"Helper.h"

Helper::Helper(){}
Helper::~Helper(){}

bool Helper::WriteFile(string& text, string& fileName)
{   
    string pathName = path + fileName;
    // Erstellen eines ofstream-Objekts mit dem angegebenen Pfad
    ofstream data(pathName, ios::app);

    if (!data)
    {
        cerr << "Die Datei konnte nicht geoeffnet werden!" << endl;
        return false;
    }

    // Schreiben von Text in die Datei
    data << text + '\n';

    // Datei schließen
    data.close();

    return true;
}

bool Helper::WriteFile(string& text, string& fileName, string& header)
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
        cerr << "Die Datei konnte nicht geoeffnet werden!" << endl;
        return false;
    }

    //if (write)
    //{
    //    data << header + "\n\n";
    //}
    /////////////////////////////////////////if file dont exists create and write one time else dont write -> already written

    // Schreiben von Text in die Datei
    data << text + '\n';

    // Datei schließen
    data.close();

    return true;
}

vector<string> Helper::ReadFile(string& fileName)
{    
    string pathName = path + fileName;
    ifstream data(pathName);
    int i = 0;
    string readLine;

    // Überprüfen, ob die Datei erfolgreich geöffnet wurde
    if (!data)
    {
        cerr << "Fehler beim Oeffnen der Datei." << std::endl;
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