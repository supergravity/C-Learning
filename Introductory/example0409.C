#include <iostream>

int main()
{
    //Initialization
    short number;
    std::cout <<"Please insert a grade between (0 ~ 100)"<<std::endl;
    std::cin >> number;
    if ((number >= 90) && (number <= 100))
    {
        std::cout<<"Grade A"<<std::endl;
    }
    else if ((number >= 80) && (number < 90))
    {
    	std::cout<<"Grade B"<<std::endl;
    }
    else if ((number >= 70) && (number < 80))
    {
    	std::cout<<"Grade C"<<std::endl;
    }
    else if ((number >= 60) && (number < 70))
    {
    	std::cout<<"Grade D"<<std::endl;
    }
    else if ((number <= 60))
    {
    	std::cout<<"Failed"<<std::endl;
    }
    return 0;

}
