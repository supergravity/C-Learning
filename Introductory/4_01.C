#include <iostream>

int main()
{
    //Initialization
    unsigned int chinese = 0;
    unsigned int math    = 0;
    unsigned int english = 0;

    unsigned int sum     = 0;
    unsigned int avg     = 0;

    //Argument 
    std::cout<<"Please insert the grade of chinese "<<std::endl;
    std::cin>>chinese;
    std::cout<<"Please insert the grade of math "<<std::endl;
    std::cin>>math;
    std::cout<<"Please insert the grade of english "<<std::endl;
    std::cin>>english;

    sum = chinese + math + english;
    avg = sum/3;

    std::cout<<"The sum of the three subjects: "<<sum<<std::endl;
    std::cout<<"The average of the three subjects: "<<avg<<std::endl;

    if (avg >= 90)
    {
    	std::cout<<"Congratulations!"<<std::endl;
    }
    return 0;
}
