#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //create a vector to store int ptr 
    vector<int*> vec_ptr;

    //display the original size of vec
    cout << "vector size = " << vec_ptr.size() << endl;

    //push 5 values into the vector
    for (int i = 0; i < 5; i++)
    {
        int *ptr = new int (i);
        vec_ptr.push_back(ptr);
    }
    
    //display the extended size of the vector
    cout << "vector size extended = " << vec_ptr.size() <<endl;

    //access 5 values from the vector 
    for (int j = 0;j < vec_ptr.size();j++ )
    {
        cout << "The content stored in vec_ptr[" << j << "] = "<< vec_ptr[j] << endl; 
        delete vec_ptr[j];
    }
    
    for (int l = 0;l < vec_ptr.size();l++)
    {
        cout << "The content stored in vec_ptr[" << l << "] after delete = "<< *vec_ptr[l] << endl; 
       
    
    }

    return 0;
}


