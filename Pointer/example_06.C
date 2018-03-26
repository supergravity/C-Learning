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

    cout << "name      \t"<<setw(10)<<"varPtr   \t"<<setw(10)<<"Pointer size    \t"<<endl;
    cout << "----------\t----------\t----------\t"<<endl;
    cout << "boolvar   \t"<<setw(10)<<boolPtr<<"\t"<<setw(10)<<sizeof(boolPtr)<< "\t"<<endl;
    cout << "intvar    \t"<<setw(10)<<intPtr <<"\t"<<setw(10)<<sizeof(intPtr) <<"\t"<<endl;
    cout << "floatvar  \t"<<setw(10)<<floatPtr<<"\t"<<setw(10)<<sizeof(floatPtr)<<"\t"<<endl;
    cout << "doublevar \t"<<setw(10)<<doublePtr<<"\t"<<setw(10)<<sizeof(doublePtr)<<"\t"<<endl;
    
    return 0;
}
