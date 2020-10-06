# Definition for singly-linked list.
# step 1: first make the structure of the linkedlist
# step 2: create the merge function
# step 3: If l1 list has small value then add this value into list l3 otherwise add l2 value
# step 4: Repeat steps until l1 and l2 become none


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:

        prev = ListNode(0)
        root = prev

        while (l1 != None) and (l2 != None):
            if l1.val <= l2.val:
                l3 = ListNode(l1.val)
                prev.next = l3
                prev = l3
                l1 = l1.next
            else:
                l3 = ListNode(l2.val)
                prev.next = l3
                prev = l3
                l2 = l2.next
        if l1 != None:
            prev.next = l1

        if l2 != None:
            prev.next = l2

        return root.next
