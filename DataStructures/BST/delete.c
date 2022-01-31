#include <stdio.h>
#include <stdlib.h>

struct node{
    int key; 
    struct node* left, * right;
}

struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
//prints left most first then moves to the right
void inorder(struct node* root)
{
    if(root!= NULL)
    {
        inorder(root->left);
        printf("%d", root->left)
        inorder(root->right);
    }
}


//Recurs until it finds an empty node; 
struct node * insert(struct node* node, int key)
{
    if(node == NULL)
    {
        return newNode(key);
    }

    if(key < node->left)
    {
        node->left = insert(node->left, key);
    }else
    {
        node->right = insert(node->right, key);
    }

    return node;
}
//finds left most node
struct node* minValue(struct node* node)
{
    struct node* current = node;
    while(current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

struct node * deleteNode(struct node* root, int key)
{
    if(root == NULL)
    {
        return root;
    }

    if(key < root->key)
    {
        root->left = deleteNode(root->left, key);
    }

    else if(key > root->key)
    {
        root->right = deleteNode(root->right, key);
    }

    else{
        if(root->left == NULL)
        {
            struct node* temp = root->right;
            free(root);
            return temp;
            //deletes the right node
        } else if(root->right == NULL)
        {
            struct node * temp = root->left;
            free(root);
            return temp;
        }
    }
// Node with 2 children finding the smallest in the right subtree
    struct node * temp = minValueNode(root->right);
//finding smallest in right sub tree copy content to root
    root->key = temp->key;

    root->right = deleteNode(root->right, temp->key);

}

int main()
{
    struct node* root = NULL;
    root = insert(root, 60);
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 30);
    root = insert(root, 20);

    printf("Inorder traversal of the given tree \n");
    inorder(root);

    printf("Delete node 20");
    root = deleteNode(root, 20);
    inorder(root);
}