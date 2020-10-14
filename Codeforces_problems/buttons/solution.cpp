/*
Let us first detect the worst case scenario.
It is more or less apparent that when Manao tries to guess the i-th (1 <= i <= n) button in order,he will make n-i mistakes in the worst case.
After that the correct button is evident.

Now let's count the total number of presses Manao might need before he guesses the whole sequence.
When he is guessing the first button he makes n-1 mistakes, but the "mistake cost", i.e. the number of presses before the mistake is made, is equal to 1.
When Manao goes for the second button, the mistake cost becomes 2, because each time Manao needs to press the first (already guessed) button.
Continuing like this, we obtain that when Manao tries to guess the i-th button in order, he will perform (n-i) * i button presses.

After Manao guessed the correct sequence, he needs to enter it once, which is another n presses.

So we already have an O(n) algorithm: sum up (n-i)*i for i=1, ..., n-1 and add n to the sum obtained.

When n is anything that fits in 32-bit integer type, the task is solvable in O(1)*. 
The sum (n-i)*i is two separate sums: the sum of n*i and the sum of i*i. 
The first sum is n*(1+...+n-1), which can be computed with the sum of arithmetic progression. 
*/


#include<stdio.h>
int main (){
	long long int n;
	scanf("%lld",&n);
	long long int sum=0;
	int ctr=n-1;
	int temp=0;
	while(ctr>0){
		for(int i=0;i<ctr;i++){
		sum+=temp+1;
	}
		ctr--;
		temp++;
	}
	printf("%lld\n",sum+n);
	
	return 0;
}
