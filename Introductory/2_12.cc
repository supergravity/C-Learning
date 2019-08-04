#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //print a triangular shape of "*"
    //Method 1 
    //The upper part of the shape
    for (int i = 1;i <= 4;i++)
    {
        int k = 1;
        for (int j = 1;j <= (2*i)-1;j++)
        {
            if (k==(2*i)-1)
            {
                std::cout<<"*"<<std::endl;
            }
            else
            {
                std::cout<<"*"; 
            }
            k++;
        }
    }
   //The lower part of the shape 
    for (int i = 3;i >= 1;i--)
    {
        int k = 1;
        for (int j = 1;j <= (2*i)-1;j++)
        {
            if (k==(2*i)-1)
            {
                std::cout<<"*"<<std::endl;
            }
            else
            {
                std::cout<<"*"; 
            }
            k++;
        }
    }
    return 0;
}
