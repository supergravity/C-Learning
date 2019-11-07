#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //initialization

    unsigned int random = 0;
    
    srand(time(NULL));
    random = 1 + rand()%(99-1+1);
    std::cout<<"the produced random number between 1 to 99 is: "<<random<<std::endl;

    return 0;
}
