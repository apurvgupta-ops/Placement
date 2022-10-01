

#include <iostream>
#include <bits/stdc++.h>
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
// Time Complexity: O(N2)
// Auxiliary Space: O(1)    
void removeDuplicats(Node *&head)
{
    Node *curr = head;
    Node *temp;
    Node *nodeTodelete;
    while (curr != NULL && curr->next != NULL)
    {
        temp = curr;
        while (temp->next != NULL)
        {

            if (curr->data == temp->next->data)
            {
                nodeTodelete = temp->next;
                temp->next = temp->next->next;
                free(nodeTodelete);
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "NO linkedList";
        return;
    }
    Node *temp = head;
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
    appendNode(head, 3);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 4);
    appendNode(head, 3);
    appendNode(head, 2);
    print(head);
    removeDuplicats(head);
    print(head);
}