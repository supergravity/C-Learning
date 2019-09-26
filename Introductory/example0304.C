#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

const double PI = 3.141592653;

int main()
{
    std::cout<<PI<<std::endl;
    std::cout<<std::setprecision(10)<<PI<<std::endl;
    std::cout<<std::setprecision(8)<<PI<<std::endl;
    std::cout<<std::setprecision(6)<<PI<<std::endl;
    std::cout<<std::setprecision(3)<<PI<<std::endl;
    std::cout<<std::setprecision(1)<<PI<<std::endl;

    return 0;
}

