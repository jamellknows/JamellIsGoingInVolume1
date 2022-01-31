#include <stdlib.h>
#include <stdio.h>

struct Node 
{
    int data;
    struct Node * left, *right;

    struct Node();
    struct Node(int);
}

struct Node * newNode(int data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = item;
    new_node->left = new_node->right = NULL;
    return new_node;
}

void inorder(struct Node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->data);
    }
};

struct Node * insert(struct Node* node, int data)
{
    if(node == NULL)
    {
        return newNode(data);
    }
    if(key < node->key)
    {
        node->left = insert(node->left, key);
    }else if(key > node->key)
    {
        node->right = insert(node->data, key);
    }
    return node;
}


int main()

{
    struct Node * root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 40);
    insert(root, 50);
    insert(root, 60);
    insert(root, 70);
    insert(root, 80);

    inorder(root);

    return 0;
}