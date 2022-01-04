class LinkedList(object):
    def __init__(self):
        self.head = None

    class Node(object):
        def __init__(self,d):
            self.data = d
            self.next = null

    def swapNodes(self, x, y):
        if(x == y):
            return
        currX = self.head
        prevX = None
        while(currX != None and currX.data != x):
            prevX = currX
            currX = currX.next

        currY = self.head
        prevY = None

        while(currY != None and currY.data != y):
            prevY = currY
            currY = currY.next

        if(currX = None or currY = None):
            return
        
        if(prevX != None):
            prevX.next = currY
            else:
                currY = self.head
        if(prevY != None):
            prevY.next = currX
            else:
                currX = self.head
        
        temp = currY.next
        currX.next = currY.next
        currX = temp
    
    def push(self, d):
        new_node = Node(d)
        new_node.next = self.head
        self.head = new_node

    def printList(self):
        node = self.head
        while(node!= None):
            print(node.data + " ")
            node = node.next

__name__ == "__main__":
llist = LinkedList()
llist.push(70)
llist.push(77)
llist.push(74)
llist.push(76)
llist.push(71)
llist.push(72)

print "List before swapping"
llist.printList()

llist.swapNodes(71, 76)
print "List after calling swap nodes"
llist.printList()


