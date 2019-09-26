#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

const double PI = 3.141592653;

int main()
{
    std::cout<<std::setprecision(10);
    std::cout<<std::setw(12)<<PI*(-1)<<std::endl;
    std::cout<<std::setw(12)<<PI*(100)<<std::endl;
    std::cout<<std::setw(12)<<PI*(10000)<<std::endl;
    
    return 0;

}
