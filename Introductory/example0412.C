#include <iostream>

int main()
{
    //Initialization 
    char letter;
    int num1 = 75;
    int num2 = 15;

    //Argument
    std::cout<<"num1 = "<<num1<<" num2 = "<<num2<<std::endl;
    std::cout<<"Please select the operator +,-,*,/ :"<<std::endl;
    std::cin>>letter;

    switch (letter)
    {
    	case '+':
	   std::cout<<"num1 + num2 = "<< num1 - num2 <<std::endl;
	   break;
	case '-':
	   std::cout<<"num1 - num2 = "<< num1 - num2 <<std::endl;
	   break;
	case '*':
	   std::cout<<"num1 * num2 = "<< num1 * num2 <<std::endl;
	   break;
	case '/':
	   std::cout<<"num1 / num2 = "<< num1 / num2 <<std::endl;
	   break;
    }
    return 0;
}
