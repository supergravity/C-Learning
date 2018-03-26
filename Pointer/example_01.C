#include <iostream>

using namespace std;

int main(int )
{
    bool boolvar = 12345;
    int intvar = 345;
    double doublevar = 98765.43e-308;
    float floatvar = 123.45e+12f;

    cout<<"variable" <<"\t"<< "address"<<"\n";
    cout<<"----------\t----------"<<"\n";
    cout<<"boolvar" <<"\t"<<&boolvar<<"\n";
    cout<<"intvar" <<"\t"<<&intvar<<"\n";
    cout<<"doublevar"<<"\t"<<&doublevar<<"\n";
    cout<<"floatvar"<<"\t"<<&floatvar<<"\n";

    return 0;

}
