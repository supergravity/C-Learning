#include <iostream>

using namespace std;

int main ()
{
    int number = 10 ;
    int *numPtr = &number;
    
    cout<<"number = "<<number<<endl;
    cout<<"&number = "<<&number<<endl;
    cout<<"numPtr = "<<numPtr<<endl;
    cout<<"*numPtr = "<<*numPtr<<endl;

    return 0;
}
