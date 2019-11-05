#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main()
{
    //initialization
    
    double r 	     = 0;
    double perimeter = 0;
    double area      = 0;

    std::cout<<"insert radius r "<<std::endl;
    std::cin>>r;
    std::cout<<"r = "<<r<<std::endl;

    perimeter = 2*M_PI*r;
    area      = M_PI*pow(r,2);

    std::cout<<std::setprecision(3)<<std::setiosflags(std::ios::fixed)<<std::endl;
    std::cout<<"The perimeter of a circle of radius "<<r<<" is: "<<perimeter<<std::endl;
    std::cout<<"The area of a circle of radius "<<r<<" is: "<<area<<std::endl;

    return 0;
}
