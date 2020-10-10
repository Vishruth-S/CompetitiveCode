#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    int a[10000],n,count=0,max=0;    
  
scanf("%d",&n);    //enter the integer
while(n){
if(n%2!=0)         //if n is divisible by 2 then count will increase by 1
                   
count++;
else     
count=0;           //else count will remain 0
if(max<count)      //if count's value is greater than max's value
max=count;         //then count's value is stored in max 
n>>=1; 
}
printf("%d",max);          //value stored in max is printed.
return 0;  
}  
