#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>

int main()
{
    //Initialization
    unsigned int rand_1 = 0;
    unsigned int rand_2 = 0;
    unsigned int sum    = 0;
    char key;
    //
    srand(time(NULL));
    rand_1 = 100 + rand()%(999-100+1);
    rand_2 = 100 + rand()%(999-100+1);
    sum    = rand_1 + rand_2;

    std::cout<<std::setiosflags(std::ios::right)<<"   "<<rand_1<<std::endl;
    std::cout<<std::setiosflags(std::ios::right)<<"+  "<<rand_2<<std::endl;
    std::cout<<"--------"<<std::endl;

    std::cout<<"Please insert the enter "<<std::endl;
    std::cin.get(key);
    std::cout<<std::setiosflags(std::ios::right)<<"   "<<rand_1<<std::endl;
    std::cout<<std::setiosflags(std::ios::right)<<"+  "<<rand_2<<std::endl;
    std::cout<<"--------"<<std::endl;
    std::cout<<std::setiosflags(std::ios::right)<<"   "<<sum<<std::endl;

    return 0;

}
