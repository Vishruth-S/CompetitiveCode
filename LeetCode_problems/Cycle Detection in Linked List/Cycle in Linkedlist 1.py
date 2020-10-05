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

# this program is using map we check wheather a node is present in map or not

'''
def iscycle(list):
    list = list.head 
    map = {}
    while list is not None:
    
    # here we are checking for node address not node data
    # so thats why we write list not list.data
    
        if list in map:
            return True
        map[list] = True
        list = list.next
    return False
'''

# Another Approach :
# using fast and Slow Pointer

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