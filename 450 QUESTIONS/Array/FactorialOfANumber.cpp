// #include <iostream>
// using namespace std;
// int func(int no)
// {
//     int res = 1;
//     for (int i = 2; i <= no; i++)
//     {
//         res *= i;
//     }
//     return res;
// }

// int main()
// {
//     int no = 5;
//     cout << "Factorial is: " << func(no);
// }

// _______________________________________________
// method 2 : Recursion
// #include <iostream>
// using namespace std;
// int func(int no)
// {
//     if (no == 1 || no == 0)
//     {
//         return 1;
//     }
//     return no * func(no - 1);
// }

// int main()
// {
//     int no = 5;
//     cout << "Factorial is: " << func(no);
// }

// _________________________________________________
// method 3 : Single line with recursion
#include <iostream>
using namespace std;
int func(int no)
{
    return (no == 0 || no == 1)
               ? 1
               : no * func(no - 1);
}

int main()
{
    int no = 5;
    cout << "Factorial is: " << func(no);
}
