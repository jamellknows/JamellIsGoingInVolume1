// C function to search a given key in a given BST
#include <cstdlib>
struct node* search(struct node * root, int key)
{
    //Base cases: root is null or key is present at root
    if(root == nullptr || root->key == key)
    {
        return root;
    }
    // key is greater than roots key
    if(root->key < key)
    {
        return search(root->right, key);
    }
    // key is smaller than the root's key
    return search(root->left, key);

};
