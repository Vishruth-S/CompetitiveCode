// One of the standard applications of the trie data structure is that finding maximum xor value of 2 integers given some integer values.This would be quite helpful in solving this particular question.
// We iterate the array in reverse order.Suppose we are at index i.We consider it to be the right end point of one of the subarrays.We then loop over j where
// 1 <= j <= i, which is the left end point of the subarray.We consider we have inserted sum of all subarrays [l,r] where  i<=l<=r<=n. in a trie.
// So we can compute the maximum xor value of ( sum[i,j] xor x ) where x is a value in trie.After iterating over all j, we insert in the trie sum of subarrays starting at index i.


#include <bits/stdc++.h>
using namespace std;
#define M 20
 
struct Node
{
    Node *ptrarr[2];
};
Node *head;


Node* newnode()
{
	Node* temp = new Node;
	temp->ptrarr[0]=temp->ptrarr[1]=NULL;
	return temp;
}
 
void trieinsert(string s)
{
    Node *thead = head;
    for (int i = 0; i < s.size(); i++)
    {
        if (thead->ptrarr[s[i] - '0'] == NULL)
        {
            Node *temp = newnode();
            thead->ptrarr[s[i] - '0'] = temp;
        }
        thead = thead->ptrarr[s[i] - '0'];
    }
}
 
int searchtrie(string s)
{
    Node *thead = head;
    string ans(M, 0);
    int t1, t2;
 
    for (int i = 0; i < s.size(); i++)
    {
        t1 = (s[i] - '0');
        t2 = (1 ^ t1);
        if (thead->ptrarr[t2] == NULL)
        {
            ans[i] = '0';
            thead = thead->ptrarr[t1];
        }
        else
        {
            ans[i] = '1';
            thead = thead->ptrarr[t2];
        }
    }
    reverse(ans.begin(), ans.end());
 
    int ret = 0;
    t1 = 1;
    for (int i = 0; i < M; i++)
    {
        ret += (ans[i] - '0') * t1;
        t1 = t1 * 2;
    }
    return ret;
}
 
string f(int n)
{
    string s(M, '0');
    for (int i = 0; i < M; i++)
    {
        s[i] = ('0' + n % 2);
        n = n / 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
 
int main()
{
    head = newnode();
    int n;
    cin >> n;
    vector<int> inp(n, 0);
    for (int i = 0; i < n; i++)
        cin >> inp[i];
 
    vector<int> cs(n, 0);
    cs[0] = inp[0];
    for (int i = 1; i < n; i++)
        cs[i] = inp[i] + cs[i - 1];
 
    int ans = INT_MIN;
    trieinsert(f(inp[0]));
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int t1 = cs[j] - cs[i - 1];
            ans = max(ans, searchtrie(f(t1)));
        }
 
        if (i == (n - 1))
            break;
        trieinsert(f(cs[i]));
        for (int j = 1; j <= i; j++)
        {
            trieinsert(f(cs[i] - cs[j - 1]));
        }
    }
    cout << ans << "\n";
 
    return 0;
}