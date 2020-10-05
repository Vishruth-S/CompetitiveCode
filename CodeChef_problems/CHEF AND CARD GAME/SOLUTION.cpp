#include <iostream>
using namespace std;
long long int summ(long long int n){
    long long int sum=0;
    for (sum = 0; n > 0; sum += n % 10, n /= 10);
    return sum;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,n,s1=0,s2=0,count1=0,count2=0,i;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        s1=summ(a);
	        s2=summ(b);
            if(s1>s2){
                count1++;
                
            }
            else if(s2>s1){
                count2++;
            }
            else{
                count1++;
                count2++;
            }
            
	    }
	    if(count1>count2){
                cout<<0<<" "<<count1<<endl;
            }
        else if(count2>count1){
                cout<<1<<" "<<count2<<endl;
            }
        else{
                cout<<2<<" "<<count2<<endl;
            }
	}
	return 0;
}
