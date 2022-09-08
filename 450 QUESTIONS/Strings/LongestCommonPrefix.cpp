#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(string arr[], int n)
{
    sort(arr, arr + n);
    int range = min(arr[0].size(), arr[n - 1].size());
    string first = arr[0];
    string last = arr[n - 1];
    int i;
    for (i = 0; i < range && first[i] == last[i];)
    {
        i++;
    }
    string prefix = first.substr(0, i);
    return prefix;
}

int main()
{
    string ar[] = {"geeksforgeeks", "geeks",
                   "geek", "geezer"};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << "The longest common prefix is: "
         << longestCommonPrefix(ar, n);
    return 0;
}