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
    diff= sin(25*rad) - cos(70*rad);
    if (diff > 0)
    {
    	std::cout<<"sin(25) is bigger "<<std::endl;
    }
    if (diff == 0)	
    {
    	std::cout<<"they are equal "<<std::endl;
    }
    else if (diff < 0) 
    {
    	std::cout<<"cos(70) is bigger "<<std::endl;
    }

    return 0; 
	
}
