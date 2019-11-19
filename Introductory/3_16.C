#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

int main()
{
    //Initialization
    double pound = 0;// in pound 
    double feet  = 0;// in feet
    double w     = 0; 
    double h     = 0;
    double BMI   = 0; 


    std::cout<<"Please insert your weight in pound:"<<std::endl;
    std::cin>>pound;
    std::cout<<"Please insert your height in feet:"<<std::endl;
    std::cin>>feet;

    w = pound * 0.4536;
    h = feet  * 0.3048; 

    //output BMI value 
    BMI = (w/pow(h,2));
    std::cout<<"The BMI value is: "<<BMI<<std::endl;
    return 0;

}
