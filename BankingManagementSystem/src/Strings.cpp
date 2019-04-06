#include "Strings.h"

Strings::Strings()
{
    //ctor
}

Strings::~Strings()
{
    //dtor
}

bool Strings::compareStrings(char a[],char b[])
{
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
