class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

class LinkedList:

    def__init(self):
    self.head = None

    def deleteList(self):
        current = self.head

        while current:
            next = current.next

            del current.data

            current = next

    def push(self, new_data):
        new_node = Node(new_data)

        new_node.next = self.head

        self.head = new_node

if __name__ == '__main__':

    llist = LinkedList()
    llist.push(1)
    llist.push(6)
    llist.push(5)
    llist.push(4)
    llist.push(3)

    print("Deleting linked list")
    llist.deleteList()
    print("Linked list deleted")