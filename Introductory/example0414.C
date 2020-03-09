#include <iostream>

int main()
{
    //Initialization
    int num = 0;

    //Argument
    std::cout<<"Please insert an integer: "<<std::endl;
    std::cin>>num;
    std::cout<<num<<std::endl;
    //std::cout<<((num > 0)? "Positive\n" : "Negative\n");
    std::cout<<((num > 0)? "Positive" : "Negative")<<std::endl;

    return 0;
}
