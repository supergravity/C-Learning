#include <iostream>

int main()
{
    int a = 1;
    int b = 4;
    int c = 4;
    bool x = !(a<b && b==c || c <=a );
    std::cout<<" a = "<<a<<std::endl;
    std::cout<<" b = "<<b<<std::endl;
    std::cout<<" c = "<<c<<std::endl;
    std::cout<<" !(a<b && b==c || c<=a) = "<<x<<std::endl;

    return 0;
        	
}
