#include<stdio.h>


int main(){
    int n,aux;

    scanf("%d",&n);
    int array[n];
    int last = n-1;

    /*Reading the n numbers typed by the user*/
    for(int i = 0 ; i < n; i++){
        scanf("%d",&array[i]);
    }

    /*
        Scrolling through the array of read numbers and changing the position elements using an auxiliary variable 
        to store the current position value. Then the values ​​are shifted. the first value goes to the last position 
        and the last value goes to the first position. The same logic applies to the following positions.
    */
    for(int i = 0 ; i < n/2; i++){
        aux = array[i] ;
        array[i]=array[last];
        array[last]=aux;
        last--;
    }

    /*Displaying the array that was inverted*/
    for(int i = 0 ; i < n; i++){
        printf("%d ",array[i]);
    }
    printf("\n");


}