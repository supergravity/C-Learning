#include <iostream>
#include <stdlib.h>

int main()
{

//Initialization

    int   com_num    = 0;
    double com_price = 39999;
    double total     = 0;
    


//Input 

    std::cout<<"Please insert the number computer"<<std::endl;
    std::cin>>com_num;


//Computation

    total = com_num * com_price;



//Conditional

    if ((com_num >= 10) && (com_num <= 19)) 
    {
        total = total * 0.9;
    }
    else if ((com_num >= 20) && (com_num <= 49)) 
    {
        total = total * 0.8;
    }
    else if ((com_num >= 50) && (com_num <= 99))
    {
        total = total * 0.7;
    }
    else if (com_num >= 100)
    {
        total = total * 0.6;
    }
    else
    {
        std::cout<<"That's not a valid number"<<std::endl;
    }

    std::cout<<"the total price: "<<total<<std::endl;
    
    return 0;

}
