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
//i hve taken a function to perform the sum as it was said in question
	    long long int a,b,n,s1=0,s2=0,count1=0,count2=0,i;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        s1=summ(a);
	        s2=summ(b);
//then i stored those sum in seperate variable s1 and s2 for a and b resp.
//f the sum of a is greater then b count 1 will increment which is for a
            if(s1>s2){
                count1++;
                
            }
//else count 2 will increment for b
            else if(s2>s1){
                count2++;
            }
//if they are equal both will increment
            else{
                count1++;
                count2++;
            }
            
	    }
//comparing the counts 
//0 for a
//1 for b
//and if equal print 2 along with any count one will do
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
