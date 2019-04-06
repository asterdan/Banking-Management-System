#include "Customer.h"
#include <iostream>

Customer::Customer()
{
    //ctor
}

Customer::~Customer()
{
    //dtor
}


void Customer::toString()
{
    std::cout << this->customerId << std::endl;
    std::cout << this->firstName << std::endl;
    std::cout << this->lastName << std::endl;
    std::cout << this->phone << std::endl;
}
