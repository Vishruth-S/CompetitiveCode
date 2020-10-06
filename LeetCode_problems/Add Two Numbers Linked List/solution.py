'''
You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order and each of their nodes contain a single digit.
Add the two numbers and return it as a linked list.
'''

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        # init condition
        tot = l1.val + l2.val
        # If get the carry of 10's place
        carry = int(tot / 10)
        # Create new linkedlist with units place value
        l3 = ListNode(tot % 10)
        # Traverse both the linked initial linked lists once.
        p1 = l1.next
        p2 = l2.next
        p3 = l3
        # Looping through the link of linked list until one reaches the end
        while(p1 is not None or p2 is not None):
            # Additing initial carry along with sum of individual nodes
            tot = carry + (p1.val if p1 else 0) + (p2.val if p2 else 0)
            # Get carry of 10's place
            carry = int(tot/10)
            # Add node with units place value of sum
            p3.next = ListNode(tot % 10)
            # Traverse through linked list, if reached end, None is assigned
            p3 = p3.next
            p1 = p1.next if p1 else None
            p2 = p2.next if p2 else None
        # Traverse the larger linked list along with carry
        if(carry > 0):
            p3.next = ListNode(carry)
        # Return the sequence of resultant linked list
        return l3