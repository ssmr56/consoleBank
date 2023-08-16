#pragma once
#include "Bank.h"
#include "MessageController.h"
#include "DataBaseClient.h"

class MainController 
{
public:
    MainController();
    ~MainController();
    int enteredPin();
    void start();
    void displayOptions();
    void clearScreen();
    void ñustomerExpectation();

private:
    Bank* _bank;
    MessageController* _messageController;
    DataBaseClient* _dataBaseClient;
};
