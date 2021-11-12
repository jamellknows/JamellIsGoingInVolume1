#include <cstddef>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void PrintList(Node* n)
{
    while(n != nullptr){
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node * head = nullptr;
    Node * second = nullptr;
    Node * third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = nullptr;

    printList(head);

    return 0;
}