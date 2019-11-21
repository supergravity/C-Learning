#include <iostream>

int main()
{
    //Initialization 
    int a = 1;
    int b = 4;
    int c = 4;

    std::cout<<"a = "<<a<<std::endl;
    std::cout<<"b = "<<b<<std::endl;
    std::cout<<"c = "<<c<<std::endl;

    //Logic 
    bool x = a<b;
    bool y = c>=b;

    std::cout<<" a<b is "<<x<<std::endl;
    std::cout<<" c>=a is "<<y<<std::endl;
    std::cout<<" a!=b is "<<(a!=b)<<std::endl;
    std::cout<<" a==c is "<<(a==c)<<std::endl;

    return 0;

}
