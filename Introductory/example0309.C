#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    char string[4];
    std::cout<<"Insert any string"<<std::endl;
    std::cin.width(4);
    std::cin>>string;
    std::cout<<"The string inserted: "<<string<<std::endl;
    return 0;
}
