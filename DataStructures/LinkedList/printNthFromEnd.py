class Node: 
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        

    def printNthFromLast(self, n):
        len = 0
        temp = self.head

        while temp is not None:
            temp = temp.next
            len+= 1

        if n > len:
            return 

        for i in range(0, len -n):
            temp = temp.next
        print(temp.data)

llist = LinkedList()
llist.push(20)
llist.push(4)
llist.push(27)
llist.push(30)

llist.printNthFromLast(4)
        
