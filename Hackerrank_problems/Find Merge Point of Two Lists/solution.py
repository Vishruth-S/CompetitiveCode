#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
def findMergeNode(head1, head2):
    """
    Go forward the lists every time till the end, and
    then jumps to the beginning of the opposite list, and
    so on. Advance each of the pointers by 1 every time,
    until they meet. The number of nodes traveled from
    head1 -> tail1 -> head2 -> intersection point and
    head2 -> tail2-> head1 -> intersection point will be equal.
    """
    node1 = head1
    node2 = head2
    while node1 != node2:
        if node1.next:
            node1 = node1.next
        else:
            node1 = head2
        if node2.next:
            node2 = node2.next
        else:
            node2 = head1
    return node2.data
