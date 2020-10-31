#include<bits/stdc++.h>
using namespace std;
int main()
    {
        // This problem is basically belongs to number theory category
        // In this problem we need to basically find the subarray's size from the given array such that sum of the elements of that subarray is not divisible by given number x
        // More precisely, sum(subarr) % x !=0.
        // Prerequisites:- One should know about subarray ( It is basically an array made from deletion of certain elements of the array from the front and the end (may be 0) )
        // Constraints :- The constraints of the given problem is at most 10^5 i.e., this problem can be easily solved with "int" data type
        // Approach:- Basically what is required in this problem is to delete an element which is not divisible by given number "x"
        // In that way , we can easily find the subarray size with sum does not divisible by the number "x"
        // So, to solve this problem we basically iterate from the starting index and count the number of elements which are divisible by "x"
        // Similarly we do from the end , we itereate from the end index in the reverse to the starting index and count the numbers of elements which are divisible by "x"
        // Answer will be the minimum of both the counts + 1 ( Why +1? because we also need to delete a number which is not divisible by x in order to make,(whole sum) % x!=0.
        // Example:- if we subtract 2 from 4 and lets say x="2" (4-2)%2==0 but if we subtract any other number which is not divisible by 2 we will get the sum not divisible by 2
        // For instance, ((4-1)%2 !=0) (Here , "%" is modulo operator basically gives the remainder when divides a and b)
        // Lets implement what we have discussed till now.
        
        int t,n,i,x; // here variable "t" is for test cases , "n" is for length of the array ,i is for iterating throught the array (basically we take vector) ,x is the number for which we need to make the sum of the sequence not divisible by it   
       
        cin>>t; // Storing the value of test cases in variable "t"
        
        while(t--)
        {
            cin>>n>>x; // Taking the values of "n" and "x"
            vector<int> arr(n); 
            // Taking the the input array elements in vector named "arr"

            for(i=0;i<n;i++) cin>>arr[i];
            int sum=0; // sum variable for storing the sum of the elements the array has.
            for(i=0;i<n;i++) sum+=arr[i];
            if(sum%x) cout<<n<<endl; // if sum is already not divisible by "x" simply we have printed "n".
            else 
            {
                int cnt_s=0,cnt_e=0; // taking cnt_s for counting the numbers which are divisible by x from the starting and similarly cnt_e from the end
                // Taking the counts as mentioned in the top , in the comments.
                for(i=0;i<n;i++)
                {
                    if(arr[i]%x==0) cnt_s++; 
                    else break;
                }
                for(i=n-1;i>=0;i--)
                {
                    if(arr[i]%x==0) cnt_e++;
                    else break;
                }
                int req=min(cnt_s,cnt_e)+1; // Here, +1 is for the number which is not divisible by x ( why? as I mentioned in the top)
                if(req>=n) cout<<-1<<endl; // if req is greater or equal to n we simply need to output -1 as given in the problem
                else cout<<n-req<<endl; // otherwise, we need to print the n- (deleted elements from the array stored in req) 
            }
        }
    }
