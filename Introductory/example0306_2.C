#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

const double PI = 3.141592653;

int main()
{
        //std::cout<<std::setiosflags(std::ios::right)<<PI<<std::endl;
        //std::cout<<std::setiosflags(std::ios::left)<<PI<<std::endl;
        std::cout<<std::setiosflags(std::ios::left);
	//std::cout<<std::setprecision(2)<<std::setiosflags(std::ios::fixed|std::ios::showpoint)<<PI<<std::endl;
	std::cout<<std::setprecision(2)<<std::setiosflags(std::ios::fixed);
 	//std::cout<<std::setw(10)<<std::setiosflags(std::ios::left)<<PI*(-1)<<std::endl;
	std::cout<<std::setw(10)<<PI*100 <<std::endl;
	std::cout<<std::setw(10)<<PI*10000<<std::endl;
	//std::cout<<std::setiosflags(std::ios::scientific)<<PI<<std::endl;
	//std::cout<<std::setiosflags(std::ios::uppercase)<<std::endl;
	//std::cout<<std::setiosflags(std::ios::dec)<<PI<<std::endl;
	//std::cout<<std::setiosflags(std::ios::hex)<<PI<<std::endl;
	//std::cout<<std::setiosflags(std::ios::oct)<<PI<<std::endl;
	
	//std::cout<<std::setiosflags(std::ios::dec)<<PI<<std::endl;
	//std::cout<<std::setprecision(10)<<std::setiosflags(std::ios::fixed|std::ios::showpoint)<<PI<<std::endl;
	return 0;	
}

