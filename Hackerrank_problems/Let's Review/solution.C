#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void myFunction(char s[])             //Function defined
{
    for(int i=0;i<strlen(s);i++)       //looping: from 0 to the (length of string-1)
    {
        if (i%2 == 0)                  //if i is divisible by 2
        {
            printf("%c",s[i]);         //print the letter in the ith position
        }
    }
    
    printf(" ");                      //printing a little space

    for(int i=0;i<strlen(s);i++)      //looping: from 0 to the (length of string-1)
    {
        if (i%2 != 0)                 //if i is not divisible by 2
        {
            printf("%c",s[i]);        //print the letter in the ith position
        }
    } 
    
    printf("\n");                      //start from the next line for the next test case.
    
} 

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n; char s[10000];
    scanf("%d",&n);          //enter the number of test cases
    
    for(int i=0;i<n;i++)     //looping : going to each test cases one by one
    {
       scanf("%s",s);        //Entering the string
       myFunction(s);          //put the string in the defined function.
   }
}

