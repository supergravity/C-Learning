//File:Struct example code 01 
//Purpose: struct with string 
//Date:11/10/17 
//Author:Tzu-Lu Lin

#include <iostream>
#include <string>

using namespace std;

struct Booklist // Initialization of the variable type 
{
    string  title;
    string  author;
    string  number;
    double price;
};

int main()
{
    Booklist CPP;
    CPP.title   = "C++ programming";
    CPP.author  = "Anonymous\t";
    CPP.number  = "012345";
    CPP.price   = 520.00;

    Booklist VB;
    VB.title    = "VB 2008";
    VB.author   = "Anonymous\t";
    VB.number   = "98765";
    VB.price    = 530.00;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"Book name\t\t\t Author \t\t\t Number \t\t\t Price "<<endl;
    cout<<CPP.title<<"\t\t\t";
    cout<<CPP.author<<"\t\t\t";
    cout<<CPP.number<<"\t\t\t";
    cout<<CPP.price<<endl;
    
    cout<<VB.title<<"\t\t\t";
    cout<<VB.author<<"\t\t\t";
    cout<<VB.number<<"\t\t\t";
    cout<<VB.price<<endl;
    return 0;
}
