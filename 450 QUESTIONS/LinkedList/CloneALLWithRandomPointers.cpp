#include <iostream>
using namespace std;

// int hello(int n)
// {
//     if (n == 0 || n == 1 || n == 2)
//     {
//         return 0;
//     }
//     if (n == 3)
//     {
//         return 1;
//     }
//     else
//     {
//         return hello(n - 1) + hello(n - 2) + hello(n - 3);
//     }
// }

// void func(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << hello(i);
//     }
// }

int func(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return func(n - 1) + func(n - 2);
}
int main()
{
    int ans = func(6);
    cout << ans;
}