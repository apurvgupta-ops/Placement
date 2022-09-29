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
    // Destructor
    ~Node()
    {
        int value = this->data;
        // MEMORY FREE;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for value: " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {

        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, int data)
{
    Node *temp = head;
    Node *nodeToinsert = new Node(data);

    // special case for length 0
    if (temp == NULL)
    {
        head = nodeToinsert;
    }
    else
    {
        // locate the last node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = nodeToinsert;
        nodeToinsert->prev = temp;
    }
}

void insertAtPosition(Node *&head, int position, int data)
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
    while (temp->next == NULL)
    {
        insertAtTail(head, data);
        return;
    }
}

// void deleteHead(Node *&head)
// {
//     Node *temp = head;
//     head = head->next;
//     delete temp;
// }

void deleteNode(Node *&head, Node *&tail, int position, int data)
{
    // Deletion from head
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting from middle node or last node
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void Print(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
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
    insertAtTail(head, 15);
    Print(head);
    insertAtPosition(head, 1, 100);
    Print(head);
    insertAtPosition(head, 3, 200);
    Print(head);
    insertAtPosition(head, 6, 300);
    Print(head);
    Print(head);
    cout << "Length of the linked List=> " << getLength(head);
}