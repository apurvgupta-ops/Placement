// TC = O(N)
// SC = O(N)

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

// Approach 1;
//  Node *reverse(Node *&head)
//  {
//      if (head == NULL || head->next == NULL)
//      {
//          return head;
//      }
//      Node *newhead = reverse(head->next);
//      head->next->next = head;
//      head->next = NULL;
//      return newhead;
//  }
//  Node *reversed(Node *&head)
//  {
//      return reverse(head);
//  }

// void insertAtTail(Node *&head, Node *&tail, int data)
// {
//     Node *newNode = new Node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// Node *addNodes(Node *&first, Node *&second)
// {
//     Node *anshead = NULL;
//     Node *anstail = NULL;
//     int carry = 0;
//     while (first != NULL || second != NULL || carry != 0)
//     {
//         int val1;
//         if (first != NULL)
//         {
//             val1 = first->data;
//         }
//         int val2;
//         if (second != NULL)
//         {
//             val2 = second->data;
//         }
//         int sum = carry + val1 + val2;
//         int digit = sum % 10;
//         insertAtTail(anshead, anstail, digit);
//         carry = sum / 10;
//         if (first != NULL)
//         {
//             first = first->next;
//         }
//         if (second != NULL)
//         {
//             second = second->next;
//         }
//     }
//     return anshead;
// }

// Node *addToNums(Node *&first, Node *&second)
// {
//     first = reversed(first);
//     second = reversed(second);
//     Node *ans = addNodes(first, second);
//     ans = reversed(ans);
//     return ans;
// }

// approach 2;
Node *addToNums(Node *&first, Node *&second)
{

    Node dummy(0);
    Node *curr = &dummy;
    int carry = 0;

    while (first || second || carry)
    {
        if (first)
        {
            carry += first->data;
            first = first->next;
        }
        if (second)
        {
            carry += second->data;
            second = second->next;
        }
        curr->next = new Node(carry % 10);
        carry /= 10;
        curr = curr->next;
    }

    return dummy.next;
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
    appendNode(first, 1);
    appendNode(first, 2);
    appendNode(first, 3);
    appendNode(second, 4);
    appendNode(second, 5);
    appendNode(second, 9);
    appendNode(second, 7);
    print(first);
    print(second);
    Node *data = addToNums(first, second);
    print(data);
}