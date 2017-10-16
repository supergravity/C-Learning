//File:Struct example code 04 
//Purpose: struct with string 
//Date:12/10/17 
//Author:Tzu-Lu Lin

#include <iostream>

using namespace std;
struct Employee 
{
    int id;
    string name;
};


int main ()
{
    Employee emp1;
    emp1.id = 101;
    emp1.name = "John";
    cout <<"Employee 1 Id:"<<emp1.id<<endl;
    cout <<"Employee Name:"<<emp1.name<<endl;
    return 0;
}
