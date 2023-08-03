#pragma once

class Bank;

class Bankomat 
{
public:
    Bankomat();

    void run();

private:
    int Pincode;
    int Pin;
    Bank* bank;
};
