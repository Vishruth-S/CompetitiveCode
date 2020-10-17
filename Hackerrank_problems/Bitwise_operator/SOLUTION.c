#include <stdio.h>
#include <string.h> //header file to use string functions
#include <math.h>
#include <stdlib.h>
//Complete the following function.

//function definition
void calculate_the_maximum(int n, int k) { //function prints the maximum values for the and, or and xor comparisons{
    //int n: the highest number to consider
    //int k: the result of a comparison must be lower than this number to be considered
    int i,j,m1=0,m2=0,m3=0; //variables declared
    for(i=1;i<=n;i++)//loop to count from 1 to n 
    {
    for(j=i+1;j<=n;j++)
    //loop to count from i+1 to n
    {
        int and =i&j;
        int or =i|j;
        int xor =i^j;
        if(and<k && and>m1){
            m1=and; //m1 is the largest value for and
        }
        if(or<k && or>m2){
            m2=or; //m2 is the largest value for or
        }
        if(xor<k && xor>m3){
            m3=xor; //m3 is the largest value for xor
        }
    }
    }
     printf("%d\n",m1);
     printf("%d\n",m2);
     printf("%d\n",m3);
  //Write your code here.
}
    
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);//function call 
 
    return 0;
}
