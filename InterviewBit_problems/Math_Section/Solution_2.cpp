/*Though the problems seems to be complex , yet its an easy one!!
Just follow the pattern of when zeroes do repeat in factorials , and there you go!
*/

//Below is the required function , short and efficient!!

int Solution::trailingZeroes(int A)
{
        int s=0;
        while(A!=0)
        {
            A/=5;
            s+=A;
        }
    return s;
}
