#include <iostream>

int main()
{
    //Initialization

    int input = 0;

    std::cout<<"Please insert an integer"<<std::endl;
    std::cin>>input;

    //Affirming the argument

    if(input > 0)
    {
    	std::cout<<input<<" is positive. "<<std::endl;
    }
    
    return 0;

}
