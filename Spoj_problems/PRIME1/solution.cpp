#include<bits/stdc++.h>

#define DIFF_SIZE 100000
using namespace std;
/* Used Sieve of Erosthesis and Segmented Sieve for generating prime numbers in a range. */
int myPrimes[DIFF_SIZE];
int cnt;

void populateMyPrimes(int N) // i need to find the primes upto root(N)
{
	int i=0,j=0;
	bool primeArray[DIFF_SIZE];
	for(i=2;i<DIFF_SIZE;i++)
	{
		primeArray[i]=true;
		myPrimes[i]=0;//myPrimes[] array will hold our primes calculated via traditional sieve
	}
	int myRange=floor(sqrt((double)N)); //we need to calculate prime numbers till myRange
	//TRADITIONAL SIEVE STARTS HERE

	int k=floor(sqrt((double)myRange));//to calculate prime numbers till myRange,loop needs to run till sqrt(myRange)
	for(i=2;i<=k;i=i++)
	{
		if(primeArray[i]==true)
		{
			for(j=i*i;j<=myRange;j=j+i)
			{
				primeArray[j]=false; // j is a composite number
			}
		}
	}
	cnt=0; //stores the number of primes till sqrt(N)
	for(i=2;i<=myRange;i++)
	{
		if(primeArray[i] == true) // false means composite number,true means prime number
		{
			myPrimes[cnt++]=i; //store the primes in myPrimes[]
		}
	}
	cout<<endl;
}

int main()
{
	int T;//the number of test cases
	cin>>T;
	int i,p=0,s;

	int N;//larger number
	int M;//smaller number
	bool primesNow[DIFF_SIZE];

	while(T--)
	{
		cin>>M>>N; //input the range

		for(i=0;i<DIFF_SIZE;i++)
		primesNow[i]=true;  //initialise to all true . we will mark the composite number as false and then
		//the remaining true numbers will be prime

		populateMyPrimes(N); //this populates the primes in sqrt(N) in an array myPrimes

		for(i=0;i<cnt;i++)  //for each prime in sqrt(N) we need to use it in the segmented sieve process
		{
			p=myPrimes[i]; //store the prime
			s=M/p;
			s=s*p; //the closest number less than M that is a composite number for this prime p

			for(int j=s;j<=N;j=j+p)
			{
				if(j<M) continue; //because composite numbers less than M are of no concern to use.
				primesNow[j-M]=false;//j-M = index in the array primesNow,this is because max index allowed in the array
				//is not N ,it is DIFF_SIZE so we are storing the numbers offset from M
				//while printing we will add M and print to get the actual number
			}
		}

		for(int i=0;i<cnt;i++)     //in the above loop the first prime numbers for example say 2,3 are also set to false
		{                          //hence we need to print them in case they  are within range.
			if(myPrimes[i]>=M && myPrimes[i]<=N) //without this loop you will see that for an range(1,30), 2 and 3 does
				cout<<myPrimes[i]<<endl;         //not get printed
		}

		for(int i=0;i<N-M+1;++i) // primesNow[]=false for all composite numbers,so prime numbers can be found by checking with true
		{
			if(primesNow[i] == true && (i+M)!=1) //i+M != 1 to ensure that for i=0 and M=1 , 1 is not considered a prime number
				cout<<i+M<<endl; //print our prime numbers in the range
		}
	}
	return 0;
}
