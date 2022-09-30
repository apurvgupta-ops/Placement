// tc = o(n)
// Sc = o(1)

#include <iostream>
#include <map>
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

void appendNode(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void makeLoop(Node *&head, int position)
{
    if (head == NULL)
    {
        cout << "No nodes ";
        return;
    }
    else
    {
        Node *curr = head;
        for (int i = 1; i < position; i++)
        {
            curr = curr->next;
        }
        Node *temp = curr;

        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        cout << temp->data;
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
    while (temp != NULL)
    {
        cout << temp->data << "->"
             << " ";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}

int main()
{

    Node *head = NULL;
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 6);
    appendNode(head, 4);
    appendNode(head, 5);
    print(head);
    int k = 3;
    makeLoop(head, k);
}