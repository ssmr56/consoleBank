#include <iostream>
#include "Bank.h"

void Bank::viewBalance(double balance) 
{
    std::cout << "������� �������: " << balance << " ������" << std::endl;
}

void Bank::deposit(double& balance) 
{
    double summa;
    std::cout << "������� ����� ��� ����������: ";
    std::cin >> summa;

    if (summa > 0) 
    {
        balance += summa;
        std::cout << "������ ������� ��������. ����� ������: " << balance << " ������" << std::endl;
    }
    else {
        std::cout << "�������� ����� ��� ����������." << std::endl;
    }
}

void Bank::withdraw(double& balance) 
{
    double withdrawmoney;
    std::cout << "������� ����� ��� ������: ";
    std::cin >> withdrawmoney;

    if (withdrawmoney > 0 && withdrawmoney <= balance) 
    {
        balance -= withdrawmoney;
        std::cout << "�� ������� ����� " << withdrawmoney << " ������. ����� ������: "
            << balance << " ������" << std::endl;
    }
    else 
    {
        std::cout << "�������� ����� ��� ������ ��� ������������ ������� �� �����." << std::endl;
    }
}

void Bank::changePin(int& Pin) 
{
    int newPin;
    std::cout << "������� ����� ��� ���: ";
    std::cin >> newPin;
    Pin = newPin;
    std::cout << "��� ��� ������� �������." << std::endl;
}
