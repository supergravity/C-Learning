#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <cstdlib>

int main()
{
    //creating the seeds for the random numbers
    unsigned seed;
    //signed seed;
    //double seed;
    std::cout<<"Please insert any number"<<std::endl;
    std::cin>>seed;
    srand(seed);
    std::cout<<rand()<<std::endl;
    std::cout<<rand()<<std::endl;
    std::cout<<rand()<<std::endl;

    return 0;

}

