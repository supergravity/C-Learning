#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std ;

int main()
{
    int random = 0; 
    int array_1 [20] = {0};
    srand (time(NULL));
    
    /*initializtiaon of the seed*/
    
    
    int idx = 0;
    while (true) 
    {    
      
        bool tag=false;
        random = rand() % 20 + 1 ;
        // run over all elements
        
        for (int j=0;j<20;++j)
            if ( array_1[j] == random )
                tag=true;
        
        if(tag)
            continue;
        
        array_1[idx] = random;
        idx++;

        if(idx == 20)
            break;
         
            
        //getchar();
    }
    
   // for(auto i : array_1){
   //     cout<<i<<endl;
   // }
    printf("6/13: { ");
    for (int i = 0 ;i < 10; i++)
    {
        printf("%d ",array_1[i]);
    }
    printf("}\n");
    printf("6/15: { ");
    for (int i = 10 ;i < 20; i++)
    {
        printf("%d ",array_1[i]);
    }
    printf("}\n");
} 

