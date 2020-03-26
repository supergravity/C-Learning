#include <iostream>
#include <cmath>

int main()
{
    //Initialization
    double t[3] = {0};
    double D = 0; 

    //Input
    std::cout<<"Please insert three parameters for the discrimant of the quadratic equation ax^2 + bx + c = 0 with the order of a, b, c sequentially"<<std::endl;
    std::cin>>t[0];
    std::cin>>t[1];
    std::cin>>t[2];

    //Discriminant 
    D = pow(t[1],2) - 4*t[0]*t[2];
 
    if (D == 0)
    {
    	std::cout<<"The equation has one real root! "<<std::endl;
    }
    else if (D > 0)
    {
    	std::cout<<"The equation has two real roots! "<<std::endl;
    }
    else 
    {
    	std::cout<<"The equation has two imaginary roots! "<<std::endl;
    }
    
    return 0;

}
