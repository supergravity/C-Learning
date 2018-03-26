#include <vector>
#include <iostream>
using namespace std;

void Average_calculation(vector<std::pair<double,double> > vec_,vector<double>* avg);

int main()
{
    vector<std::pair<double,double> >  a_vec; 
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

    }
    Average_calculation(a_vec,avg);
    return 0;
}

void Average_calculation(vector<std::pair<double,double> > vec_,vector<double>* avg)
{
    //vector<std::pair<double,double> >  vec_; 
    //vector<double> avg[7];
    for (int j = 0;j < 7;j++)
    {
        vector<std::pair<double,double> >::iterator iter = vec_.begin();
        vector<std::pair<double,double> >::iterator iend = vec_.end();
        double sum = 0;
        double average = 0;
        for (iter;iter != vec_.end();iter++)
        {
            //cout <<"the address: "<< iter<< endl;
            //sum = (*iter).second + sum;
            sum = (iter -> second) + sum;
            cout << "sum = "<<sum<<endl; 
        }
        average = sum/vec_.size();
        cout << "average = "<<average <<endl;
        //avg[8][j].push_back(average);
        avg[j].push_back(average);
    }

}
