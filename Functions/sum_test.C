#include <iostream>
#include "sum_number.h"

int main()
{
    int n     = 0;
    int total = 0;
    
    printf("Insert a number\n");
    scanf("%d",&n);
    total = Sum(n);
    printf("The total sum from 1 to %d is: %d\n",n,total);
    return 0;
}
