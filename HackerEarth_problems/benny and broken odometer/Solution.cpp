/*
One fine day, Benny decided to calculate the number of kilometers that she traveled by her bicycle.
Therefore, she bought an odometer and installed it onto her bicycle. But the odometer was broken. 
It was not able to display the digit 3. This would precisely mean, that the odometer won't be able to display the numbers having one of their digits as 3.
For example, after the number , the odometer will show .
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

ll dp[11][2][2];//we only need to check if the number formed contains 3 or not so for that we only take flag to tell that

ll g(string s,ll pos=0,ll flag=0,ll tight=1 ){
    if(pos==s.length()){//always when we have formed s.size elements we 
        if(flag)return 1;
        else return 0;
    }
    //cout<<pos<<"    "<<flag<<"  "<<tight<<endl;
    if(dp[pos][flag][tight]!=-1){
        return dp[pos][flag][tight];
    }
    else if(tight==1){
        ll tot=0;//inti. with 0 because every pos.is decided with the number then next pos. trace the sum for that 
        for(int i=0;i<=s[pos]-'0';i++){
            ll flg=flag;//this imp. that for every position i have to new flag variable and pass it because if  3 appeared once and i made the main variable 1 then for further positions all flag will be 1.
            if(i==3)flg=1;
            if(i==s[pos]-'0'){    //uss particular index par boundary value aaigi toh aage type 
                tot+=g(s,pos+1,flg,1);
            }
            else{
                tot+=g(s,pos+1,flg,0);
            }
        }
        return dp[pos][flag][tight]=tot;
    }
    else{
        ll tot=0;
        for(int i=0;i<=9;i++){
            ll flg=flag;
            if(i==3)flg=1;
            tot+=g(s,pos+1,flg,0);
        }
        return dp[pos][flag][tight]=tot;
    }
}



int main() {
	ll n,l,r;
	cin>>n;
	while(n--){
	    cin>>r;
	    string a=to_string(r);
	    //string b=to_string(l-1);
	    memset(dp,-1,sizeof(dp));
	    ll p=g(a);
	    //memset(dp,-1,sizeof(dp));
	    //ll q=g(b);
       // cout<<"P: "<<p<<endl;
	    cout<<r-p<<endl;
    }
	return 0;
}
