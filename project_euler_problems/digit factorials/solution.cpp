/*
Pretty straight forward. The upper bound could probably be fine tuned but going until the number exceeds the maximum possible sum of the factorials of its digits seemed reasonable enough (7 * 9!).
Calculating and storing the factorials of digits 0 - 9 saves having to recompute the same factorials over and over.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);
int factorial_digit_sum(int n, int *factorial_array);
int *array_of_factorials(void);
int is_factorion(int n, int *factorial_array);

int main(int argc, char **argv) {
    
    int *factorial_array = array_of_factorials();

    int result = 0;

    int i = 3;
    while(i < (log10(i) + 1) * *(factorial_array + 9)) {
        if(is_factorion(i, factorial_array)) result += i;
        ++i;
    }

    printf("The sum of all factorions in base 10 = %d\n", result);

    free(factorial_array);
    factorial_array = NULL;

    return 0;
}

int factorial(int n) {
    
    if(!n) return 1;

    int result = 1;

    while(n) {
        result *= n;
        --n;
    }

    return result;
}

int factorial_digit_sum(int n, int *factorial_array) {
    
    int sum = 0;

    while(n) {
        sum += *(factorial_array + (n % 10));
        n /= 10;
    }

    return sum;    
}

int *array_of_factorials(void) {
    
    int *factorial_array = (int*) malloc(sizeof(int) * 10);
    
    int x = 0;
    int *begin = factorial_array;
    int *end = factorial_array + 10;
    
    while(begin != end) {
        *begin = factorial(x++);
        ++begin;  
    }

    return factorial_array;
}

int is_factorion(int n, int *factorial_array) {
    
    return n == factorial_digit_sum(n, factorial_array);
}

