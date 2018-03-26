#include <iostream>
#include <vector>

using namespace std;

void sorting_method_1 (vector<int>& vector)
{
    //vector<int>::iterator iter = vector.begin();
    //vector<int>::iterator iend = vector.end();
    for (int i = 0; i < vector.size();i++)
    {    
        int min = 0;
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




int main()
{
    //create a vector 
    vector<int> vec = {8,3,987,79,456};

    
    //start the sorting_method_1
    sorting_method_1(vec);

    //print out the sorting results
    vector<int>::iterator iter = vec.begin();
    vector<int>::iterator iend = vec.end();
    while (iter != iend)
    {
        cout << "The sorting results of the vector is "<< *iter << endl;
        iter++;
    }
    return 0;
}
