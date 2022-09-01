// A string is said to be palindrome if the reverse of the string is the same as the string. For example, “abba” is a palindrome because the reverse of “abba” will be equal to “abba” so both of these strings are equal and are said to be a palindrome, but “abbc” is not a palindrome.

// Time Complexity: O(N)
// Auxiliary Space: O(N)
#include <bits/stdc++.h>
using namespace std;

string func(string str)
{
    string p = str;
    reverse(p.begin(), p.end());
    if (str == p)
    {
        cout << "Yes the given string is palindrome";
    }
    else
    {
        cout << "No";
    }
}

int main()
{
    string str = "abcdcba";
    func(str);
}