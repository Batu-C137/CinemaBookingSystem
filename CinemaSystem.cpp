#include"CinemaSystem.h"

CinemaSystem::CinemaSystem()
{

}

CinemaSystem::~CinemaSystem()
{

}

void CinemaSystem::AddMovie(const Movie& movie)
{
	string movieInfo = movie.getTitel() + "\t\t\t" + movie.getGenre() + "\t\t\t" + to_string(movie.getDauer());
	string header = "Titel:\t\t\tGenre:\t\t\tLength(min.):";
	helper.WriteFile(movieInfo, helper.movieListName, header);
}

void CinemaSystem::DeleteMovie(const string& titel)
{

}

void CinemaSystem::AddHall(const CinemaHall& cinemaHall)
{
	string hallInfo = to_string(cinemaHall.getHallNumber()) + "\t\t\t\t" + to_string(cinemaHall.getSeatRow()) + "\t\t\t\t" + to_string(cinemaHall.getSeatRowCount());
	string header = "Hall number:\t\t\tSeat rows:\t\t\tSeat row count:";
	helper.WriteFile(hallInfo, helper.cinemaHalllistName, header);
}

void CinemaSystem::CreateBooking(int hallNumber, const string& titel, int row, int seat)
{
	throw("Not implemented");
}

void CinemaSystem::CancleBooking(int buchungsNummer)
{

}