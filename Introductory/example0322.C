#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

int main()
{
	double deg = (M_PI)/180;
	int d;
	int theta;
	std::cout<<"please insert an integer "<<std::endl;
	std::cin>>d;
	//theta = d % 360;
	std::cout<<std::setprecision(3)<<std::setiosflags(std::ios::fixed)<<std::endl;
	std::cout<<"d = "<<d<<std::endl;
	std::cout<<"sin("<<d<<") = "<<sin(deg*d)<<std::endl;
	std::cout<<"cos("<<d<<") = "<<cos(deg*d)<<std::endl;
	std::cout<<"tan("<<d<<") = "<<tan(deg*d)<<std::endl;
 
	return 0;
}

