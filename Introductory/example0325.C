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
    //std::cout<<std::setprecision(2)<<std::setiosflags(std::ios::fixed);
    std::cout<<"x = "<<x<<std::endl;
    std::cout<<"ceil("<<x<<") = "<<ceil(x)<<std::endl;
    std::cout<<"floor("<<x<<") = "<<floor(x)<<std::endl;

    return 0;
}
