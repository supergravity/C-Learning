//File:Struct example code 06 
//Purpose: struct with Function parameter filled 
//Date:12/10/17 
//Author:Tzu-Lu Lin
//

#include <iostream>

using namespace std;

struct Time
{
    int hour;
    int minute;
    int second;
    void printTime() //insert the variables of type struct
    {
        cout<<hour<<":";
        cout<<minute<<":";
        cout<<second<<endl;
    }
};


int main()
{
    Time Breakfast = {6,30,0};
    Breakfast.printTime();
    return 0;
}
