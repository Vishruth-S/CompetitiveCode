#include <stdio.h>

int main()
{
    int n,a[500],c=0,temp,i;          //initializing an integer , array, integer c=0, temp,i.
    a[0]=1;                           //assigining or storing the 0th position or the first position in array with 1.
    scanf("%d",&n);                   //Enter the integer.
    for(;n>=2;n--)                    //looping from the value of n till it is greater than equal to 2.
    {
        temp=0;                       //initializing temp=0
        for(i=0;i<=c;i++)             //looping from i=0 till i is less than equal to value of c
        {
            temp=(a[i]*n)+temp;       //multiplying the value in a[i]with n and then adding it with temp's previous value and storing the total value in temp (which becomes the new value of temp)
            a[i]=temp%10;              //storing the temp%10 value in a[i]
            temp=temp/10;               //now temp's value = temp/10
        }
        while(temp>0)                 //looping till temp>0
        {
            a[++c]=temp%10;          //a{++c] means incrementing the value of c and storing the value=temp/10
            temp=temp/10;           //temp's value =temp/10
        }
    }
        for(i=c;i>=0;i--)
        printf("%d",a[i]);            //printing the value of array
        
    
    return 0;
}
