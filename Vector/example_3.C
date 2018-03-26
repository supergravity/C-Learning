#include <iostream>

using namespace std;

int main()
{
    int *ptr = new int(100);
    cout << ptr << " the address of the ptr"<<endl;
    cout << *ptr<< " the store value of the ptr" <<endl;

    *ptr = 200;

    cout << ptr << " the address of the ptr"<<endl;
    cout << *ptr<< " the store value of the ptr" <<endl;

    delete ptr;
    int* aaa = new int[100];
    //cout << "the content of ptr after delete:" << *ptr <<endl;

    delete[] aaa;
    return 0;
}
