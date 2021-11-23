class Node:

    def __init__(self, key):
        self.key = key
        self.next = None
class LinkedList:
    def __init__(self):
        self.head = None
    def push(self, new_key):
        new_node = Node(new_key)
        new_node.next = self.head
        self.head = new_node

    def search(self, x):
        current = self.head
        while current != None:
        
            if current.key == x:
                return True
            else:
                current = current.next
                return False
            
        
if __name__ == '__main__':

    llist = LinkedList()

    llist.push(10)
    llist.push(15)
    llist.push(13)
    llist.push(21)

    print("yes") if llist.search(21) else print("no")