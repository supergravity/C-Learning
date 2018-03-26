#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec[10];

    for (int j = 0; j < 10 ; j++)
    {
        for (int i = 0; i <= 100 ; i++)
            {
                if(i%10 == j)
                vec[j].push_back(i);
            }
    }
    for (int l = 0;l < 10 ; l++)
    {
        vector<int>::iterator iter = vec[l].begin();
        vector<int>::iterator iend = vec[l].end();
        cout << "element of vector["<<l<<"] :"<<endl;
        while(iter != iend)
        {
            cout << *iter<<"  "; 
            iter++;
        }
        cout<<endl;
    }
    return 0;
}
