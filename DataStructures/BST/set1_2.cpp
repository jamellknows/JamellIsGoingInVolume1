#include <iostream>
#include <cstdlib>
// program demosntrating insertion
using namespace std;

class BST{
    int data; 
    BST * left, *right;

    public:
    // declare functions of creating only need types
    BST();
    BST(int); // 2 constructors
    BST* Insert(BST*, int); // insertion
    void Inorder(BST*); //printing
};

//defintions outside of class 
//default constructor
BST::BST()
: data(0)
, left(nullptr)
, right(nullptr)
{

}

//paramterised constructor

BST::BST(int d)
{
    data = d;
    left = right = nullptr;
}

BST * BST::Insert(BST* root, int value)
{
    if(!root)
    {
        //Insert the first node, if root is nullptr
        return new BST(value);
    }

    //Insert data.
    if(value > root->data)
    {
        //Insert right node data if the value is greater.
        root->right = Insert(root->right, value); //this is recursive

    }else{
        //Insert left node data if the value is less then the root node

        root->left = Insert(root->left, value);
    }

    return root;
}


void BST ::Inorder(BST* root)
{
    if(!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);

}

int main()
{
    BST b, *root = nullptr;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 70);
    b.Insert(root, 80);
    b.Insert(root, 90);
    b.Insert(root, 10);

     b.Inorder(root);

     return 0;
}
