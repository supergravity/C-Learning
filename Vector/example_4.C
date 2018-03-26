#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    //create a vector to store int ptr 
    vector<int*> vec_ptr;

    //display the original size of vec
    cout << "vector size = " << vec_ptr.size() << endl;

    //push 5 values into the vector
    for (int i = 0; i < 5; i++)
    {
        //vec_ptr.push_back(&i);
        vec_ptr.push_back( new int(3) );
    }
    
    //display the extended size of the vector
    cout << "vector size extended = " << vec_ptr.size() <<endl;

    //access 5 values from the vector 
    for (int i = 0;i < vec_ptr.size();i++ )
    {
        cout << "The address stored in vec_ptr[" << i << "] = "<< vec_ptr[i] << endl; 
    }
    
    /*
    //use iterator to access the values
    vector<int*>::iterator iter = vec_ptr.begin();
    vector<int*>::iterator iend = vec_ptr.end();

    while (iter!= iend)
    {
        cout << "value of vector(address) = "<< *iter << endl;
    }
    */
    return 0;
}
