/*

BRUTE FORCE:- we can just solve this problem by running 2 for loops but that would take O(N^2) complexity which will be very high for this problems.

EFFICIENT APPROACH:- we use TRIE data stucture  to solve this problem which reduces its time complexity to O(N*Log(max_Element)) .

Now, i come to the Explanation :-

1- In general Problems of TRIE we make TRIE then perform operation But in this problem insertion and checking will go hand in hand .
2- First insert 0 in the Trie.
   Ex:- [1,2,3,4] 
   for 1 there will be only 1 check of 1 XOR 0 = 1  for this case we inserted 1 before, After performing XOR we will insert 1 in TRIE and similary the further ones.
   Now Further we will be Inserting XOR of Subarrays that is 
   1
   After Checking Insert - 1
   1 XOR 2
   After Checking Insert - 1 XOR 2
   1 XOR 2 XOR 3
   After Checking Insert - 1 XOR 2 XOR 3
   1 XOR 2 XOR 3 XOR 4
   After Checking Insert - 1 XOR 2 XOR 3 XOR 4
   
   Now you would be thinking how i have compared all the subarrays :- Let me Explain
   
   let say 1 XOR 2 XOR 3 = 'a' now while checking this 'a' whether its XOR is greater than K , I have Already Inserted 1 and 1 XOR 2 in the TRIE.
   
   now this 'a' gets compared with all the other subarrays out their and make check for the new generating ones.
   
   ( a XOR 1 ) generate check for ( 2 XOR 3 )
   ( a XOR (1 XOR 2) ) generate check for  ( 3 )
   
   Till now we GOT the point how comarison is being made:
   
3- We have to check that Xor of subarrays is Less than K 
   -For every bit of K and Subarrays Xor value SAY B will be checked;
   -Our Structure of TRIE will contain a left and right Pointer and a left count and a right count.
   -if bit of k =1 and bit of B=1 then To make 0 we have to move Left because 1 XOR 0 is 1 and we have include right count in our answer as 1 XOR 1 =0 so right 
    subtree count will be completely added.
   -if bit of k=1 and bit of B=0 then similarly as above we count left subtree count and move right.
   -if bit of k=0 and bit of B=1 then in this case we just need to decide the direction to move, we will move right as B(1) XOR 1(Right) =0 
   -if bit of k=0 and bit of B=0 then in this case we just need to decide the direction to move, we will move left as B(0) XOR 0(Left) =0 
   
   SO, THESE WERE THE 4 CASES THAT NEED TO FIGURED OUT .
   I HOPE U ALL HAVE UNDERSTOOD THE LOGIC.
   TO UNDERSTAND THIS U HAVE TO KNOW BASICS OF TRIE
   HAPPY CODING
*/

#include <bits/stdc++.h>
using namespace std;
 
class trienode{
public:
    trienode* left;
    trienode* right;
    int countl=0;
    int countr=0;
};
void insert(int n,trienode* head)
{
    trienode* curr=head;
    for(int i=20;i>=0;i--)
    {
        int b=(n>>i)&1;
        if(b==0)
        {
            curr->countl++;
            if(!curr->left){
                curr->left=new trienode;
            }
            curr=curr->left;
        }
        else
        {
            curr->countr++;
            if(!curr->right){
                curr->right=new trienode;
            }
            curr=curr->right;
        }
        //cout<<"curr-left: "<<curr->countl<<"  curr-right: "<<curr->countr<<endl;
    }
}
 
int find_max_xor(trienode* head,int val,int k)
{
        int value=val;
        trienode* curr=head;
        int ans=0;
        for(int j=20;j>=0;j--)
        {
            int b=(value>>j)&1;//present value
            int q=(k>>j)&1;// kth value
            //cout<<b<<" ";
            if(q==1 && b==1)
            {
                ans+=curr->countr;
                if(!curr->left)
                    return ans;
                curr=curr->left;
            }
            else if(q==1 && b==0)
            {
                ans+=curr->countl;
                if(!curr->right)
                    return ans;
                curr=curr->right;
            }
            else if(q==0 && b==1)
            {
                if(!curr->right)
                    return ans;
                curr=curr->right;
            }
            else if(q==0 && b==0)
            {
                if(!curr->left)
                    return ans;
                curr=curr->left;
            }
        }
        return ans;
}
int main()
{
    int n,p=0,t,k;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        trienode* head=new trienode();
        insert(0,head);
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            p=p^arr[i];
            ans+=find_max_xor(head,p,k);
            insert(p,head);
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
   
