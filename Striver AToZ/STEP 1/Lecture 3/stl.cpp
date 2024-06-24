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
}
int main()
{
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    explainVector();
}