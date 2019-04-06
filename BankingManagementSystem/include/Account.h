#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <cstring>


class Account
{
    public:
        char accountNumber[50];
        char accountName[50];
        char depositAmount[50];
        char withdrawAmount[50];
        Account();
        virtual ~Account();
        Account(char accountNumber[50],char firstName[50],char lastName[50],char balance[50]);

    protected:

    private:
};

#endif // ACCOUNT_H
