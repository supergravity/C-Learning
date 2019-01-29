#include <iostream>
#include <stdio.h>

int main ()
{
    std::string s;
    while (std::cin >> s)
    {
        std::cout<<"hello, "<<s<<std::endl;
    }
    return 0;
}
