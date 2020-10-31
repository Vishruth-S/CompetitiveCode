Suppose X = "off" and O = "on". Let's define the possible lighting setups for 1, 2, 3 lights and see if we are able to identify any pattern:

1 - O, X (2 patterns)

2 - OO, OX, XO, XX (4 patterns)

3 - OOO, OXO, OOX, XOO, XXO, OXX, XOX, XXX (8 patterns)

You notice how you get 2^n patterns for any number of lights. Since you know that at least one light is on at any time, you have to exclude the pattern in which all lights are off, so you just subtract one from it.

Which means that the solution is: (2**n) - 1

Here we are taking modulo continously  with 10^5 because according to constraints the number may be very big in size so to reduce chaos and insure the program runs well we take modulo here
 you can go to gfg for morr explaination regarding modulo.
Code:-
#include<stdio.h>
int main(){
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int j,n,prod=1;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            prod *= 2;
            prod %= 100000;
        }
        printf("%d\n",(prod-1 + 100000)%100000);
    }
    return 0;
}
