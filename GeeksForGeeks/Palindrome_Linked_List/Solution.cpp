#include<bits/stdc++.h>
using namespace std;

//Defining the structure
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
        head=new Node(firstdata);//Creating a new node
        tail=head;

        //Inserting the new node into the linked list
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


bool isPalindrome(Node *head)//Function to check if linked list is palindrome
{
    struct Node *slow_ptr = head, *fast_ptr = head;
    struct Node *second_half, *prev_of_slow_ptr = head;
    struct Node* midnode = NULL;
    bool res = true; // initialize result to true

    //Finding the mid point of the linked list using 2 pointers
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
        prev_of_slow_ptr->next = NULL; // First half of the linked list terminated to NULL
        reverse(&second_half); // Reverse the second half of the linked list
        res = compareLists(head, second_half); // compare the first half and the second half of the linked list to see if they are equal or not

        reverse(&second_half); // Reverse the second half again to bring back the original linked list

        if (midnode != NULL) {
            prev_of_slow_ptr->next = midnode;
            midnode->next = second_half;
        }
        else
            prev_of_slow_ptr->next = second_half;
    }
    return res;
}

//Reversing the second half of the linked list
void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next;

    //Run a loop for reversing the linked list
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

//Comparing the first and the second half of the linked list
bool compareLists(struct Node* head1, struct Node* head2)
{
    //Initializing 2 pointers pointing to the 2 heads of each linked list
    struct Node* temp1 = head1;
    struct Node* temp2 = head2;

    //Comparing the data of the 2 linked list one by one to check if they are equal
    while (temp1 && temp2) {
        if (temp1->data == temp2->data) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return 0;//Return 0 if the corresponding data of both the linked list are not equal
    }

    if (temp1 == NULL && temp2 == NULL)
        return 1;//Return 1 if both the linked list are equal


    return 0; //Return 0 if either of the linked list is not NULL
}
