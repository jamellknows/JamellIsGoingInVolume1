from logging import root


def search(self, key):
# can write with root or self depending on how it's built
    if(self.root is None or self.root.key == key):
        return self.root
    if(self.root.key < key):
        return search(self.root.key.right, key)
    return search(self.root.left, key)