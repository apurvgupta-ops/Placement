#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev = NULL;
    Node *next = NULL;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at head;
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // Insert at position
    Node *temp = head;
    Node *nodeToinsert = new Node(data);
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;

    // insert at tail
    while (temp != NULL)
    {
        insertAtTail(tail, data);
        return;
    }
}

void deleteHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete temp;
}

// void deleteNode(Node*& head, Node*& tail, int position, int data){
//     //Deletion from head
//     if(position==1){

//     }
// }

void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;
    Node *head = NULL;
    Node *tail = NULL;
    Print(head);
    insertAtHead(head, 5);
    insertAtHead(head, 0);
    Print(head);
    insertAtTail(tail, 15);
    Print(head);
    insertAtPosition(head, tail, 1, 100);
    Print(head);
    insertAtPosition(head, tail, 3, 200);
    Print(head);
    // cout << getLength(head);
}