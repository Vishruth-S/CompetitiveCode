#include<bits/stdc++.h>
using namespace std;
/*
-----------LOGIC (ONE PASS SOLUTION )-----------------------------------
I know the problem is very simple in two pass where first 
you need to get total length and in second remove (L- n)th 
node from beginning.

But here I'm going to discuss one pass solution
so we have to delete the nth node from end .
Means that if we place one pointer at the end
the from there n nodes before another pointer is to be placed and that has
to be deleted.

Like suppose we have n=3  and List = 0->4->2->4->1->5->9
here  node to be deleted is 1 i.e. 3rd from the end
so if somehow we place two pointers 3 nodes apart and place the second pointer at the
end we'll get the position of the to be deleted node.
Like this
        0->4->2->4->1->5->9 
                    |     |                     
                    p1    p2

so here is how we'll do that 
 1) Place p1 and p2 on head
 2) Then make two pointer n distance apart by moving p2 forward
 3) Move both pointers step by step till p2 reaches the end

        0->4->2->4->1->5->9             (Initial position , moving p2 ahead)
        |  |  |  |  |  |  |                   
        p1
        p2

        0->4->2->4->1->5->9         (When p1 and p2 are n=3(here) distance apart move them step by step)
        |  |  |  |  |  |  |                   
        p1    p2
        
        0->4->2->4->1->5->9 
        |  |  |  |  |  |  |                   
           p1    p2

        0->4->2->4->1->5->9 
        |  |  |  |  |  |  |                   
              p1    p2

        0->4->2->4->1->5->9 
        |  |  |  |  |  |  |                   
                 p1    p2

        0->4->2->4->1->5->9 
        |  |  |  |  |  |  |                   
                    p1    p2         (p2 reached the end and node to be deleted is p1)

    Bracvo you got the logic!!!
        
*/

// NOTE p1 and p2 are renamed as slow and fast here in the solution

//============================CODE========================

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* start = new ListNode(0);
        start->next = head;
        
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};