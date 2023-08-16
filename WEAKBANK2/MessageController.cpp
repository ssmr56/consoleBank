#include "MessageController.h"
#include <iostream>

void MessageController::printWelcome() const
{
    std::cout << "\t\t\t\t\tWelcome to WEAKBANK\n";
}

int MessageController::getPincode() const
{
    int pinCode;
    std::cout << "\n\t\t\tTo confirm your identity, enter the pin code and press enter ";
    std::cin >> pinCode;
    return pinCode;
}

void MessageController::showOptions()
{
    std::cout << "\nOptions:\n";
    std::cout << "1. View Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
}

void MessageController::userHints(int index)
{
    switch (index)
    {
    case 1:
        break;
    case 2:
        std::cout << "Enter deposit amount: ";
        break;
    case 3:
        std::cout << "Enter withdrawal amount: ";
        break;
    case 4:
        std::cout << "Goodbye!\n";
        break;
    default:
        std::cout << "Invalid choice. Please try again.\n";
        break;
    }
}



