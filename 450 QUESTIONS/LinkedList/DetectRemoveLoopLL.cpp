// tc = o(n)
// Sc = o(1)

#include <iostream>
#include <map>
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

// Approch 1; tc and sc = o(n)
// It return the starting node of the loop
// bool detectLoop(Node *&head)
// {
//     if (head == NULL)
//     {
//         return false;
//     }
//     // Checking the node is visited or not
//     map<Node *, bool> visited;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (visited[temp] == true)
//         {
//             cout << "There is the loop in the ll at: " << temp->data << endl;
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }
//     return false;
// }

// approch 2 : tc = o(n) and sc = o(1)
// Floyed cycle algorithm : it return the node where both pointer meet (point of intersection) of the loop;
Node *detectLoop(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            cout << "present at: " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

// find the starting node of the loop
// Approch 1; tc = (n) and sc = o(1)
Node *getFirstNodeofLoop(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = detectLoop(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

// Remove the cycle;
void removeLoop(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *startingNode = getFirstNodeofLoop(head);
    Node *temp = startingNode;
    while (temp->next != startingNode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    insertNode(head, 1, 2);
    insertNode(head, 2, 3);
    insertNode(head, 3, 4);
    insertNode(head, 4, 6);
    insertNode(head, 6, 5);
    print(head);
    // if (detectLoop(head))
    // {
    //     cout << "loop present";
    // }
    // else
    // {
    //     cout << "no loop";
    // }
    // floyed cycle;
    // if (detectLoop(head) != NULL)
    // {
    //     cout << "loop present" << endl;
    // }
    // else
    // {
    //     cout << "no loop" << endl;
    // }
    Node *loop = getFirstNodeofLoop(head);
    cout << "First node of loop is: " << loop->data << endl;
    removeLoop(head);
    print(head);
}