#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

int main()
{
    //initialization
    float a, b, c, d, x = 6;
    int f = 20;

    a = b = c = d = float(f);

    std::cout<<"a = b = c = d = f = 20, x = 6"<<std::endl;
    std::cout<<"a += x => a = "<<(a+=x)<<std::endl;
    std::cout<<"b -= x => b = "<<(b-=x)<<std::endl;
    std::cout<<"c *= x => c = "<<(c*=x)<<std::endl;
    std::cout<<"d /= x => d = "<<(d/=x)<<std::endl;
    std::cout<<"f %= x => f = "<<(f%=6)<<std::endl;
    
    return 0;

}
