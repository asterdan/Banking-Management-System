#include "CustomerBinaryClient.h"
#include "Strings.h"
#include <iostream>
#include <fstream>

CustomerBinaryClient::CustomerBinaryClient()
{
    //ctor
}

CustomerBinaryClient::~CustomerBinaryClient()
{
    //dtor
}

void CustomerBinaryClient::Save(std::ofstream &of,Customer customer)
{
    of.write((char*)&customer.customerId,sizeof(customer.customerId));
    of.write((char*)&customer.firstName,sizeof(customer.firstName));
    of.write((char*)&customer.lastName,sizeof(customer.lastName));
    of.write((char*)&customer.phone,sizeof(customer.phone));
}


void CustomerBinaryClient::Insert(char strFile[80],Customer customer)
{
    std::ofstream fs;
    fs.open(strFile,std::ios::in|std::ios::app|std::ios::binary);
    if(!fs.is_open())
    {
        std::cout << "File is not open!";
    }
    else
    {
        this->Save(fs,customer);
        std::cout << "Customer added!";
    }
}

override void CustomerBinaryClient::Update(char strFile[80],char id[80])
{

    Customer customer;

    char custId[50],fName[50],lName[50],phone[50];
    std::cout << "Enter new id:";
    std::cin >> custId;
    std::endl;
    std::cout << "Enter new first name:";
    std::cin >> fName;
    std::endl;
    std::cout << "Enter new last name:";
    std::cin >> lName;
    std::endl;
    std::cout << "Enter new phone:";
    std::cin >> phone;
    std::endl;

    Customer update;
    std::ifstream binaryFile;
    int size = 0;
    binaryFile.open(strFile,std::ios::in|std::ios::binary);
    binaryFile.seekg(0,std::ios::end);
    size = (int)binaryFile.tellg();
    binaryFile.seekg(0,std::ios::beg);
    std::ofstream binaryFile2;
    binaryFile2.open("Temp.dat",std::ios::in|std::ios::app|std::ios::binary);
    while(binaryFile.tellg()<size)
    {
        binaryFile.read((char*)&customer.customerId,sizeof(customer.customerId));
        binaryFile.read((char*)&customer.firstName,sizeof(customer.firstName));
        binaryFile.read((char*)&customer.lastName,sizeof(customer.lastName));
        binaryFile.read((char*)&customer.phone,sizeof(customer.phone));

        Strings strings = new Strings();
        if (strings.compareStrings(customer.customerId,id))
        {
            this->Save(binaryFile2,update);
        }
        else
        {
            this->Save(binaryFile2,customer);
        }

    }
    binaryFile.close();
    binaryFile2.close();
    remove(strFile);
    rename("Temp.dat",strFile);
}

virtual void CustomerBinaryClient::Select(char strFile[80])
{
    Customer customer;
    std::ifstream binaryFile;
    int size = 0;
    binaryFile.open(strFile,std::ios::in|std::ios::binary);
    binaryFile.seekg(0,std::ios::end);
    size = (int)binaryFile.tellg();
    binaryFile.seekg(0,std::ios::beg);
    while (binaryFile.tellg()<size)
    {
        binaryFile.read((char*)&customer.customerId,sizeof(customer.customerId));
        binaryFile.read((char*)&customer.firstName,sizeof(customer.firstName));
        binaryFile.read((char*)&customer.lastName,sizeof(customer.lastName));
        binaryFile.read((char*)&customer.phone,sizeof(customer.phone));

        customer.toString();

    }
}
