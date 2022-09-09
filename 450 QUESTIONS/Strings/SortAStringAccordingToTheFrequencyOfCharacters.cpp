// Given a string str, the task is to sort the string according to the frequency of each character, in ascending order. If two elements have the same frequency, then they are sorted in lexicographical order.

// Time Complexity: O(n2)
// Auxiliary Space: O(n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countFreq(string str, char ch)
{
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    return count;
}

void func(string str)
{
    int n = str.length();
    vector<pair<int, char>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(countFreq(str, str[i]), str[i]));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << " ";
    }
}

int main()
{
    string str = "dsdfsadffds";
    func(str);
}