// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

// A substring is a contiguous sequence of characters within a string.

#include <iostream>
using namespace std;

string func(string str)
{
    int n = str.length();
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] % 2 != 0)
        {
            return str.substr(0, i + 1);
        }
    }
    return " ";
}

int main()
{
    string str = "52";
    cout << func(str);
}