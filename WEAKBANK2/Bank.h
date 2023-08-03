#pragma once

class Bank {
public:
    void viewBalance(double balance);
    void deposit(double& balance);
    void withdraw(double& balance);
    void changePin(int& Pin);
};
 