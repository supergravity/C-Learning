#include <iostream>

int main()
{
    //Initialization 
    char letter;
    
    //Argument
    std::cout<<"a. Add data\tb. Insert data\tc. Delete data\td. Other options. Exit:"<<std::endl;
    std::cin>>letter;
    
    switch (letter)
    {
        case 'A':
	case 'a':
		std::cout<<"Add data"<<std::endl;
		break;
        case 'B':
	case 'b':
		std::cout<<"Insert data"<<std::endl;
		break;
        case 'C':
	case 'c':
		std::cout<<"Delete data"<<std::endl;
		break;
	default :
		std::cout<<"Exit the program"<<std::endl;
    }     	 
    return 0;
   
}
