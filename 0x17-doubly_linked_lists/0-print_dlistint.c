class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

class dlistint_t:
    def __init__(self):
        self.head = None

    def append(self, data):
        if not self.head:
            self.head = Node(data)
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = Node(data)

    def print_dlistint(self):
        current = self.head
        count = 0
        while current:
            print(current.data)
            current = current.next
            count += 1
        return count
