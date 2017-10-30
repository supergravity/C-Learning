//File:Struct example code 08 
//Purpose: struct with Function parameter called by reference  
//Date:16/10/17 
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

void printTime (const Time &t)
{
    cout<<t.hour    <<":";
    cout<<t.minute  <<":";
    cout<<t.second  <<endl;
}

int main()
{
    Time breakfast = {6,30,0};
    printTime (breakfast);
    return 0;
}
