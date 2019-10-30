#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));
    std::cout<< 1 + rand() % (20-1+1)<<std::endl;//creating random numbers within range of 1 ~ 20 
    std::cout<< 3 + rand() % (40-3+1)<<std::endl;//creating random numbers within range of 3 ~ 40 
    std::cout<< 7 + rand() % (100-7+1)<<std::endl;//creating random numbers within range of 7 ~ 100

    return 0;

}
