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

    sum = (tan(28*rad))*(tan(62*rad)) + pow(tan(35*rad),2) - pow((1/cos(35*rad)),2);
    std::cout<<"the sum of tan(28)*tan(62) + (tan(35))^2 - (sec(35))^2 is: "<<sum<<std::endl;

    return 0; 
	

}
