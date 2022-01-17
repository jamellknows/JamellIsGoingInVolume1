class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def reverse(self):

        temp = None
        current = head

        while(current is not None):
            temp = current.prev
            current.prev = current.next
            current.next = temp
            current = current.prev

    
        if temp is not None:
            head = temp.prev

    def push(self, data):
        node = Node(data)
        node.next = self.head

        if(self.head is not None):
            self.head.prev = node
        
        self.head = node

    def printList(self, node):
        while(node is not None):
            print(node.data + " ")
            node = node.next

if __name__ == "__main__":

     dllist = LinkedList()
     dllist.push(21)
     dllist.push(22)
     dllist.push(23)
     dllist.push(24)

     print("\n Doubly Linked List")
     dllist.printList(dllist.head)
     dllist.reverse()
     print("List after being reversed")
     dllist.printList(dllist.head)

