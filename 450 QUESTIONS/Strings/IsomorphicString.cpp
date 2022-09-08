// Two strings str1 and str2 are called isomorphic if there is a one-to-one mapping possible for every character of str1 to every character of str2. And all occurrences of every character in ‘str1’ map to the same character in ‘str2’.
// 1) If lengths of str1 and str2 are not same, return false.
// 2) Do following for every character in str1 and str2
//    a) If this character is seen first time in str1,
//       then current of str2 must have not appeared before.
//       (i) If current character of str2 is seen, return false.
//           Mark current character of str2 as visited.
//       (ii) Store mapping of current characters.
//    b) Else check if previous occurrence of str1[i] mapped
//       to same character.

#include <iostream>
using namespace std;

bool func(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();
    if (n != m)
        return false;
    int m1[256] = {0};
    int m2[256] = {0};
    for (int i = 0; i < n; i++)
    {
        if (!m1[str1[i]] && !m2[str2[i]])
        {
            m1[str1[i]] = str2[i];
            m2[str2[i]] = str1[i];
        }
        else if (m1[str1[i]] != str2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "aab";
    string str2 = "xxy";
    cout << func(str1, str2);
}