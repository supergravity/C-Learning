#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //initialization

    double bdw = 0;
    double cal = 0;

    std::cout<<"Please insert a weight in unit of kg "<<std::endl;
    std::cin>>bdw;

    cal = bdw*(1/0.454)*19;

    std::cout<<"The calorie for a person who weighs "<<bdw<<" kg is: "<<cal<<std::endl;
    return 0;

}
