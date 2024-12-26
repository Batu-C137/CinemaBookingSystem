#ifndef BOOKING_H
#define BOOKING_H

#include<iostream>
#include "Movie.h"

using namespace std;

class Booking
{
private:
	int bookingNumber = 0;
	Movie& movie;
	int hallNumber = 0;
	int row = 0;
	int seat = 0;

public:
	Booking(int bookingNumber, int hallNumber, int row, int seat, Movie& movie);
	~Booking();

	void changeBooking(int bookingNumber);
	void cancelBooking(int bookingNumber);
};

#endif //BOOKING_H
