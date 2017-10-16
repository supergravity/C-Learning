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
};

void printTime(Time t) //insert the variables of type struct
{
    cout<<t.hour<<":";
    cout<<t.minute<<":";
    cout<<t.second<<endl;
}

int main()
{
    Time Breakfast = {6,30,0};
    printTime(Breakfast);
    return 0;
}
