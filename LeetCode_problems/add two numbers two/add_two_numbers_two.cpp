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
    void insertathead(int data,ListNode*&head)
    {
        if(head==NULL)
        {
            ListNode*n=new ListNode(data);
            head=n;
            return;
        }
        ListNode*n=new ListNode(data);
        n->next=head;
        head=n;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i=10;
        ListNode*temp=l1;
        stack<int>s1;
        stack<int>s2;
        while(temp!=NULL)
        {
            s1.push(temp->val);
            temp=temp->next;
        }
        ListNode*temp2=l2;
        while(temp2!=NULL)
        {
            s2.push(temp2->val);
            temp2=temp2->next;
        }

        ListNode*head=NULL;
        int carry=0;
       while(!s1.empty()and !s2.empty())
       {
           insertathead((s1.top()+s2.top()+carry)%10,head);
           carry=(s1.top()+s2.top()+carry)/10;
           s1.pop();
           s2.pop();
       }
        if(s1.empty())
        {
            while(!s2.empty())
            {
                insertathead((s2.top()+carry)%10,head);
                carry=(s2.top()+carry)/10;
                s2.pop();
            }
            while(carry)
            {
                insertathead(carry%10,head);
                carry=carry/10;
            }
        }
        else
        {
            while(!s1.empty())
            {
                insertathead((s1.top()+carry)%10,head);
                carry=(s1.top()+carry)/10;
                s1.pop();
            }
            while(carry)
            {
                insertathead(carry%10,head);
                carry=carry/10;
            }
        }
        return head;
    }
};
