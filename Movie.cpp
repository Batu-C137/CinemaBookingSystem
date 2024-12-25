#include"Movie.h"

Movie::Movie(const string& titel, const string& genre, int dauer) : titel(titel), genre(genre), length_min(dauer){}
Movie::Movie() { length_min = 0; }

//Filme::Filme(string name, string genre, int dauer_min)
//{
//
//    filme.push_back({ name , genre, dauer_min });
//
//    //if (name.length() < 20 && genre.length() < 20 && dauer_min < 1000)
//    //{
//    //    filme.push_back({ name , genre, dauer_min });
//    //}
//    //else
//    //{
//    //    name.erase(20, name.length() - 20);
//    //    genre.erase(20, name.length() - 20);
//    //    dauer_min -= 
//    //}
//}

//Filme::~Filme()
//{
//	filme.clear();
//}

//void Filme::filmInfo()
//{
//    for (const auto& film : filme) 
//    {
//        cout << "Titel\t\t\tGenre\t\t\tDauer(min.)\n" << endl;
//        cout << film.name << "\t\t\t" << film.genre << "\t\t\t" << film.dauer << endl;
//    }
//}

string Movie::getTitel() const { return titel; }
string Movie::getGenre() const { return genre; }
int Movie::getDauer() const { return length_min; }

void Movie::setTitel(const string& neuerTitel) { titel = neuerTitel; }
void Movie::setGenre(const string& neuesGenre) { genre = neuesGenre; }
void Movie::setDauer(int neueDauer) { length_min = neueDauer; }
//vector<Filme::Filme::Film> Filme:: getFilm() const
//{
//    return filme;
//}
//
//void Filme::setFilm(string name, string genre, int dauer)
//{
//    Helper helper;
//
//    helper.KinoDateiSchreiben(name, genre, dauer);
//    /*filme.push_back({ name , genre, dauer });*/
//}