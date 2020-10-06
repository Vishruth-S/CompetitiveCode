#include<stdio.h>
#include<string.h>

int main(){

    int a[26],max=0,ascii;
    char c[10];
    
    for(int i=0;i<26;i++)
        scanf("%d",&a[i]); //reading inputs and storing them in the integer array 
        
    scanf("%s",c); //reading the string
    
    int len=strlen(c); //calculating length
    
    for(int i=0;i<len;i++){
    
        ascii=c[i]-97; //finding out the integer equivalent in our integer array from each character of the string to get the maximum height
        
        if(a[ascii]>max)
            max=a[ascii]; //stores the maximum height
            
    }
    
    printf("%d",len*max); //printing the result
    return 0;
    
}
