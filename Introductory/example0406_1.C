#include <iostream>

int main()
{
    //Initialization

    short num_1 = 0;
    short num_2 = 0;
    short sum = 0;

    std::cout<<"Please insert a short integer 1"<<std::endl;
    std::cin>>num_1;
    std::cout<<"Please insert a short integer 2"<<std::endl;
    std::cin>>num_2;

    //Conditional Argument
    if ((num_1 + num_2) > 32767)
    {
    	std::cout<< num_1 << " + " << num_2 << " = upward limit overflow"<<std::endl;
    }
    else if ((num_1 + num_2) < -32768)
    {
    	std::cout<< num_1 << " + " << num_2 << " = downward limit overflow"<<std::endl;
    }
    else
    {
    	sum = num_1 + num_2;
        std::cout<< num_1 << " + " << num_2 << " = " << sum <<std::endl; 
    }
    return 0;
}
