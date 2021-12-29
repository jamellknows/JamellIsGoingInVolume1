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
        main_ptr = self.head
        ref_ptr = self.head

        count = 0
        if(self.head is not None):
            while(count < n):
                ref_ptr = ref_ptr.next
                count+=1
            if(ref_ptr is None):
                print("%d is greater than the no of nodes",n)
                return
        if(ref_ptr is None):
            self.head = self.head.next
            if(self.head is not None):
                print "Node no %d from the last is %d" %(n, main_ptr.data)

            while((ref_ptr is not None) and (ref_ptr.next is not None)):
                main_ptr = main_ptr.next
                ref_ptr = ref_ptr.next

            print("Node no % d from the last is % d" %(n, main_ptr.data))
if __name__ == "__main__":
    llist = LinkedList()
    llist.push(20)
    llist.push(25)
    llist.push(4)
    llist.push(35)
    llist.push(1)

    llist.printNthFromLast(4)
