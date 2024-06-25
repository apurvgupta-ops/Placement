#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << p.second;
    cout << endl;

    pair<int, pair<int, int>> p1 = {1, {2, 4}};
    cout << p1.first << p1.second.first << p1.second.second;
    cout << endl;

    pair<int, int> arr[] = {{1, 3}, {1, 4}, {1, 5}};
    cout << arr[1].second;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // pushback and emplaceback is same, but emplaceback takes less time to add the data;

    // ? LOOP OVER THE VECTOR
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    for (auto it : v)
    {
        cout << it << " ";
    }

    // ? DELETE THE ELEMENTS FROM THE VECTOR;
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1, v.begin() + 4);

    // ? INSERT
    v.insert(v.begin(), 600);

    // ? SIZE
    v.size();

    // ? REMOVE THE LAST ELEMENT
    v.pop_back();

    // ? SWAP
    vector<int> v2;
    v.swap(v2);

    // ?CLEAR WHOLE VECTOR
    v.clear();
}

void explainList()
{
    // * List provide the front operation means it provide the function to add the data in the front of the list
    list<int> ls;
    ls.push_front(1);

    // rest of the functions are same as vector;
}

void explainDeque()
{
    // ? this is combined functions of vector and list
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.top();

    st.pop();

    // remaining all are same as vector;
}
int main()
{
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    explainVector();
}