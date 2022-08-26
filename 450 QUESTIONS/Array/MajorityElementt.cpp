// Moore voting Algorithm (Hash Map )
// Time complexity = o(N)
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void func(vector<int> &a)
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
    cout << "Max occuring number is:" << number << "=> " << count << " Number of times";
}

int main()
{
    vector<int> a = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    func(a);
}