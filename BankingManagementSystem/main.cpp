#include <iostream>
#include "Customer.h"
#include "CustomerBinaryClient.h"
#include <memory>
#include <cstring>


using namespace std;

int main()
{
    Customer cust = Customer();
    strcpy(cust.customerId,"1");
    strcpy(cust.firstName,"Aster");
    strcpy(cust.lastName,"Danaj");
    strcpy(cust.phone,"0692160130");
    std::unique_ptr<CustomerBinaryClient> bf (new CustomerBinaryClient);
    bf->Insert("./customer.dat",cust);
    return 0;
}
