/*
Given that we know that a + b + c = p, we can write c in terms of p, b, and a: c = p - a - b. Given that we also know that a2 + b2 = c2, we can write b in terms of a and p as follows:

-> a^2 + b^2 = (p - a - b)^2
-> a^2 + b^2 = p^2 + a^2 + b^2 - 2ap - 2bp + 2ab
-> p^2 - 2ap - 2bp + 2ab = 0;
-> b(2p - 2a) = p^2 - 2ap
-> b = (p^2 - 2ap) / (2p - 2a)

By observation we can see that:

if a and b are even then c is even and p, being the sum of 3 even numbers, is even
if a or b is odd then c is odd and p, being the sum of 2 odd and 1 even numbers, is even
if a and b are odd then c and p are even

This means that we only need to consider even values of p.

Lastly, to ensure we only generate unique solutions, we can safely assume that a < b < c. This means that we only need to consider values of a < p/3 and discount any results we get where a > b

*/
#include <stdio.h>

int n_squared(int n);
int double_n(int n);
int is_int(double n);
int num_solutions(void);

int main(int argc, char **argv) {

    printf("The number of solutions maximised when p = %d\n", num_solutions());

    return 0;
}


int n_squared(int n) {

    return n * n;
}

int double_n(int n) {

    return n << 1;
}

int is_int(double n) {

    return n == (int) n;
}

int num_solutions(void) {

    int max_solutions = 0;
    int value = 0;

    for(int p = 12; p < 1001; p += 2) {

        int count = 0;
        
        for(int a = 3; a < p / 3; ++a) {

            double b = 1.0 * (n_squared(p) - double_n(a * p)) / double_n(p - a);
            if(a > b) break;

            if(is_int(b)) {

                printf("a = %d   \tb = %d   \tc = %d   \tp = %d\n", a, (int)b, p - a - (int)b, p);
                ++count;
            }
        }

        if(count) printf("\n");

        if(count > max_solutions) {

            value = p;
            max_solutions = count;
        }
    }

    return value;
}
