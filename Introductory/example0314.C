#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    //Initialization
    short n1 = 32767;
    std::cout<<n1<<" +1 = ";
    n1 = n1 + 1;
    std::cout<<n1<<std::endl;

    //Initialization
    unsigned short n2 = 65535;
    std::cout<<n2<<" +1 = ";
    n2 = n2 + 1;
    std::cout<<n2<<std::endl;
    
    
    //Initialization
    short n3 = -32768;
    std::cout<<n3<<" -1 = ";
    n3 = n3 - 1;
    std::cout<<n3<<std::endl;
    
    //Initialization
    unsigned short n4 = 0;
    std::cout<<n4<<" -1 = ";
    n4 = n4 - 1;
    std::cout<<n4<<std::endl;

    return 0;
}
