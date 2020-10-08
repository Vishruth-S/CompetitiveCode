#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
struct Node *next;
Node(int x)
{
    data=x;
    next=NULL;
}
};


bool isPalindrome(Node *head);

int main()
{

    int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        struct Node *head=NULL, *tail=NULL;
        cin>>n;
        cin>>firstdata;
        head=new Node(firstdata);
        tail=head;

        for(i=1;i<n;i++)
        {

            cin>>l;
            tail->next=new Node(l);
            tail=tail->next;
        }
        cout<<isPalindrome(head)<<"\n";

    }
    return 0;
}

void reverse(struct Node**);
bool compareLists(struct Node*, struct Node*);

bool isPalindrome(Node *head)
{
    //Your code here
    struct Node *slow_ptr = head, *fast_ptr = head;
    struct Node *second_half, *prev_of_slow_ptr = head;
    struct Node* midnode = NULL; // To handle odd size list
    bool res = true; // initialize result

    if (head != NULL && head->next != NULL) {

        while (fast_ptr != NULL && fast_ptr->next != NULL) {
            fast_ptr = fast_ptr->next->next;
             prev_of_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }


        if (fast_ptr != NULL) {
            midnode = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        second_half = slow_ptr;
        prev_of_slow_ptr->next = NULL; // NULL terminate first half
        reverse(&second_half); // Reverse the second half
        res = compareLists(head, second_half); // compare

        reverse(&second_half); // Reverse the second half again

        if (midnode != NULL) {
            prev_of_slow_ptr->next = midnode;
            midnode->next = second_half;
        }
        else
            prev_of_slow_ptr->next = second_half;
    }
    return res;
}

void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

bool compareLists(struct Node* head1, struct Node* head2)
{
    struct Node* temp1 = head1;
    struct Node* temp2 = head2;

    while (temp1 && temp2) {
        if (temp1->data == temp2->data) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return 0;
    }

    if (temp1 == NULL && temp2 == NULL)
        return 1;


    return 0;
}
