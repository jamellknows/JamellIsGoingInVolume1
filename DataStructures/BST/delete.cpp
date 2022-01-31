#include <cstdlib>
#include <iostream>

struct node{
    int key;
    struct node * left, * right;
}

struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = nullptr;
}

void inorder(node* node)
{
    if(node != nullptr)
    {
     inorder(node->left);
     cout<< node->data << " ";
     inorder(node->right);
    }
}

struct node* insert(struct node* node, int key)
{
    if(node == nullptr)
    {
        return newNode(key);
    }

    if(key < node->left)
    {
        node->left = insert(node->left, key);
    }else{
        node->right = insert(node->right, key);
    }

    return node;
}

struct node* minValueNode(struct node* node)
{
    struct node* current = node;
    while(current && current->left != nullptr)
    {
        current = current->left;
    }
    return current;
}

struct node* deleteNode(struct node* node, int key)
{
    if(node == nullptr)
    {
        return node;
    }

    if(key < node->key)
    {
        node->left = deleteNode(node->left, key);
    }else if(key > node->key)
    {
        node->right = deleteNode(node->right, key);
    }
    else if(node->left == nullptr and node->right == nullptr)
        {
            return nullptr;
        }
        else if(node->left == nullptr)
        {
            struct node* temp = node->right;
            free(node);
            return temp;
        }else if(node->right == nullptr)
        {
            struct node* temp = node->left;
            free(node);
            return temp;
        }

        struct node* temp = minValueNode(node->right);
        node->key = temp->key;
        node->right = deleteNode(node->right, temp->key);
    }
    return node;
}

int main()
{
    struct node* root = nullptr;

    root = insert(root, 50);
    root = insert(root, 60);
    root = insert(root, 40);
    root = insert(root, 30);
    root = insert(root, 20);

    cout << "Inorder traversal of the given tree \n";
    inorder(root);

    cout << "\nDelete 20";
    root = deleteNode(root, 20);

    cout << "Inorder traversal of the given tree after deletion";
    inorder(root);

    return 0;

}