// TC = O(N)
// SC = O(N)

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

bool value(Node *&head, int val)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == val)
        {
            return true;
        }
        curr = curr->next;
    }
    return false;
}
int getLen(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
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
    appendNode(head, 0);
    appendNode(head, 1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 4);

    print(head);
    int val = 3;
    value(head, val) ? cout << "yes" : cout << "no";
}