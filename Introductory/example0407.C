#include <iostream>

int main()
{
    //Initialization
    int num = 0;
    
    std::cout<<"Please insert an integer: "<<std::endl;
    std::cin>>num;

    //Conditional Argument
    if (num > 0)
    {
    	std::cout<<"The number "<<num<<" is larger than 0"<<std::endl;
    }
    else if (num < 0)
    {
    	std::cout<<"The number "<<num<<" is smaller than 0"<<std::endl;
    }
    else 
    {
    	std::cout<<"The number "<<num<<" equals 0"<<std::endl;
    } 
    return 0;
}
