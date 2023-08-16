#include "Bankomat.h"
#include <iostream>

Bankomat::Bankomat() : _pin(1234) 
{
}


void Bankomat::changePin(int& pin)
{
    int newPin;
    std::cout << "Enter new pin code: ";
    std::cin >> newPin;
    pin = newPin;
    std::cout << "Pin code changed successfully\n";
}
