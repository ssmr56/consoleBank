#include "MainController.h"
#include <iostream>

int main() 
{
    MainController* mainController = new MainController;
    mainController->start();
   

    delete mainController;
    return 0;
}
