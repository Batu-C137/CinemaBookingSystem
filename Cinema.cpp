#include <iostream>
#include <fstream>
#include "Movie.h"
#include "CinemaSystem.h"
#include <string>
#include "FileManager.h"

using namespace std;

void static Clear()
{
#if defined _WIN32
    system("cls");
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
#elif defined (__APPLE__)
    system("clear");
#endif
}

void AddOrDeleteMovie(Movie movie, CinemaSystem cinemaSystem);

int main()
{
    //KinoDateiErstellen();
    CinemaSystem cinemaSystem;
    Movie movie;
    CinemaHall cinemaHall;
    FileManager fileManager;
    int option = 0;
    string optin_s;
    string* info;
    string infoInput[4];
    vector<string> List;
    string tempInput;
    int i = 0;
    string s;

    while (1)
    {
        Clear();
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$\t\t\t\t\t\t$\n$\t\t\t\t\t\t$\n$\t\tCinema World\t\t\t$\n$\t\t\t\t\t\t$\n$\t\t\t\t\t\t$\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;

        cout << "\n1.Add or delete movies" << endl;
        cout << "2.Add cinema hall" << endl;
        cout << "3.Add or cancel bookings" << endl;
        cout << "4.Show booking information of cinema hall" << endl;
        cout << "5.Exit\n" << endl;
        cout << "select option: ";

        cin >> optin_s;
        option = atoi(optin_s.c_str());

        switch (option)
        {
        case 1:
            option = 0;
            do
            {
                Clear();
                try
                {
                    List = fileManager.ReadFile(fileManager.movieListName);

                    if (List.empty())
                    {
                        throw exception("List is empty.");
                    }
                    else
                    {
                        for (const string movie : List)
                        {
                            cout << movie << '\n';
                        }
                    }
                }
                catch (exception& e)
                {
                    cerr << e.what() << endl;
                }

                cout << "\n\n1.Add film" << endl;
                cout << "2.Delete film" << endl;
                cout << "3.Back\n" << endl;
                cout << "select option: ";

                cin >> optin_s;
                option = atoi(optin_s.c_str());

                switch (option)
                {
                case 1:
                    Clear();
                    AddOrDeleteMovie(movie, cinemaSystem);
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
                }
            } while (option != 3);

            break;
        case 2:
            Clear();           
            List = fileManager.ReadFile(fileManager.cinemaHalllistName);
            for (const string hallInfo : List)
            {
                cout << hallInfo << '\n';
            }

            cout << "\n\n";

            i = 4;
            info = new string[i];
            info[0] = "Hall number : ", info[1] = "Seat rows : ", info[2] = "Number of rows of seats : ";
            for (int c = 0; c < i; c++)
            {
                cout << info[c];
                getline(cin, infoInput[c]);
                infoInput[c].erase(remove_if(infoInput[c].begin(), infoInput[c].end(), ::isspace), infoInput[c].end());
            }
            //for (const string prop : info)
            //{
            //    cout << prop;
            //    cin >> infoInput[i];
            //    i++;
            //}
            cinemaHall.setHallNumber(atoi(infoInput[0].c_str()));
            cinemaHall.setSeatRow(atoi(infoInput[1].c_str()));
            cinemaHall.setSeatRowCount(atoi(infoInput[2].c_str()));
            cinemaSystem.AddHall(cinemaHall);
            break;
        case 3:
            Clear();
            List = fileManager.ReadFile(fileManager.bookingList);
            for (const string bookingInfo : List)
            {
                cout << bookingInfo << "\t";
            }

            cout << "\n\n";
            //change
            i = 4;
            info = new string[i];
            info[0] = "Hall number : ", info[1] = "Titel : ", info[2] = "Row : ", info[3] = "Seat : ";
            for (int c = 0; c < i; c++)
            {
                cout << info[c];
                getline(cin, infoInput[c]);
                infoInput[c].erase(remove_if(infoInput[c].begin(), infoInput[c].end(), ::isspace), infoInput[c].end());
            }
            //for (const string prop : info)
            //{
            //    cout << prop;
            //    cin >> infoInput[i];
            //    i++;
            //}
            break;
        case 4:
            Clear();
            i = 0;
            List = fileManager.ReadFile(fileManager.cinemaHalllistName);
            for (int j = 0; j < List.size(); j++)
            {
                cout << List[j][i] << "\t";
            }
            cout << "\n\nSelect hall: ";
            cin >> optin_s;
            option = atoi(optin_s.c_str());
            
            for (int j = 0; j < List.size(); j++)
            {
                s = List[j][i];
                if (atoi(s.c_str()) == option)
                {

                    break;
                }
            }
            break;
        case 5:
            return 0;
        default:
            cout << "Wrong input";
            break;
        }
    }
}

void AddOrDeleteMovie(Movie movie, CinemaSystem cinemaSystem)
{
    string* info;
    string infoInput[4];
    int i = 3;

    info = new string[i];
    info[0] = "Titel : ", info[1] = "Genre : ", info[2] = "Length : ";
    cin.ignore();

    for (int c = 0; c < i; c++)
    {
        cout << info[c];
        getline(cin, infoInput[c]);
        /*cin >> tempInput;*/
        infoInput[c].erase(remove_if(infoInput[c].begin(), infoInput[c].end(), ::isspace), infoInput[c].end());
        /*infoInput[i] = tempInput;*/
    }
    //for (const string prop : info)
    //{
    //    cout << prop;
    //    
    //    getline(cin, infoInput[i]);
    //    /*cin >> tempInput;*/
    //    infoInput[i].erase(remove_if(infoInput[i].begin(), infoInput[i].end(), ::isspace), infoInput[i].end());
    //    /*infoInput[i] = tempInput;*/
    //    i++;
    //}
    movie.setTitel(infoInput[0]);
    movie.setGenre(infoInput[1]);
    movie.setDauer(atoi(infoInput[2].c_str()));
    cinemaSystem.AddMovie(movie);

    info->erase();
}
