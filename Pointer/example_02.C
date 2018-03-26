#include <iostream>

using namespace std;

int main ()
{
    int number = 10;
    int *numPtr;

    cout << "number = "<<number<<endl;
    cout << "numPtr(undeclared) = "<<numPtr<<endl;  
    
    numPtr = &number;
    cout << "*numPtr = "<< *numPtr <<endl;
    cout << "numPtr = "<< numPtr << "\t" << "&number = "<< &number << endl;

    return 0;
}

