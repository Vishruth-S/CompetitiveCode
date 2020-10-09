/* For better understanding, an example is provided:

Input:
N = 5
value[]  = {3,5,2,4,1}
Output: 1 2 3 4 5
Explanation: After sorting the given
linked list, the resultant matrix
will be 1->2->3->4->5.*/



#include <bits/stdc++.h>
using namespace std;


//Defining the structure of the node created
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

//Function to find the mid point of the linked list
Node* midPoint(Node* a) {
    if(a == NULL || a->next == NULL) //If the linked list is NULL or contains only 1 element we will return thee head of the linked list without any operation
    {
        return a;
    }
    //Initializing 2 pointers
    Node* slow = a;
    Node* fast = a->next;
    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;//slow points to the mid element of the linked list
}

Node* merge(Node* a, Node* b) {

    //If either of the 2 halves of the linked list is NULL, then we will return the other half of the linked list

    if(a == NULL) {
        return b;
    }
    else if(b == NULL) {
        return a;
    }
    Node* c; //Declaring a pointer

    //The declared pointer *c points to the smaller of the 2 elements of either half of the linked list and the merge function is called recursively
    if(a->data < b->data) {
        c  = a;
        c->next = merge(a->next, b);
    }
    else {
        c = b;
        c->next = merge(a, b->next);
    }
    return c; //Returning the sorted linked list
}

Node* mergeSort(Node* a) {
    if(a == NULL || a->next == NULL) //If the linked list is NULL or contains only 1 element we will return thee head of the linked list without any operation
    {
        return a;
    }
    Node* mid = midPoint(a); //To find the mid point of the linked list
    Node* aa = a; //Initializing a pointer pointing to the First node of the linked list
    Node* b = mid->next; //Initializing a pointer pointing to the 1st node of the second half of the linked list
    mid->next = NULL; //Dividing the linked list into 2 equal halves

    //Now we call the function mergeSort from each of the 2 halves of the linked list
    aa = mergeSort(a);
    b = mergeSort(b);

    Node* c = merge(aa, b);
    return c;//Returning the sorted linked list
}

//Function to print the linked list
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

//Function to push elements into the linked list
void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test; //To enter number of test cases
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n; //Enter the length of the linked list
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        a = mergeSort(a);
        printList(a);
    }
    return 0;
}
