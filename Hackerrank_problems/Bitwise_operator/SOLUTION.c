#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

//function definition
void calculate_the_maximum(int n, int k) {
    int i,j,m1=0,m2=0,m3=0; //variables declared
    for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
        int and =i&j;
        int or =i|j;
        int xor =i^j;
        if(and<k && and>m1){
            m1=and;
        }
        if(or<k && or>m2){
            m2=or;
        }
        if(xor<k && xor>m3){
            m3=xor;
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
