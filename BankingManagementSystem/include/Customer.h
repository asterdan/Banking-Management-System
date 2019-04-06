#ifndef CUSTOMER_H
#define CUSTOMER_H


class Customer
{
    public:
        char customerId[50];
        char firstName[50];
        char lastName[50];
        char phone[50];
        Customer();
        virtual ~Customer();
        void toString();

    protected:

    private:
};

#endif // CUSTOMER_H
