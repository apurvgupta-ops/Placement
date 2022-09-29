#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

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

void insertNode(Node *&head, int element, int data)
{
    // empty list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        newNode->next = newNode;
    }
    // non empty list
    else
    {
        Node *curr = head;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void deletionNode(Node *&head, int value)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        Node *prev = head;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // if only one node is there
        if (curr == prev)
        {
            head = NULL;
        }
        // less then or equal to 2 nodes there;
        if (curr != prev)
        {
            head = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    do
    {
        cout << head->data
             << "->"
             << " ";
        head = head->next;
    } while (head != temp);
    cout << endl;
}

int main()
{

    Node *head = NULL;
    insertNode(head, 1, 2);
    insertNode(head, 2, 3);
    insertNode(head, 3, 4);
    insertNode(head, 4, 10);
    print(head);
    insertNode(head, 4, 5);
    insertNode(head, 5, 6);
    deletionNode(head, 3);
    print(head);
}