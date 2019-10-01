#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    char sentence[81];
    std::cout<<"Insert any string"<<std::endl;
    std::cin.getline(sentence,81);
    std::cout<<"The string inserted: "<<sentence<<std::endl;
    return 0;
}
