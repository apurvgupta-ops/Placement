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

void print(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
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

// Iterative approach
//  Node *reverseLinkedList(Node *&head)
//  {
//      if (head == NULL || head->next == NULL)
//      {
//          return head;
//      }
//      Node *prev = NULL;
//      Node *curr = head;
//      Node *forward = NULL;
//      while (curr != NULL)
//      {
//          forward = curr->next;
//          curr->next = prev;
//          prev = curr;
//          curr = forward;
//      }
//      return prev;
//  }

// Recursive approach 1;
// void reverse(Node *&head, Node *curr, Node *prev)
// {

//     if (curr == NULL)
//     {
//         head = prev;
//         return;
//     }

//     Node *forward = curr->next;
//     reverse(head, forward, curr);
//     curr->next = prev;
// }

// Node *reverseLinkedList(Node *&head)
// {

//     Node *curr = head;
//     Node *prev = NULL;
//     reverse(head, curr, prev);
//     return head;
// }

// Recursive approach 2;
Node *reverse(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
Node *reverseLinkedList(Node *&head)
{
    return reverse(head);
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
    Node *data = reverseLinkedList(head);
    print(data);
}