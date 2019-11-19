#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

int main()
{
    //Initialization
    double w = 0;// in kg 
    double h = 0;// in cm
    double BMI = 0; 

    std::cout<<"Please insert your weight in kilogram:"<<std::endl;
    std::cin>>w;
    std::cout<<"Please insert your height in meter:"<<std::endl;
    std::cin>>h;

    //output BMI value 
    BMI = (w/pow(h,2));
    std::cout<<"The BMI value is: "<<BMI<<std::endl;
    return 0;

}
