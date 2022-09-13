// Time Complexity: O(N)
// Auxiliary Space: O(N)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void func(string str)
{
    char n = str.length();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}

int main()
{
    string str = "hello world";
    func(str);
}

// _____________________________________________
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void func(string str)
// {
//     char n = str.length();
//     while (n--)
//     {
//         cout << str[n];
//     }
// }

// int main()
// {
//     string str = "the sky is blue";
//     func(str);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void func(string &str)
// {
//     int n = str.size();
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << str[i];
//     }
// }

// int main()
// {
//     string str;
//     cout << "ENter the string :";
//     getline(cin, str);
//     func(str);
// }