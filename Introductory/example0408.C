#include <iostream>

int main()
{
    //Initialization
    char letter;
    
    std::cout<<"Please insert a letter: "<<std::endl;
    std::cin>>letter;

    //Conditional Argument
    if ((letter >= 'A') && (letter <= 'Z'))
    {
    	std::cout<<"The letter "<<letter<<" is a capital."<<std::endl;
    }
    else if ((letter >= 'a') && (letter <= 'z'))
    {
    	std::cout<<"The letter "<<letter<<" is a lower case."<<std::endl;
    }
    else if ((letter >= '0') && (letter <= '9'))
    {
    	std::cout<<"The letter "<<letter<<" is a number."<<std::endl;
    }
    else 
    {
    	std::cout<<"The number "<<letter<<" is a symbol key."<<std::endl;
    } 
    return 0;
}
