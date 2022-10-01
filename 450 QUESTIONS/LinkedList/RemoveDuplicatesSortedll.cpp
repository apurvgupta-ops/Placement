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

void removeDuplicatss(Node *&head)
{
    // if (head == NULL)
    // {
    //     return;
    // }
    map<int, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited.find(temp->data) == visited.end())
        {
            cout << temp->data << "->"
                 << " ";
        }
        visited[temp->data] = true;
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}

// single pointer approach;
// Time Complexity: O(n) where n is the number of nodes in the given linked list.
// Space Complexity: O(1) , as there is no extra space used.
void removeDuplicats(Node *&head)
{
    Node *curr = head;
    Node *next_next;
    if (curr == NULL)
    {
        return;
    }
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            next_next = curr->next->next;
            free(curr->next);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
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
    appendNode(head, 2);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 3);
    appendNode(head, 3);
    appendNode(head, 4);
    print(head);
    removeDuplicats(head);
    removeDuplicatss(head);
    print(head);
}