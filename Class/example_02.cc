//File:Struct example code 01 
//Purpose: Initializtion of struct 
//Date:11/10/17 
//Author:Tzu-Lu Lin

#include <iostream>

using namespace std;

struct Time 
{
    int day;
    int hour;
    int minute;
    int second;
};

int main()
{
    Time Unit;
    Unit.day    = 1;
    Unit.hour   = 24;
    Unit.minute = 60;
    Unit.second = 60;

    Time Midnight;
    Midnight.day    = 0;
    Midnight.hour   = 12;
    Midnight.minute = 0;
    Midnight.second = 0;

    cout<<"The standard time of Midnight: ";
    cout<<Midnight.hour<<":";
    cout<<"0"<<Midnight.minute <<":";
    cout<<"0"<<Midnight.second <<" AM"<<endl;
    return 0; 
}
