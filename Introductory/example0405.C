#include <iostream>

int main()
{
    //Initialization
    
    int input = 0;
    
    std::cout<<"Please insert a number"<<std::endl;
    std::cin>>input;

    //Affirming the argument
    if (input % 2 == 0)
    {
    	std::cout<<"The number is even "<<std::endl;
    }
    else
    {
    	std::cout<<"The number is odd "<<std::endl;
    }

    return 0;
}
