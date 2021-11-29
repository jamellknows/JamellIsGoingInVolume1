class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self,new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def GetNth(self, position):
        current = self.head
        count = 0
        while(current):
            if(count == position):
                return current.data
            count+=1
            current = current.next

        assert(false)
        return 0

if __name__ == '__main__':
    llist = LinkedList()

    llist.push(11)
    llist.push(15)
    llist.push(34)
    llist.push(23)
    llist.push(21)

    n = 3
    print("Element at index 3 is:", llist.GetNth(n))
