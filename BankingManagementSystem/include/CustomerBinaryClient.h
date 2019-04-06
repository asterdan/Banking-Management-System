#ifndef CUSTOMERBINARYCLIENT_H
#define CUSTOMERBINARYCLIENT_H
#include "Customer.h"
#include "IBinaryClient.h"
#include <iostream>
#include <fstream>

class CustomerBinaryClient : public IBinaryClient
{
    public:
        CustomerBinaryClient();
        virtual ~CustomerBinaryClient();
        void Save(std::ofstream &of,Customer customer);
        virtual void Insert(char strFile[80],Customer customer);

    protected:

    private:
};

#endif // CUSTOMERBINARYCLIENT_H
