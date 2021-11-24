class Node:
    def __init__(self,key):
        self.key = key
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    def push(self, new_key):
        new_node = Node(new_key)
        new_node.next = self.head
        self.head = new_node

    def search(self, node, x):
        if(node == None):
            return False
        if(node.key == x):
            return True
        return self.search(node.next, x)
        #when calling recursive functions include self.function

if __name__ == '__main__':
    llist =  LinkedList()
    llist.push(24)
    llist.push(29)
    llist.push(25)
    llist.push(21)
    llist.push(32)

    print("yes") if llist.search(llist.head, 23) else print("no")