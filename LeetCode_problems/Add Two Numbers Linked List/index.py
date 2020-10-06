# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        # init condition
        tot = l1.val + l2.val
        carry = int(tot / 10)
        l3 = ListNode(tot % 10)
        p1 = l1.next
        p2 = l2.next
        p3 = l3
        while(p1 is not None or p2 is not None):
            tot = carry + (p1.val if p1 else 0) + (p2.val if p2 else 0)
            carry = int(tot/10)
            p3.next = ListNode(tot % 10)
            p3 = p3.next
            p1 = p1.next if p1 else None
            p2 = p2.next if p2 else None

        if(carry > 0):
            p3.next = ListNode(carry)

        return l3
