/* Node is defined as

class Node
{
    int data;
    Node next;
    Node(int d) {data = d; next = null; }
}

*/


class Solution {
    public static boolean detectLoop(Node head){
        // Add code here
        //basic metehod we use here is we take two node fast and slow fast node will movw twice fast as slow 
        //during traversal of list we check that is value of slow and fast node are equal it means there is a loop.
        //otherwise it is not possible
        Node slow=head,fast=head;
        boolean f=false;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
            if(slow==fast){
                f=true;
                break;
            }
            
        }
        return f;
    }
}