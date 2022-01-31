class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

    def insert(root, key):
        if root is None:
            return Node(key)
        elif root.val < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
        return root
    
    def inOrder(root):
        if root:
            inOrder(root.left)
            print(root.val)
            inOrder(root.right)

if __name__ == "__main__":
    r = Node(50)
    r = insert(r, 30)
    r = insert(r, 40)
    r = insert(r, 50)
    r = insert(r, 60)
    r = insert(r, 70)
    r = insert(r, 80)
    inOrder(r)
