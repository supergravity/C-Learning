#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool    boolvar     = true;
    int     intvar      = 65536;
    float   floatvar    = 123.45f;
    double  doublevar   = 98765.43;

    bool    *boolPtr    = &boolvar;
    int     *intPtr     = &intvar;
    float   *floatPtr   = &floatvar;
    double  *doublePtr  = &doublevar;

    cout << "name \t"<<setw(10)<<"variable_"<<"\t"<<setw(10)<<"variable_stored"<<"\t"<<setw(10)<<"pointer_stored"<<endl;
    cout << "----------\t----------\t----------\t ----------\n";
    cout << "boolvar   \t"<<setw(10)<<boolvar<<"\t"<<setw(10)<<*(&boolvar)<<"\t"<<setw(10)<<*boolPtr<<endl;
    cout << "intvar   \t"<<setw(10)<<intvar<<"\t"<<setw(10)<<*(&intvar)<<"\t"<<setw(10)<<*intPtr<<endl;
    cout << "floatvar   \t"<<setw(10)<<floatvar<<"\t"<<setw(10)<<*(&floatvar)<<"\t"<<setw(10)<<*floatPtr<<endl;
    cout << "doublevar   \t"<<setw(10)<<doublevar<<"\t"<<setw(10)<<*(&doublevar)<<"\t"<<setw(10)<<*doublePtr<<endl;
    
    return 0;

}
