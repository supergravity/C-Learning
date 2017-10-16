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

void printTime(int h,int m, int s)
{
    cout << ((h==0||h==12)? 12:(h%12));
    cout << ":" << ((m < 10)? "0":"")<<m;
    cout << ":" << ((s < 10)? "0":"")<<s;
    cout << ((h < 12) ? " AM":" PM")<<endl;
}

int main()
{
    Time Breakfast = {6,30,0};
    printTime(Breakfast.hour,Breakfast.minute,Breakfast.second);
    return 0;
}
