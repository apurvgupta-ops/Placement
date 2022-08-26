// Time complexity = o(N)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int func(vector<int> &a)
{
    int n = a.size();
    int count = 0;
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            number = a[i];
        }
        if (a[i] == number)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return number;
}

int main()
{
    vector<int> a = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    cout << "Max Occuring number is: " << func(a);
}
