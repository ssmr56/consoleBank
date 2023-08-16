#include "Client.h"

Client::Client(std::string name, std::string surname, std::string patronymic) :
    _name{ name },
    _surname{ surname },
    _patronymic{ patronymic },
    _pinCode{ 1234 }
{
}

int Client::pinCode() const 
{
    return _pinCode;
}

std::string Client::name() const 
{
    return _name;
}

std::string Client::surname() const 
{
    return _surname;
}

std::string Client::patronymic() const 
{
    return _patronymic;
}
