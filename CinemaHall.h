#ifndef CINEMAHALL_H
#define CINEMAHALL_H

#include<iostream>
#include <vector>

using namespace std;

class CinemaHall
{
private:
	int hallNumber;
	int seatRow;
	int seatRowCount;

public:
	CinemaHall();
	~CinemaHall();

	void Seat(vector<vector<bool>> sitzPlaetze);
	int getHallNumber() const;
	int getSeatRow() const;
	int getSeatRowCount() const;

	void setHallNumber(int newHallNumber);
	void setSeatRow(int newSeatRow);
	void setSeatRowCount(int newSeatRowCount);
};

#endif //CINEMAHALL_H
