#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //initialization

    unsigned int random = 0;
    
    srand(time(NULL));
    random = rand()%(10-1+1);
    std::cout<<"the produced random number between 0 to 9 is: "<<random<<std::endl;

    return 0;
}
