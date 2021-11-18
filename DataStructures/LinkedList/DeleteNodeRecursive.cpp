// C++ program to delete a node in 
// singly linked list recursively

#include <cstdlib>
#include <iostream>

using namespace std;

struct node {
    int info;
    node* link = nullptr;
    node(){}
    node(int a)
        :info(a)
    {
    }
    
                      
};


// Delete the ndoe containing info as part as val and after
// the head of a linked list (recursive method)

void deleteNode(node*& head, int val)
{
    //check if list is empty or 
    // you have reached the end of the list

    if(head == nullptr){
        cout << "Element not present in list\n";
        return;

    }

    // If current node is the node to be deleted
    if(head->info == val){
        node* t = head;
        head = head->link;
        delete(t);
        return;
    }
    deleteNode(head->link, val);
}

void push(node*& head, int data)
{
    node * newNode = new node(data);
    newNode->link = head;
    head = newNode;
}

void print(node* head)
{
    //cout gets implicitly cast as a bool true
    if (head == nullptr and cout << endl)
    {
        return;
        cout << head->info << ' ';
        print(head->link);
        
    }
}

int main()
{
    node * head = nullptr;

    push(head, 10);
    push(head, 12);
    push(head, 14);
    push(head, 15);
    push(head, 16);
    push(head, 17);

    print(head);
    deleteNode(head, 17);
    print(head);

    deleteNode(head, 14);
    print(head);

    return 0;
}