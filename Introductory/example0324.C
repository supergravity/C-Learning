#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>

int main()
{
    //initialization
    double x = 0;
    std::cout<<"Please insert a integer"<<std::endl;
    std::cin>>x;
    std::cout<<std::setprecision(2)<<std::setiosflags(std::ios::fixed);
    std::cout<<"x = "<<x<<std::endl;
    std::cout<<"pow("<<x<<") = "<<pow(x,2)<<std::endl;
    std::cout<<"sqrt("<<x<<") = "<<sqrt(x)<<std::endl;

    return 0;
}
