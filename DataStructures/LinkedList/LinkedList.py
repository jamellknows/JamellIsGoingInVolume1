# Node class
class Node:
    #Function to initialise the node object
    def __init__(self, data):
        self.data = data #assign data
        self.next = None # initialise as null

class LinkedList: 

    #Function to initialise the linked list object
    def __init__(self):
        self.head = None
