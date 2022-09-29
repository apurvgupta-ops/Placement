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

bool isCircular(Node *&head)
{
    if (head == NULL)
    {
        cout << "Empty list is a circular list";
        return false;
    }
    else
    {
        Node *temp = head->next;
        while (temp != NULL && temp != head)
        {
            temp = temp->next;
        }
        if (temp == head)
        {
            return true;
        }
        return false;
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
    insertNode(head, 10, 1);
    insertNode(head, 1, 2);
    insertNode(head, 2, 3);
    insertNode(head, 3, 4);
    insertNode(head, 4, 5);

    print(head);
    if (isCircular(head))
    {
        cout << "circular list" << endl;
    }
    else
    {
        cout << "not circular" << endl;
    }

    // cout << "Length is: " << getLen(head);
}