#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main()
{
    //initialization
    double inch       = 0;
    double cm         = 0;

    std::cout<<"Please insert the number of cm "<<std::endl;
    std::cin>>cm;
    inch = 0.3937*cm;

    std::cout<<std::setprecision(3)<<std::setiosflags(std::ios::fixed);
    std::cout<<cm<<" cm is:"<<inch<<" inch"<<std::endl;

    return 0;

}
