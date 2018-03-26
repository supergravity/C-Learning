#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<std::pair<double,double> >  a_vec[8][7]; 
    vector<std::pair<double,double> >  a_vec; 
    //vector<double> avg[8][7];
    //vector<double> avg[8][7];
    vector<double> avg[7];

    for (int j = 0;j < 7;j++)
    {
        for (int k = 0; k < 100; k++)
        {
            if (k%7 == j)
            {
                a_vec.push_back(std::pair<double,double>(j,k));
               // cout << (& std::pair<double,double>(j,k)) <<endl;
            }    
        }
        double sum = 0;
        double average = 0;
        //for (iter;iter != a_vec.end();iter++)
        for (vector<std::pair<double,double> >::iterator iter = a_vec.begin(); iter != a_vec.end(); ++iter)
        {
            //cout <<"the address: "<< iter<< endl;
            //sum = (*iter).second + sum;
            sum = (iter -> second) + sum;
            cout << "sum = "<<sum<<endl; 
        }
        average = sum/a_vec.size();
        cout << "average = "<<average <<endl;
        //avg[8][j].push_back(average);
        avg[j].push_back(average);
    }
    return 0;

}
