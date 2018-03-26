#include <iostream>

using namespace std;

int main ()
{
    bool boolvar = true;
    int intvar   = 65536;
    float floatvar = 123.45f;
    double doublevar = 98765.43;

    bool *boolPtr = &boolvar;
    int  *intPtr  = &intvar;
    float*floatPtr= &floatvar;
    double *doublePtr= &doublevar;

    cout <<"variable"<<"\t"<<"variable address"<<"\t"<< "pointer address"<<endl;
    cout <<"----------"<<"\t"<<"----------"<<"\t"<<"----------"<<endl;
    cout <<"boolvar"<<"\t"<<&boolvar<<"\t"<< boolPtr<<endl;
    cout <<"intvar" <<"\t"<<&intvar<<"\t"<< intPtr<<endl;
    cout <<"floatvar"<<"\t"<<&floatvar<<"\t"<< floatPtr<<endl;
    cout <<"doublevar"<<"\t"<<&doublevar<<"\t"<< doublePtr<<endl;

    return 0;

}
