#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //initialization

    double bdw = 0;
    double cal = 0;

    std::cout<<"Please insert a weight in unit of pound "<<std::endl;
    std::cin>>bdw;

    cal = bdw*19;

    std::cout<<"The calorie for a person who weighs "<<bdw<<" pounds is: "<<cal<<std::endl;
    return 0;

}
