#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    char string[4];
    std::cout<<"Insert any string"<<std::endl;
    std::cin>>std::setw(4)>>string;
    std::cout<<"The string inserted: "<<string<<std::endl;
    return 0;
}
