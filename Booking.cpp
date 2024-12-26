#include"Booking.h"

Booking::Booking(int bookingNumber, int hallNumber, int row, int seat, Movie& movie) : bookingNumber(bookingNumber),
hallNumber(hallNumber), row(row), seat(seat), movie(movie){}

Booking::~Booking()
{

}

void Booking::changeBooking(int bookingNumber)
{
	switch (bookingNumber)
	{
	default:
		break;
	}
}

void Booking::cancelBooking(int bookingNumber)
{
	switch (bookingNumber)
	{
	default:
		break;
	}
}