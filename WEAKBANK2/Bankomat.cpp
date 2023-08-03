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
    std::cout << "��� ������������ ���� 'WEAKBANK'\n������� ��� ���, ����� ����������: ";
    std::cin >> Pin;

    if (Pin != Pincode) 
    {
        std::cout << "�������� ��� ���." << std::endl;
        return;
    }

    int choice;
    double balance = 18000;

    std::cout << "�������� ������� ��������:" << std::endl;
    std::cout << "1. �������� ������� �������" << std::endl;
    std::cout << "2. ��������� ������" << std::endl;
    std::cout << "3. ����� ������" << std::endl;
    std::cout << "4. �������� ��� ���" << std::endl << std::endl;

    std::cout << "������� ����� ��������: ";
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
        std::cout << "�������� ����� ��������." << std::endl;
        break;
    }
}
