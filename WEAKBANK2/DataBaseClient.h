#pragma once
#include <string>
#include <fstream>
#include "Client.h"

class DataBaseClient 
{
public:
    DataBaseClient(const std::string& filename);
    void SaveClientData(const Client& client);

private:
    std::ofstream _file;
};
