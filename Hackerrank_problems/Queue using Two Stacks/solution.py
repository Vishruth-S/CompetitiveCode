class Queue:
    """
    A queue using two stacks (head and tail), the head
    stack keeps the elements in a queue order, it means
    ready to dequeue or print the top element.
    When necessary the last elements in the tail stack
    are moved to the head stack. The normalize_head method
    verify if its necessary to move elements from tail to head.
    """
    head = []
    tail = []

    def normalize_head(self):
        if not self.head:
            while self.tail:
                self.head.append(self.tail.pop())

    def enqueue(self, element):
        self.tail.append(element)

    def dequeue(self):
        self.normalize_head()
        self.head.pop()

    def print_top(self):
        self.normalize_head()
        print(self.head[-1])
            
if __name__ == '__main__':
    queue = Queue()
    total_queries = int(input())
    for _ in range(total_queries):
        query_element = input().split()
        query = int(query_element[0])
        if query == 1:
            element = int(query_element[1])
            queue.enqueue(element)
        if query == 2:
            queue.dequeue()
        if query == 3:
            queue.print_top()
