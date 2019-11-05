#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main()
{
    //initialization
    double length       = 0;
    double surface_area = 0;
    double volume       = 0;

    std::cout<<"Please insert the length of a cubic "<<std::endl;
    std::cin>>length;
    
    surface_area = 6*pow(length,2);
    volume       = pow(length,3);

    std::cout<<std::setprecision(3)<<std::setiosflags(std::ios::fixed);
    std::cout<<"The length of the cubic is: "<<length<<std::endl;
    std::cout<<"The surface area is: "<<surface_area<<std::endl;
    std::cout<<"The volume is: "<<volume<<std::endl;

    return 0;

}
