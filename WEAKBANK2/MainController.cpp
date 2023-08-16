#include "MainController.h"
#include <iostream>
#include <cstdlib> 

MainController::MainController() :
    _bank{ new Bank() },
    _messageController{ new MessageController() },
    _dataBaseClient{ new DataBaseClient("data.txt") }
{
}

MainController::~MainController() 
{
    delete _bank;
    delete _messageController;
    delete _dataBaseClient;
}

void MainController::clearScreen() 
{
    system("cls");
}

void MainController::start() 
{
    _messageController->printWelcome();
    int pinCode = enteredPin();
    displayOptions();
}

int MainController::enteredPin()
{
    bool authenticated = false;
    int attempts = 3;
    const int pinCode = _messageController->getPincode();

    while (!authenticated && attempts > 0)
    {
        int enteredPin;
        std::cout << "Enter your PIN code: ";
        std::cin >> enteredPin;

        if (enteredPin == pinCode)
        {
            authenticated = true;
            std::cout << "PIN code accepted. Access granted.\n";
        }
        else 
        {
            attempts--;
            std::cout << "Incorrect PIN code. " << attempts << " attempts remaining.\n";
        }
    }

    if (!authenticated) 
    {
        std::cout << "Access denied. Exiting.\n";
        return{};
    }
    return pinCode;
}

void MainController::displayOptions() 
{
    double balance = 1000.0;
   

    while (true) 
    {
        _messageController->showOptions();
       
        int choice;
        std::cin >> choice;
        clearScreen();
        _messageController->userHints(choice);
        switch (choice) 
       
        {
        case 1:
            
            _bank->viewBalance(balance);
            break;
        case 2:
            double depositAmount;
             
            std::cin >> depositAmount;
            _bank->deposit(balance, depositAmount);
            break;
        case 3:
            double withdrawAmount;

            std::cin >> withdrawAmount;
            _bank->withdraw(balance, withdrawAmount);
            break;
        case 4:
            break;
        default:
            break;
        }
        
    }
}

