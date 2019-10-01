#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    int num;
    char key;
    std::cout<<"Insert any string"<<std::endl;
    std::cin>>num;
    std::cin.ignore();
    std::cout<<"Please insert Enter to end"<<std::endl;
    std::cin.get(key);
    std::cout<<"Thanks!"<<key<<std::endl;
    return 0;
}
