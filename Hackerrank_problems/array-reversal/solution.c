#include<stdio.h>

int main(){
    int n,aux;

    scanf("%d",&n);
    int array[n];
    int last = n-1;

    for(int i = 0 ; i < n; i++){
        scanf("%d",&array[i]);
    }

    for(int i = 0 ; i < n/2; i++){
        aux = array[i] ;
        array[i]=array[last];
        array[last]=aux;
        last--;
    }
    for(int i = 0 ; i < n; i++){
        printf("%d ",array[i]);
    }
    printf("\n");


}