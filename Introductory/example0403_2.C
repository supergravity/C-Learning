#include <iostream>

int main()
{
    //Initialization
    int number = 0;
    std::cout<<"Please insert a number"<<std::endl;
    std::cin>>number;

    //Affirming the argument
    if(number % 3 == 0)
    {
    	std::cout<<"the number is the multiple of 3 "<<std::endl;
    }
    
    return 0;

}
