#include<bits/stdc++.h>
using namespace std;
/*
-----------LOGIC-----------------------------------
In the question we are given a set G and a linked list 
which may contain values which may or may not belong to G.
We need to find the nubmer of components present in that list.
A component here is defined as those nodes whcih are linked
in continuous chain and all of them are present in G form one component.

SO the problem is very similar to connected component in dfs.

We'll use a set to track values if are present in G.
Our approach will be like this .
    Repeat till end of linked list
        Move forward until we get a value present in G or we reach the end of LL
            if we are not at the end then we get a component here
                move forward the pointer till the values are continuously present in G
            else 
                break
        Other wise move to next pointer

You'll understand it better with an example

Say 
Input - 0 , 1, 2, 3, 4
      G = [0, 3, 1, 4]
    
    Starting from 0 (present in G so we increment component count by 1 and start elimi
                        -nating the values linked to this)
            from 0
               1 (in G so move next)
               2 (not in G so break)
    Starting from 3 ((present in G so we increment component count by 1 and start elimi
                        -nating the values linked to this))
            from 3 
                4 (in G so move next)
                end (break)
    Thus our component count is 2
*/

//=====================CODE==================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set<int> s(G.begin(),G.end());
        ListNode* temp=head;
        int c=0;
        while(temp){
            if(s.find(temp->val)!=s.end()){
                c++;
                while(temp and s.find(temp->val)!=s.end())
                    temp=temp->next;
                continue;
            }
            temp=temp->next;
        }
        return c;
        
        
    }
};