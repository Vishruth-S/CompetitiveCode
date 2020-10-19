/*  The main aim of this question is to restore the permutation from the given resulting sequence 
which is formed by the permutation merging with itself
*/

#include<iostream>
#include<math.h>

using namespace std;
int main()
    {
        long long int t;
        scanf("%lld", &t);
        
        while(t--)
        {
            long long int n , i;
            scanf("%lld", &n);
            long long int arr[2*n];
            
            // taking input of the whole sequence 
            for(i = 0 ; i < 2*n ; ++i)
            {
              scanf("%lld ", &arr[i]);
            }
          
            long long int table[n*2] = {0};
         
            // traversing through the whole sequence
            for(i = 0 ; i < 2*n ; ++i)
            {
          	  //Checking if the value at an index(consisting of number from the sequence) is 0 and hence identifying if that value from the sequence is already visited or not
              if(table[arr[i]] == 0)
              {
              	
              	//incrementing the count to make it non zero and to confirm that this particular value from the sequence is already visited
               table[arr[i]]++;         
               printf("%lld ", arr[i]);
               
              }
              
           }
         
            printf("\n");
    }
        return 0;
    }
