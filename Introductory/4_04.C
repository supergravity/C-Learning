#include <iostream>

int main()
{
    //Initialization 

    double s[3] = {0};

    //Argument 

    std::cout<<"Please insert three numbers "<<std::endl;
    std::cin>>s[0];
    std::cin>>s[1];
    std::cin>>s[2];

    if ((s[0] > 0)&&(s[1] > 0)&&(s[2] > 0))
    {
	for (int i = 1;i < 3;i ++)
	{
	    double tmp = 0;
	    if (s[i-1] > s[i])
	    {
	    	tmp = s[i];
		s[i] = s[i-1];
		s[i-1] = tmp; 
	    }    
	}
	if ((s[0] + s[1]) > s[2])
	{
	    std::cout<<"The three segments can form a triangle !"<<std::endl;
	}
	else
	{
	    std::cout<<"The triangle can NOT be formed!"<<std::endl;
	}
	//Alternaitive 
	//
    }
    else	   
    {
        std::cout<<"The triangle can NOT be formed!"<<std::endl;
    }
    return 0;
}
