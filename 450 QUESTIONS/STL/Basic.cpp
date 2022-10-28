#include <bits/stdc++.h>
using namespace std;
// PAIRS
void explainPairs()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].first << " " << arr[0].second;
}
// LIST , VECTOR, AND DEQUEUE FOLLOWS SAME PRINTING PATTERN;
// VECTORS
void explainVectors()
{
    vector<int> v = {1, 2};
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.emplace_back(4);

    // VECTOR AS A PAIR
    // vector<pair<int, int>> vec;
    // vec.push_back({1, 2});
    // vec.emplace_back(1, 2);

    // for (auto it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // PRINT THE VECTOR ELEMENTS
    //  vector<int>::iterator it = v.begin();
    //  it++;
    //  cout << *it;

    vector<int> v1(5);      // size 5 vector
    vector<int> v2(5, 100); // {100,100,100,100,100}

    // PRINT ALL ELEMENTS IN THE VECTOR
    // WAY 1;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // WAY 2;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // WAY 3;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // ERASE
    v.erase(v.begin() + 1);                //{1,3,5,6,7,8,9,4}
    v.erase(v.begin() + 1, v.begin() + 4); //{1,6,7,8,9,4} [start, end)
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // INSERT FUNCIONS
    v.insert(v.begin(), 100);        // Insert 100 in the starting position
    v.insert(v.begin() + 1, 3, 200); // it insert the 200 three times at the begin+1 positions;
    for (auto i : v)
    {
        cout << i << " ";
    }

    v.clear();         // it clear the entire vector{};
    cout << v.empty(); // it show that the vector is empty or not;
    v.size();          // this gives you the size of the vector;
}

// LIST AND VECTOR IS ALMOST SAME BUT IN VECTOR INSERT FUNCTION IS EXPENSIVE AS COMPARED TO LIST PUSH_FRONT IT TAKES LESS TIME ALSO;

// LIST
void explainList()
{
    list<int> ls;
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.emplace_back(2);
    ls.push_front(1);
    for (auto i : ls)
    {
        cout << i << " ";
    }
}

// DEQUE
void explainDeque()
{
    deque<int> dq;
    dq.push_back(2);     // {2}
    dq.push_front(1);    //{1,2}
    dq.emplace_back(3);  // {1,2,3}
    dq.emplace_front(4); //{4,1,2,3}
    dq.pop_back();       //{4,1,2}
    dq.pop_front();      //{1,2};
    for (auto i : dq)
    {
        cout << i << " ";
    }
}

// STACK, QUEUE, PRIORITY QUEUE FOLLOWS SAME PRINTING PATTERN;
// STACK
void explainStack()
{
    stack<int> s;
    s.push(2);    //{2}
    s.push(3);    //{3,2}
    s.push(4);    //{4,3,2}
    s.push(5);    //{5,4,3,2}
    s.emplace(6); //{6,5,4,3,2}
    // cout << s.top(); // 6
    s.pop();         // 6 poped out
    cout << s.top(); // 5
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    s.size();
    s.empty();
    stack<int> st1, st2;
    st1.swap(st2); // swaps the elements
}

// QUEUE
void explainQueue()
{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.push(3);    // {1,2,3}
    q.push(4);    // {1,2,3,4}
    q.emplace(5); // {1,2,3,4,5};
    q.pop();      // 1 is poped out

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << q.front(); //{2}
    cout << q.back();  // {5}
    // REMAINING FUNCTION ARE SAME AS STACK
}

// PRIORITY QUEUE
// PRIORITY QUEUE IS NOT THE LINEAR DATA STRUCTURE IT FOLLOWS THE TREE STRUCTURE;
void explainPriorityQueue()
{
    // Priority queue by default apply max heap structure it means the greatest number is always on the top the priority of the largest number is the highest;
    priority_queue<int> pq;
    pq.push(2);               //{2}  //O(logn)
    pq.push(3);               //{3,2}
    pq.push(1);               //{3,2,1}
    pq.push(20);              // {20,3,2,1}
    pq.emplace(5);            //{20,5,3,2,1}
    cout << pq.top() << endl; // 20
    pq.pop();                 // 20 is poped out //O(logn)

    // For min heap the syntax as follows;
    priority_queue<int, vector<int>, greater<int>> pqu;
    pqu.push(2); //{2}
    pqu.push(1); //{1,2}
    pqu.push(8); //{1,2,8}
    pqu.push(4); //{1,2,4,8};

    cout << pqu.top(); //{1} //O(1)
    while (!pqu.empty())
    {
        cout << pqu.top() << " ";
        pqu.pop();
    }
}

// SET = O(logn)
//  SET IS NOT THE LINEAR DATA STRUCTURE IT FOLLOWS THE TREE STRUCTURE AND SET INSERT THE DATA INT SORTED AND UNIQUE FORM
void explainSet()
{

    set<int> s;
    s.insert(1); //{1}
    s.insert(2); //{1,2}
    s.insert(5); //{1,2,3}
    s.insert(4); //{1,2,3,4}
    for (auto i : s)
    {
        cout << i << " ";
    }
    auto it = s.find(5);
    cout << *it;
}

// MULTISET = o(logn)
// SAME AS SET IT STORES IN SORTED ORDER BUT NOT UNIQUE ELEMENT
void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1};
    for (auto i : ms)
    {
        cout << i << " ";
    }
}

// UNORDERED_SET = o(1)
// SAME AS SET IT STORES IN UNIQUE ORDER BUT NOT SORTED MANNER NO FIX ORDER TO STORING THE ELEMENT
void explainUnorderdSet()
{
    unordered_set<int> us;
    us.insert(1); //{1}
    us.insert(2); //{1,2}
    us.insert(4); //{1,4,2}
    us.insert(3); //{1,4,2,3}
}
int main()
{
    // explainPairs();
    // explainVectors();
    // explainList();
    // explainDeque();
    // explainStack(); // LIFO = last in first out O(1);
    // explainQueue(); // FIFO = first in first out O(1);
    // explainPriorityQueue(); // PRIORITY QUEUE IS NOT THE LINEAR DATA STRUCTURE IT FOLLOWS THE TREE STRUCTURE;
    // explainSet(); // SET IS NOT THE LINEAR DATA STRUCTURE IT FOLLOWS THE TREE STRUCTURE AND SET INSERT THE DATA IN SORTED AND UNIQUE FORM;
    // explainMultiSet(); // SAME AS SET IT STORES IN SORTED ORDER BUT NOT UNIQUE ELEMENT
    // explainUnorderdSet(); // SAME AS SET IT STORES IN UNIQUE ORDER BUT NOT SORTED MANNER
    
}
