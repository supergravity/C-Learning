#include <iostream>

int main()
{
    //Initialization 
    int num[2] = {0};
    double q   = 0;
    double r   = 0;

    //Input
    std::cout<<"Please insert two integers: "<<std::endl;
    std::cin>>num[0];
    std::cin>>num[1];


    //Argument
    int tmp = 0;
    if (num[1] > num[0])
    {
    	tmp = num[1];
	num[1] = num[0];
        num[0] = tmp;	
    }

    //Further Check
    if (num[1] == 0)
    {
    	std::cout<<"ERROR!!! The divisor is 0 !!!"<<std::endl;
    }
    else
    {
    	r = num[0]%num[1];
    	q = (num[0]-r)/num[1];

    	std::cout<<"The quotient of "<<num[0]<<" dividing "<<num[1]<<" is: "<<q<<std::endl;
    	std::cout<<"The remainder of "<<num[0]<<" dividing "<<num[1]<<" is: "<<r<<std::endl;
    }
    
    return 0;
}
