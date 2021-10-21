#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int INF=1e18;
const int mod=1e9+7; 
const int N=200005;

void solve(){
    int n;
    cin>>n;

    int ar[n+1];
    int taken[n+1]; // taken[i] = a means ith user has taken gift from ath user

    for(int i=1;i<n+1;i++)
    {
        cin>>ar[i];
        taken[i]=0; // it implies this user has not taken any gift yet
    }

    vector<int> ans(n+1);
    int mx_fulfillment=0;

    // first we allow the user to send as per their wish if possible
    for(int i=1;i<n+1;i++)
    {
        if(taken[ar[i]]==0)
        {
            ans[i]=ar[i];
            taken[ar[i]]=i;
            mx_fulfillment++;
        }
    }
    cout<<mx_fulfillment<<endl;

    // now we find those users who have not received gift and store in 'rem' vector
    vector<int> rem;
    for(int i=1;i<n+1;i++)
    {
        if(taken[i]==0)
        {
            rem.push_back(i); //they have not received any gift yet
        }
    }

    // finally we check if the user has sent gift or not
    // if it has not send, we select one of the user from our 'rem' vector to send
    for(int user=1;user<n+1;user++)
    {
        if(ans[user]==0) //it has not sent gift yet
        {
            if(rem.back()==user)
            {
                //we need to swap so that we don't end up in a situation where the user sends gift to himself
                swap(rem.back(),rem[0]);
            }

            if(rem.back()==user){
                //if rem.back() is still 'user' it means only one user remaining (the special user who has neither sent nor received)
                int special=rem[0];
                int choice=ar[special];
                ans[taken[choice]]=special;
                ans[special]=choice;
            }else{
                ans[user]=rem.back();
                taken[rem.back()]=user;
                rem.pop_back();
            }
        }
    }

    for(int i=1;i<n+1;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
} 