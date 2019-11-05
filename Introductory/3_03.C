#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main()
{
    //initialization
    double inch       = 0;
    double cm         = 0;

    std::cout<<"Please insert the number of inch "<<std::endl;
    std::cin>>inch;
    cm = 2.54*inch;

    std::cout<<std::setprecision(3)<<std::setiosflags(std::ios::fixed);
    std::cout<<inch<<" inch(es) is:"<<cm<<" cm"<<std::endl;

    return 0;

}
