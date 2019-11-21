#include <iostream>

int main()
{
    //Initialization
    char letter;
    std::cout<<"Please insert a letter"<<std::endl;
    std::cin>>letter;

    //Affirming the argument
    if(letter == 'Y'|| letter == 'y')
    {
    	std::cout<<"the letter is Y or y"<<std::endl;
    }
    else
    {
    	std::cout<<"the letter is NOT Y or y"<<std::endl;
    }
    return 0;
}
