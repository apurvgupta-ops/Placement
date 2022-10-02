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

// tc and sc =o(n);

void mergeThell(Node *&first, Node *&second)
{
    Node *curr1 = first;
    Node *curr2 = second;
    Node *next1 = curr1->next;
    Node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr1->next = curr2;
                // return first;
            }
        }
    }
    // return first;
}

void mergell(Node *&first, Node *&second)
{
    if (first == NULL)
    {
        // return second;
        cout << second->data;
    }
    if (second == NULL)
    {
        cout << first->data;
    }
    if (first->data <= second->data)
    {
        mergeThell(first, second);
    }
    else
    {
        mergeThell(second, first);
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
    Node *first = NULL;
    Node *second = NULL;
    appendNode(first, 0);
    appendNode(first, 3);
    appendNode(first, 5);
    appendNode(second, 1);
    appendNode(second, 2);
    appendNode(second, 4);
    print(first);
    print(second);
    mergell(first, second);
    // print(first);
}