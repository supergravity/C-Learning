#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

const double PI = 3.141592653;

int main()
{
    float number = 35.7;
    //first flags layout
    std::cout<<std::setprecision(4)<<number<<std::endl;
    //second flags layout
    std::cout<<std::setiosflags(std::ios::fixed);//setting limits to decimal points
    std::cout<<std::setprecision(2)<<number<<std::endl;//also have the function of filling up zeros...
    //third flags layout 
    std::cout<<std::setiosflags(std::ios::fixed|std::ios::showpoint)<<std::setprecision(3)<<number<<std::endl;

    return 0;
}
