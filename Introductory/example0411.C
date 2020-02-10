#include <iostream>

int main ()
{
	//Initialization
	unsigned int year = 0;

        std::cout<<"Please insert the year "<<std::endl;
	std::cin>>year;

	//Argument
	if ((year%400 == 0) || ((year%4 == 0) && (year%100 != 0)))
	{
	    std::cout<<"Leap year"<<std::endl;
	}
	else 
	{
	    std::cout<<"NOT a leap year"<<std::endl;
	}
	return 0;
}
