#include "DataBaseClient.h"
#include <iostream>

DataBaseClient::DataBaseClient(const std::string& filename)
{
    _file.open(filename);
    if (!_file.is_open())
    {
        std::cout << "Failed to open file: " << filename << std::endl;
        return;
    }
    _file << "--Name --Surname --Patronymic --Pincode--\n";
}

void DataBaseClient::SaveClientData(const Client& client)
{
    _file << client.name() << ","
        << client.surname() << ","
        << client.patronymic() << ","
        << client.pinCode() << "\n";
}





