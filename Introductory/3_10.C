#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main()
{
    //initialization 

    double diff   = 0;
    
    //converting degree into radian
    double rad    = 0;
    rad = (M_PI/180);
    diff= tan(65*rad) - (1/tan(45*rad));
    if (diff > 0)
    {
    	std::cout<<"tan(65) is bigger "<<std::endl;
    }
    if (diff == 0)	
    {
    	std::cout<<"they are equal "<<std::endl;
    }
    else if (diff < 0) 
    {
    	std::cout<<"cot(45) is bigger "<<std::endl;
    }

    return 0; 
	
}
