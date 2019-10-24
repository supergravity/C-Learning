#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    // Initialization
    int a = 1;
    int b = 4;
    int c = 4;
    int x = 0;
    
    x = b*b - 4*a*c;

    std::cout<<"a = "<<a<<std::endl;
    std::cout<<"b = "<<b<<std::endl;
    std::cout<<"c = "<<c<<std::endl;
    std::cout<<"b*b - 4*a*c = "<<x<<std::endl;
    
    return 0;
}
