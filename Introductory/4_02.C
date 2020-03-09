#include <iostream>

int main()
{
    //Initialization 
    int num;

    //Argument
    std::cout<<"Please insert a number "<<std::endl;
    std::cin>>num;

    if (num % 5 == 0)
    {
    	std::cout<<"the number is the multiple of 5 "<<std::endl;
    }
    else
    {
    	std::cout<<"the number is NOT the multiple of 5 "<<std::endl;
    }
    
    return 0;
    
}
