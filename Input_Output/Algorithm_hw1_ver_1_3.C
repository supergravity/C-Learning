#include <iostream>
#include <fstream>
#include <algorithm>
#include "math.h"

#define BLOCK_SQR_SIZE 10000


using namespace std;

int block_array [BLOCK_SQR_SIZE];
int block_size ;


// ========== Setting the Arrays for the Decompostion Method ==========

//int block_maximum = ()




void Initialization (int *origin_array,int *block_array ,int input_arr_size)
{
    // initiating block pointer index
    int blocksize = 0;
    int block_idx = -1;
    int block_max = 0;

    blocksize = sqrt(input_arr_size);
    block_max = origin_array[0];    
    // building the decomposed array
    for (int i = 0; i < input_arr_size; i++)
     {        
        block_max = max(block_max,origin_array[i]);
        if ((((i+1)%blocksize == 0)|(i == input_arr_size -1 ))&&(i!=0))
         {
            //entering next block 
            //increasing the index
            block_idx++;
            block_array[block_idx] = block_max;
            if (i != input_arr_size)
            {
                block_max = origin_array [i+1];
            }
            //cout << "block_array element number" << block_idx << ": "<< block_array[block_idx] << endl; 
        
        }
    }

}

int Root_Decomposition (int lower_bound, int upper_bound,int *origin_array ,int n, int blocksize, int *block_array)
{
    int max_value = origin_array[0];
    if((lower_bound == 1) && (upper_bound == n) )
    {
        //cout<<"blocksize "<<blocksize << endl;
        for(int i = 0;i < blocksize;i++) 
        {  
            
            max_value = max(max_value,block_array[i]); 
        }
    }
    else
    {
        //cout << "The lower bound: "<< lower_bound << endl;
        //cout << "The upper bound: "<< upper_bound << endl;
        while (((lower_bound < upper_bound) && (lower_bound%blocksize!=0))&& (lower_bound!= 0))
        {
            max_value = max(max_value,origin_array[lower_bound-1]);
            //cout << "max_value "<<max_value<<endl;
            lower_bound ++;
        }
        //cout << "phase 1:"<< max_value <<endl; 
        while (lower_bound + blocksize <= upper_bound)
        {
            max_value = max(max_value,block_array[(lower_bound-1)/blocksize]); 
            lower_bound += blocksize;
        }
        //cout << "phase 2:"<< max_value <<endl; 
        
        while (lower_bound <= upper_bound)
        { 
            max_value = max(max_value,origin_array[lower_bound-1]);
            lower_bound ++;
        }
         //cout << "phase 3:"<< max_value <<endl; 
    }

    return max_value;    
}






int main ()
 {
   //ifstream input_file;
   

   //input_file.open("example_numbers_6.txt",ios::in);
   
   //Thoughts: 1.when read "\n" stops
   /*
   int x ; 
   int y ;
   input_file >> x >> y;
   */
   int n = 0;
   int m = 0;
   cin >> n >> m;
   //input_file >> n >> m;
   /*
   int a[2];
   for (int i = 0; i < 2;i++)
   {
        //input_file >> a[i];
        cin >> a[i];
   } 
   */
   //int var[x] ;
   int var[n];

   for (int i  = 0; i < n; i++)
   {
        //input_file >> var[i];  
        cin >> var[i];  
   }
   
   int bound_ [2*m];
   for (int i = 0; i < 2*m; i++)
   {
        //input_file >> bound_ [i];
        cin >> bound_ [i];
   }
  
// ========== Query Start ==========


   int max_value[m];
   for (int query = 0; query <= 2*m-2; query = query+2)
   {
// ========== Naive Method ==========
   /*
      Basically the method is to compare the numbers within the 
      range 
   */
   /*
        max_value [query/2]  = var[bound_[query]-1];
        for (int i = bound_[query]; i <= bound_[query+1];i++)
        {
            max_value[query/2] = std::max(max_value[query/2],var[i-1]);
        }  
        
        cout << max_value[query/2] <<endl; 
   */

// ========== Square Root Decomposition Method ==========
      block_size = sqrt(n);
      Initialization(var,block_array,n);
      max_value[query/2] = Root_Decomposition (bound_[query],bound_[query+1],var,n,block_size,block_array);
       //cout << max_value[query/2] << endl;

   }











   /*
   ofstream out_result;
   out_result.open("hw1_results_practice6.txt");
   out_result << "The input numbers: " <<endl; 
   for (int i = 0; i < n; i++)
   { 
        out_result << var[i]<<" "; 
   }
   out_result << endl;
   out_result << "The lower boundaries and upper boundaries: "<<endl;
   for (int i = 0; i < 2*m; i=i+2)
   {
        out_result << bound_[i]<<" "<<bound_[i+1]<<endl;
   }
   out_result << endl;
   out_result << endl;
   
   out_result << "The maxmium values of the queries: "<<endl;
   
   */
   for (int i = 0; i < m;i++)
   {
        //out_result << max_value[i] <<endl;
        cout << max_value[i] <<endl;
   }
   
   //out_result.close();
   
       // return 0;
}
