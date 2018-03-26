#include <iostream>
#include <vector>

using namespace std;

template <class Y>
void sorting_method_1 (vector<Y>& vector)
{
    //vector<int>::iterator iter = vector.begin();
    //vector<int>::iterator iend = vector.end();
    for (int i = 0; i < vector.size();i++)
    {    
        Y min = 0;
    for (int j = i; j < vector.size();j++)
        {
            if (vector[i] > vector[j])
            {
                min = vector[j];
                vector[j] = vector[i];
                vector[i] = min;
            }
        }
    }
}



//class A
//{
//public:
//    int a;
//    double b;
//    char c;
//
//    bool operator>(const A& in)
//    { return true; }
//    //{ return (in.a > this->a); }
//
//
//    A(int ina, double inb, char inc):a(ina), b(inb), c(inc){}
//    A() : a(-1), b(-1.00), c('0'){}
//    A() : a(), b(), c(){}
//};

A a1, a2;
if ( a1 > a2 ) printf("hi");
A a3; // a = -1, b = -1.00, c = '0';
A a4(333, 3.14, 'c');

int main()
{
    //create a vector 
    vector<int> vec = {8,3,987,79,456};
    vector<char> vec_ = {'a','p','p','l','e'};
    
    //start the sorting_method_1
    sorting_method_1(vec);
    sorting_method_1(vec_);

    //print out the sorting results
    vector<int>::iterator iter = vec.begin();
    vector<int>::iterator iend = vec.end();
    while (iter != iend)
    {
        cout << "The sorting results of the vector is "<< *iter << endl;
        iter++;
    }
    cout <<"\n"<<endl;
    vector<char>::iterator iter_ = vec_.begin();
    vector<char>::iterator iend_ = vec_.end();
    while (iter_ != iend_)
    {
        cout << "The sorting results of the vector is "<< *iter_ << endl;
        iter_++;
    }
    return 0;
}


