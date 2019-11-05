#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main()
{
    //initialization 

    double sum    = 0;
    
    //converting degree into radian
    double rad    = 0;
    rad = (M_PI/180);

    sum = (1/cos(60*rad)) + (tan(45*rad)) + (1/tan(45*rad)) + (cos(45*rad)) + (sin(60*rad));
    std::cout<<"the sum of sec(60) + tan(45) + cot(45) + cos(45) + sin(60) is: "<<sum<<std::endl;

    return 0; 
	

}
