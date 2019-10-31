#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>

int main()
{
    //initialization
    int x = 0;
    std::cout<<"Please insert a integer"<<std::endl;
    std::cin>>x;
    std::cout<<std::setprecision(3)<<std::setiosflags(std::ios::fixed);
    std::cout<<"x = "<<x<<std::endl;
    std::cout<<"log("<<x<<") = " <<log(x)<<std::endl;
    std::cout<<"log10("<<x<<") = "<<log10(x)<<std::endl;
    std::cout<<"exp("<<x<<") = "<<exp(x)<<std::endl;

    return 0;
}
