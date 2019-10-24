#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    //Initialization
    short n1 = 32767;
    std::cout<<n1<<" +1 = ";
    int m1 = 0;
    m1 = int(n1+1);
    std::cout<<"Transforming n1 to m1 :"<<m1<<std::endl;


    //Initialization
    unsigned short n2 = 65535;
    std::cout<<n2<<" +1 = ";
    int m2 = 0;
    m2 = int(n2+1);
    std::cout<<"Transforming n2 to m2 :"<<m2<<std::endl;
    
    
    //Initialization
    short n3 = -32768;
    std::cout<<n3<<" -1 = ";
    int m3 = 0;
    m3 = int(n3-1);
    std::cout<<"Transforming n3 to m3 :"<<m3<<std::endl;
    
    //Initialization
    unsigned short n4 = 0;
    std::cout<<n4<<" -1 = ";
    int m4 = 0;
    m4 = int(n4-1);
    std::cout<<"Transforming n4 to m4 :"<<m4<<std::endl;

    return 0;
}
