#include <iostream>
#include "Bank.h"

void Bank::viewBalance(double balance) 
{
    std::cout << "Остаток баланса: " << balance << " гривен" << std::endl;
}

void Bank::deposit(double& balance) 
{
    double summa;
    std::cout << "Введите сумму для пополнения: ";
    std::cin >> summa;

    if (summa > 0) 
    {
        balance += summa;
        std::cout << "Баланс успешно пополнен. Новый баланс: " << balance << " гривен" << std::endl;
    }
    else {
        std::cout << "Неверная сумма для пополнения." << std::endl;
    }
}

void Bank::withdraw(double& balance) 
{
    double withdrawmoney;
    std::cout << "Введите сумму для снятия: ";
    std::cin >> withdrawmoney;

    if (withdrawmoney > 0 && withdrawmoney <= balance) 
    {
        balance -= withdrawmoney;
        std::cout << "Вы успешно сняли " << withdrawmoney << " гривен. Новый баланс: "
            << balance << " гривен" << std::endl;
    }
    else 
    {
        std::cout << "Неверная сумма для снятия или недостаточно средств на счете." << std::endl;
    }
}

void Bank::changePin(int& Pin) 
{
    int newPin;
    std::cout << "Введите новый пин код: ";
    std::cin >> newPin;
    Pin = newPin;
    std::cout << "Пин код успешно изменен." << std::endl;
}
