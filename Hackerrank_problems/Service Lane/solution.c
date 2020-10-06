//author: Soham Sarkar

#include<stdio.h>

int main(){

    int n,t,width[100000],i,j,k,m,p;
    scanf("%d %d",&n,&t); //read the n and t
    
    for(p=0;p<n;p++){
    
        scanf("%d",&width[p]); //read the widths of the lane
        
    }
    
    for(k=0;k<t;k++){ //for each test cases
    
        int min=3; 
        scanf("%d %d",&i,&j); //reading the query
        
        for(m=i;m<=j;m++){
        
           if(width[m]<min)
               min=width[m]; //check for the minimum width for the query
               
        }
        
        printf("%d\n",min); //print the desired output
        
    }
    
    return(0);
    
}
