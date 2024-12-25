#include"CinemaHall.h"

CinemaHall::CinemaHall()
{
	hallNumber = 0;
	seatRow = 0;
	seatRowCount = 0;
}

CinemaHall::~CinemaHall() {}

void CinemaHall::Seat(vector<vector<bool>> sitzPlaetze)
{

}

int CinemaHall::getHallNumber() const { return hallNumber; }
int CinemaHall::getSeatRow() const { return seatRow; }
int CinemaHall::getSeatRowCount() const { return seatRowCount; }

void CinemaHall::setHallNumber(int newHallNumber) { hallNumber = newHallNumber; }
void CinemaHall::setSeatRow(int newSeatRow) { seatRow = newSeatRow; }
void CinemaHall::setSeatRowCount(int newSeatRowCount) { seatRowCount = newSeatRowCount; }