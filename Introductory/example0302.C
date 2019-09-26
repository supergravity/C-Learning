#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

int main()
{
	int n[6] = {14,21474836,44,-889162,9,524};
	std::cout<<std::setw(12)<<n[0]
		 <<std::setw(12)<<n[1]
		 <<std::setw(12)<<n[2]<<std::endl;
	std::cout<<std::setw(12)<<n[3]
	         <<std::setw(12)<<n[4]
	 	 <<std::setw(12)<<n[5]<<std::endl;
	return 0;	
}
