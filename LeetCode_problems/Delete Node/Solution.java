/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public void deleteNode(ListNode node) {
        /*There is a trivial way to do this question:by traversing the list from start 
        and checking each node if its the given node to be deleted,if it is then                
        deleting it(we will also need a pointer which points to the previous node)*/
        /*since in this question we don't have access to head,we can do this by                 
        copying the value of next node (node next to the node to be deleted) to node        
        to be deleted and deleting the next node,and making this deleted node point to     
        the node which is two positions ahead*/
        int a=node.next.val;
        node.val=a;
        node.next=node.next.next;
        
    }
}