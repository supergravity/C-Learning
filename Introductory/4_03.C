#include <iostream>
#include <cmath>

int main()
{
    //Initialization
    double num = 0;
    double root = 0;

    //Argument
    std::cout<<"Please insert any number"<<std::endl;
    std::cin>>num;

    if (num >= 0)
    {
        root = sqrt(num); 
    	std::cout<<"the square root of num "<<num<<" is "<<root<<std::endl;
    }
    else
    {
     	std::cout<<"the square root of num "<<num<<" : Error"<<std::endl;
    }	    
    return 0;
}

