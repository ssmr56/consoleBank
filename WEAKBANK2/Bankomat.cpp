#include <iostream>
#include "Bankomat.h"
#include "Bank.h"
#include "Client.h"

Bankomat::Bankomat() : Pincode(9999), Pin(0) 
{
    setlocale(LC_ALL, "Ru");
    bank = new Bank();
}

void Bankomat::run() 
{
    std::cout << "Вас приветствует Банк 'WEAKBANK'\nВведите пин код, чтобы продолжить: ";
    std::cin >> Pin;

    if (Pin != Pincode) 
    {
        std::cout << "Неверный пин код." << std::endl;
        return;
    }

    int choice;
    double balance = 18000;

    std::cout << "Выберите вариант действия:" << std::endl;
    std::cout << "1. Просмотр остатка баланса" << std::endl;
    std::cout << "2. Пополнить баланс" << std::endl;
    std::cout << "3. Снять деньги" << std::endl;
    std::cout << "4. Изменить пин код" << std::endl << std::endl;

    std::cout << "Введите номер действия: ";
    std::cin >> choice;

    switch (choice) 
    {
    case 1:
        bank->viewBalance(balance);
        break;
    case 2:
        bank->deposit(balance);
        break;
    case 3:
        bank->withdraw(balance);
        break;
    case 4:
        bank->changePin(Pin);
        break;
    default:
        std::cout << "Неверный выбор действия." << std::endl;
        break;
    }
}
