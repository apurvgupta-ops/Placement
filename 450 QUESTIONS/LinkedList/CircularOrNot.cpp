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

void insertNodeAtBeginning(Node *&head, int data)
{
    Node *temp = head;
    if (temp == NULL)
    {
        Node *nodeToInsert = new Node(data);
        head = nodeToInsert;
    }
    else
    {
        Node *nodeToInsert = new Node(data);
        nodeToInsert->next = temp;
        temp = nodeToInsert;
    }
}

void appendNode(Node *&head, int data)
{
    Node *nodeToInsert = new Node(data);
    Node *temp = head;
    if (temp == NULL)
    {
        head = nodeToInsert;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nodeToInsert;
    }
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

void print(Node *head)
{
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
    insertNodeAtBeginning(head, 10);
    print(head);
    appendNode(head, 20);
    appendNode(head, 30);
    appendNode(head, 40);
    appendNode(head, 50);
    appendNode(head, 60);
    print(head);

    // cout << "Length is: " << getLen(head);
}