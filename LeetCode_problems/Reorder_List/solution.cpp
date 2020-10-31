#include<bits/stdc++.h>
using namespace std;
/*
-----------LOGIC-----------------------------------
Before proceeding to the logic i assume that you have 
knowledge of how to reverse a linked list . In case you are not aware of
that you can refer to this link
Reverse Link List - https://www.geeksforgeeks.org/reverse-a-linked-list/

Now proceeding further we have following Q
Input - L0 -> L1- > L2 -> .....Ln-1 -> Ln
Output - L0 -> Ln -> L1 -> Ln-1 .........

Observing the required linked list output we find the it can be constructed with 
inserting Ln in between L0 and L1 and Ln-1 between L1 and L2 similaraly fo others

How we can do it is merge following two lists with alternate positions
1)  L0 -> L1-> L2 -> L3.......Ln/2
2)     Ln ->  Ln-1 -> Ln-2........

So the first list is actually the first half of the list and the second
list is actually the reversed form of second half of given linked list

Thus we need to perform 3 steps to obtain our linked list order.
 -  Break the given list into two halves
 -  Reverse the second half
 -  Merge the first and reversed half with alternate positions 
    (1st ,3rd, 5th .. from 1st list and 2nd ,4th, 6th.. from the second list)


Example 
Input  1->2->3->4->5

    Step 1
        1->2->3  ||  4->5  
    Step 2
        1->2-3   ||  5->4    
    Step 3
        1->5->2->4->3
  
 Bravo you got the logic!!   

*/




//==============CODE=====================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head) return ;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead=slow->next;
        slow->next=NULL;
        newhead= reverse(newhead);
        head= merge(head,newhead);
          
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* nexthead=l1->next;
        l1->next=l2;
        l2->next=merge(nexthead,l2->next);
        return l1;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* pre=NULL;
        if(!head || !head->next)
            return head;
        ListNode* cur=head;
        ListNode* next=NULL;
        while(cur){
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        return pre;
    }
};