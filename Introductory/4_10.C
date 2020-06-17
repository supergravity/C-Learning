#include <iostream>
#include <stdlib.h>

int main()
{

//Initialization

    double m_score = 0;
    double c_score = 0;
    double e_score = 0;
    double total = 0;
    double avg = 0;


//Input 

    std::cout<<"Please insert the math score:"<<std::endl;
    std::cin>>m_score;
    std::cout<<"Please insert the Chinese score:"<<std::endl;
    std::cin>>c_score;
    std::cout<<"Please insert the English score:"<<std::endl;
    std::cin>>e_score;


//Computation

    total = (m_score + e_score + c_score);
    avg = total/3 ;

    std::cout<<"the total score: "<<total<<std::endl;
    std::cout<<"the average score: "<<avg<<std::endl;


//Conditional

    if ((avg >= 90) && (avg <= 100))
    {
        std::cout<<"Grade: A"<<std::endl;
    }
    else if ((avg >= 80) && (avg < 90))
    {
        std::cout<<"Grade: B"<<std::endl;
    }
    else if ((avg >= 70) && (avg < 80))
    {
        std::cout<<"Grade: C"<<std::endl;
    }
    else if ((avg >= 60) && (avg < 70))
    {
        std::cout<<"Grade: D"<<std::endl;
    }
    else if ((avg >= 0) && (avg < 60))
    {
        std::cout<<"Grade: F"<<std::endl;
    }
    else
    {
        std::cout<<"That's not possible XDD "<<std::endl;
    }

    return 0;

}
