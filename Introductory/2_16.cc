#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

int main()
{
    //char[] bookName = "C++ Learning";
    int var = 0;
    std::string bookName = "C++ Learning";
    std::cout<<"The size of the variable for C++ Learning is: "<<sizeof(bookName)<<" bytes"<<std::endl; 
    std::cout<<"The size of the variable for var is: "<<sizeof(var)<<" bytes"<<std::endl;
    return 0;
}


