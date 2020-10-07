#include<stdio.h>
int main()
{
long long int num;          //declaring number as long long integer     
scanf("%lld",&num);         

printf("%lld",num);

while(num!=1)              //loop works until number is not equals to 1
{
if(num%2==0)              //if number is even
num=num/2;                  //dividing the number by 2

else                      //else number is odd
num=(num*3)+1;            //multiplying the number by 3 and then adding 1 to it

printf(" %lld",num);       //printing the result
}
}
