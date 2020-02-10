#include <iostream>

int main()
{
	//Initialization
	unsigned int year = 0; 
	std::cout<<"Please insert the year "<<std::endl;
	std::cin>>year;

	//Argument
	if (year%400 == 0)
	{
	    std::cout<<"leap year"<<std::endl;
	}
	else if (year%100 == 0)
	{
	    std::cout<<"NOT a leap year"<<std::endl;
	}
	else if (year%4 == 0)
	{
	    std::cout<<"leap year"<<std::endl;
	}
	else
	{
   	    std::cout<<"NOT a leap year"<<std::endl;
	}
	return 0;

}
