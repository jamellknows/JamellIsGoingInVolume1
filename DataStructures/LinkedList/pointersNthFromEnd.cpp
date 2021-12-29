#include <cstdlib>
#include <iostream>

using namespace std;

struct Node {
    int data; 
    Node * next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

struct llist {
    Node * head;
    llist() {head = nullptr;}

    // insert operation at the begining of the list

    void insertAtBegin(int val)
    {
        Node * new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void nthFromEnd(int n)
    {
        Node * main_ptr = head;
        Node * ref_ptr = head;

        if(head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        for(int i = 1; i <n; i++)
        {
            ref_ptr = ref_ptr->next;
            if(ref_ptr == nullptr)
            {
                cout << n
                << " is greater than no. of nodes in the list"
                << endl;
                return;
            }
        }

        while(ref_ptr != nullptr && ref_ptr->next != nullptr)
        {
            ref_ptr = ref_ptr->next;
            main_ptr=main_ptr->next;
        }
        cout << "Node no. " << n << " from end is: " << main_ptr->data <<endl;
     }


        void displayList()
        {
            node * temp = head;
            while(temp != nullptr)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" <<endl;
        }
    
};

int main()
{
    llist li;

    for(int i = 60; i >= 10; i -=10)
    {
        li.insertAtBegin(i);
    }
    li.displayList();

    for(int i = 1; i <= 7; i++)
    {
        li.nthFromEnd(i);
    }
    return 0;
}