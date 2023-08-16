#pragma once

class Bankomat 
{
public:
    Bankomat();

    void changePin(int& pin);

private:
    int _pin;
};

