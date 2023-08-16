#pragma once

class Bank 
{
public:
    Bank();

    void viewBalance(double balance) const;
    void deposit(double& balance, double amount);
    void withdraw(double& balance, double amount);
    double getBalance() const;
    void setBalance(double newBalance);

private:
    double _balance;
};
