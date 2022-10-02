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

// Approach 1 : Convert the ll in the array tc and sc o(n);
// bool checkPalindrone(vector<int> arr)
// {
//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (arr[s] != arr[e])
//         {
//             return 0;
//         }
//         s++;
//         e--;
//     }
//     return 1;
// }

// bool palidrone(Node *&head)
// {
//     vector<int> arr;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }
//     return checkPalindrone(arr);
// }

// Approach 2;
Node *getMiddle(Node *&head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrone(Node *head)
{
    Node *mid = getMiddle(head);
    Node *temp = mid->next;
    mid->next = reverse(temp);
    Node *head1 = head;
    Node *head2 = mid->next;
    while (head2 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    temp = mid->next;
    mid->next = reverse(temp);
    return true;
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
    appendNode(head, 1);
    appendNode(head, 2);
    print(head);
    isPalindrone(head)
        ? cout << "true" << endl
        : cout << "false" << endl;
}