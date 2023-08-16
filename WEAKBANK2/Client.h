#pragma once
#include <string>

class Client 
{
public:
    Client() = default;
    Client(std::string name, std::string surname, std::string patronymic);

    int pinCode() const;
    std::string name() const;
    std::string surname() const;
    std::string patronymic() const;

private:
    int _pinCode;
    std::string _name;
    std::string _surname;
    std::string _patronymic;
};
