// author: Soham Sarkar

#include<stdio.h>

int main(){

    int n,classes,attended=0,max=0,max_count=0,k; 
    scanf("%d%d",&n,&classes); //n stores the number of persons and classes stores the maximum subjects a person can know
    
    char attendance[n][classes]; //2D array to store the classes attended
    
    for(int i=0;i<n;i++)
        scanf("%s",attendance[i]); //take inputs into the array
        
    for(int i=0;i<n-1;i++){
        k=i+1; //to check between this ith and kth one
        while(k<n){
            attended=0;
            for(int j=0;j<classes;j++){
                if(attendance[i][j]=='1'||attendance[k][j]=='1') //we calculate here every permutation possible for two person team and check the maximum subjects they both know
                    attended++;
            }
            if(max<attended){
                max=attended; //updating the maximum value 
                max_count=1; //updating the max count as a new value means only that pair yields the maximum value and rest we need to calculate later
            }
            else if(max==attended)
                max_count++; //max==attended means maximum value and it's pair already exists, so updating max_count
            k++; //updating k to compute next pair
        }
    }
    printf("%d\n%d",max,max_count); ///printing the desired output in it's desired format
    return 0;
}
