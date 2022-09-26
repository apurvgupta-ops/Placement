#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
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
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // INSERT AT FIRST POSITION;
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *node = new Node(data);
    node->next = temp->next;
    temp->next = node;

    // INSERT AT TAIL ;
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }
}

// void deletionAtPosition(Node *&head, Node *&tail, int position)
// {
//     // DELETION FROM HEAD;
//     Node *temp = head;
//     if (position == 1)
//     {
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     // DELETION FROM POSITION
//     int count = 1;
//     while (count < position - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     temp->next = temp->next->next;

//     // DELETION FROM TAIL;
// }

void deletionAtPosition(Node *&head, int position)
{
    // DELETION FROM HEAD;
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // DELETION FROM POSITION AND TAIL
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
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
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    // print(head);
    insertAtHead(head, 20);
    insertAtTail(tail, 30);
    insertAtPosition(head, tail, 2, 25);
    print(head);
    deletionAtPosition(head, 2);
    print(head);
    cout << getLength(head);
}