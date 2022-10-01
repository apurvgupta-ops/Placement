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

// approach 1 : Changing the data;
// tc  =o(n)
// sc  =o(1)
// void sortll(Node *&head)
// {
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeroCount++;
//         }
//         else if (temp->data == 1)
//         {

//             oneCount++;
//         }
//         else if (temp->data == 2)
//         {
//             twoCount++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp != NULL)
//     {
//         if (zeroCount != 0)
//         {
//             temp->data = 0;
//             zeroCount--;
//             // cout << temp->data << "->"
//             //      << " ";
//         }
//         else if (oneCount != 0)
//         {

//             temp->data = 1;
//             oneCount--;
//             // cout << temp->data << "->"
//             //      << " ";
//         }
//         else if (twoCount != 0)
//         {
//             temp->data = 2;
//             twoCount--;
//             // cout << temp->data << "->"
//             //      << " ";
//         }
//         temp = temp->next;
//     }
// }

// approach 2 : changing the links;
// tc  =o(n)
// sc  =o(1)

void insertAtTail(Node *&tail, Node *&curr)
{
    tail->next = curr;
    tail = curr;
}
void sortll(Node *&head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }

    // merge the linkedlist;
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    free(zeroHead);
    free(oneHead);
    free(twoHead);
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
    appendNode(head, 0);
    appendNode(head, 2);
    appendNode(head, 2);
    appendNode(head, 1);
    print(head);
    sortll(head);
    print(head);
}