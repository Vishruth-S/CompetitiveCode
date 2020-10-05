class Node:
    def __init__(self , dataval=None):
        self.data = dataval
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    # print linkedlist
    def listprint(self):
        printval = self.head
        while printval is not None:
            print(printval.data)
            printval = printval.next

# using fast and Slow Pointer
# logic : fast pointer take 2 step and slow pointer take 1 step then we have to loop through till fast become None and next of fast become None.
# if at some point slow and fast are matched then simply we return True ans says linkedlist contains cycle otherwise false

# we can also find mid point of linked list :
# when fast reach to last node at that time slow is at mid point of LL

def Iscycle(list):
    fast = list.head
    slow = list.head
    while(fast is not None and fast.next is not None):

        slow = slow.next  # 1 step jump
        fast = fast.next.next  # 2 step jump

        if(slow == fast):
            return True
    return False

# Creation linked list 1 3 7 4 10 2

list = LinkedList()
list.head = Node(1)
n2 = Node(3)
n3 = Node(7)
n4 = Node(4)
n5 = Node(10)
n6 = Node(2)

list.head.next = n2
n2.next = n3
n3.next = n4
n4.next = n5
n5.next = n6
n6.next = n4 # cycle


print(Iscycle(list))
