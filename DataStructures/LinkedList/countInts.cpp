#include <cstdlib>
#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node * next;
     Node(int d)
    {
        data = d;
        next = nullptr;
    }
};



 void push(Node ** head_ref, int new_data)
    {
        Node * new_node = new Node(new_data);
        new_node->next = *head_ref;
        *head_ref = new_node;
    }

    int count(Node * head, int x)
    {
        Node * current = head;
        int count = 0;
        while(current != nullptr)
        {
            if(current->data == x)
            {
                count++;
            }
            current = current->next;
        }
        return count;
    }


// the better way to write this is as a whole LinkedList class

int main()
{
    Node * head = nullptr;
    
    push(&head, 2);
    push(&head, 2);
    push(&head, 2);
    push(&head, 21);
    push(&head, 4);
    push(&head, 4);
    push(&head, 4);
    push(&head, 4);
    cout << "The count of 4 is " << count(head, 4) << endl;
    return 0; 


}

