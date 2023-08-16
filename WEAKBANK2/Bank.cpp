#include "Bank.h"
#include <iostream>

Bank::Bank() : _balance(1000.0)
{
}

void Bank::viewBalance(double balance) const
{
    std::cout << "Your balance: " << balance << " grn\n";
}

void Bank::deposit(double& balance, double amount) 
{
    balance += amount;
    std::cout << "Deposited " << amount << " grn\n";
}

void Bank::withdraw(double& balance, double amount) 
{
    if (balance >= amount) 
    {
        balance -= amount;
        std::cout << "Withdrawn " << amount << " grn\n";
    }
    else {
        std::cout << "Insufficient funds\n";
    }
}


double Bank::getBalance() const
{
    return _balance;
}

void Bank::setBalance(double newBalance) 
{
    _balance = newBalance;
}
