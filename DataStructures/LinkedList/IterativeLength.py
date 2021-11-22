class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList(self):
    def __init__(self):
        self.head = None

    def push(self, new_data):

        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def getCount(self):
        current = self.head
        count = 0
        while(current):
            current = current.next
            count = count + 1
        return count

if __name__ == '__main__':
    llist = LinkedList()
    llist.push(1)
    llist.push(2)
    llist.push(3)
    llist.push(4)
    print("Count of nodes is: ", llist.getCount())