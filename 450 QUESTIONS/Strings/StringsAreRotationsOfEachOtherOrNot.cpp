// Given a string s1 and a string s2, write a snippet to say whether s2 is a rotation of s1?
// (eg given s1 = ABCD and s2 = CDAB, return true, given s1 = ABCD, and s2 = ACBD , return false)

#include <iostream>
using namespace std;
void func(string str1, string str2)
{
    int n = str1.length();
    int m = str2.length();
    if (n != m)
    {
        cout << "Size of both the strings are not same";
    }
    string temp = str1 + str1;
    if (temp.find(str2) != string::npos)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

int main()
{
    string str1 = "ABCDE";
    string str2 = "CDAEB";
    func(str1, str2);
}