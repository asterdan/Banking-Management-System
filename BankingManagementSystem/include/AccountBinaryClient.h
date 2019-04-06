#ifndef ACCOUNTBINARYCLIENT_H
#define ACCOUNTBINARYCLIENT_H
#include "IBinaryClient.h"

class AccountBinaryClient: public IBinaryClient
{
    public:
        AccountBinaryClient();
        ~AccountBinaryClient();
        virtual void Insert(char strFile[80]);

    protected:

    private:
};

#endif // ACCOUNTBINARYCLIENT_H
