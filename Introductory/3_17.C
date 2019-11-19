#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

int main()
{
    //Initialization
    double annual_rate = 0;
    double term            = 0;
    double principal       = 0;
    double monthly_rate    = 0;
    double monthly_interest = 0;
    double Total_sum       = 0;

    
    std::cout<<"Please insert the annual rate:"<<std::endl;
    std::cin>>annual_rate;
    std::cout<<"Please insert the term:"<<std::endl;
    std::cin>>term;
    std::cout<<"Please insert the principal:"<<std::endl;
    std::cin>>principal;
   
    std::cout<<annual_rate<<std::endl;
    std::cout<<term<<std::endl;
    std::cout<<principal<<std::endl;

    monthly_rate = (annual_rate/term)*0.01;
    Total_sum = principal*pow((1+monthly_rate),term);
    //Total_sum = principal;
    monthly_interest = Total_sum - principal;
    std::cout<<"The monthly interest is: "<<monthly_interest<<std::endl;
    std::cout<<"The total sum is: "<<Total_sum<<std::endl;

    return 0;
}
