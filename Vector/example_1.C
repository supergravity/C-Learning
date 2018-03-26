#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //create a vector to store int
    vector<int> vec;

    //display the original size of vec
    cout << "vector size = " << vec.size() << endl;

    //push 5 values into the vector
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }

    //display the extended size of vector 
    cout << "vector size = " << vec.size() << endl;

    //access 5 values from the vector
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "The value of vec[" << i << "] = "<< vec[i] << endl; 
    }
    
    // use iterator to access the values 
    vector<int>::iterator iter = vec.begin();
    vector<int>::iterator iend = vec.end();
    while (iter != iend)
    {
        cout << "value of vector = "<< *iter << endl;
        iter++;
    }

    return 0;
}

