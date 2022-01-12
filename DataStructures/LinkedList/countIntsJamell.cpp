#include <iostream>
#include <cstdlib>

using namespace std;

class Node {
    public: 
    int data;
    Node * next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

class LinkedList{
    public: 
    Node * head;
    LinkedList()
    {
        head = nullptr;
    }

    void push(int new_data)
    {
        Node * new_node = new Node(new_data);
        new_node->next = head;
        head = new_node;
    }

    int count(int x)
    {
        int count = 0;
        Node * temp = head;

        while(temp != nullptr)
        {
            if(temp->data == x)
            {
                count++;
            }
            temp = temp->next;
        }
        return count;
    }
};

int main()
{
    LinkedList * list = new LinkedList();
    list->push(2);
    list->push(2);
    list->push(2);
    list->push(2);
    list->push(2);
    cout << "The count of 2 is " << list->count(2) << endl;
    //This way is better
   
}