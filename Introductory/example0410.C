#include <iostream>

int main()
{
    //Initialization
    short num1 = 0;
    short num2 = 0;
    short sum  = 0;

    std::cout<<"Please insert a short integer 1:"<<std::endl;
    std::cin>>num1;
    std::cout<<"Please insert a short integer 2:"<<std::endl;
    std::cin>>num2;
    //sum = num1 + num2;
    if((num1+num2) > 32767)
    {
    	std::cout<<num1<<" + "<<num2<<" = upper limit overflow"<<std::endl;
    }
    else if((num1+num2) < -32768)
    {
    	std::cout<<num1<<" + "<<num2<<" = downward limit overflow"<<std::endl;
    }
    else
    {
	sum = num1 + num2;
     	std::cout<<num1<<" + "<<num2<<" = "<<sum<<std::endl;
    }
    return 0;
}
