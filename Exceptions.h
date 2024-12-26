#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CinemaException : exception
{
private:
	string errorMessage;
public:
    // Konstruktor mit benutzerdefinierter Nachricht
    explicit CinemaException(const string& message) : errorMessage(message) {}

    // Überschreiben von what() für Benutzerdefinierte Fehlermeldungen
    const char* what() const noexcept override 
    {
        return errorMessage.c_str();
    }
};


#endif //EXCEPTIONS_H
