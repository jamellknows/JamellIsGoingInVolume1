#This function is in the linked list class
#Inserts a new node after the given prev_node

def insertAfter(self, prev_node, new_data):

    #check if the given prev_node exists
    if prev_Node is None:
        print "The given previous node must be in LinkedList."
        return
    

    new_node = Node(new_data)
    new_node.next = prev_node.next
    prev_node.next = new_node