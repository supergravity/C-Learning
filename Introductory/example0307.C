#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	const double PI = 3.141592653;
	std::cout.precision(2);
	std::cout.setf(std::ios::left);
	std::cout.setf(std::ios::fixed);
	std::cout.width(10);
	std::cout<<PI*(-1)<<std::endl;
	std::cout.width(10);
	std::cout<<PI*100<<std::endl;
	std::cout.width(10);
	std::cout<<PI*10000<<std::endl;
	return 0;
}
