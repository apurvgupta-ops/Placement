// Square pattern
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledTriange(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAngledTrianleWithNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void rightAngledTrianleWithSameNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void reverseRightAngledTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void reverseRightAngledTrianleWithNumber(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (i * 2) + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void reverseTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (2 * n) - (i * 2 + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void diamond(int n)
{
    // UPPER TRIANGLE
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (i * 2) - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // LOWER TRIANGLE
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (n * 2) - (i * 2 + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void halfDiamond(int n)
{
    // UPPER TRIANGLE
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // LOWER TRIANGLE
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void alternateZeroOneInRightTriangleshape(int n)
{
    int start;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 0; j < i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

void twoJoinedRightTriangle(int n)
{
    int space = (n - 1) * 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}

void numberTriangle(int n)
{
    int count = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void alphabaticRightTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void sameAlphabaticRightTriangle(int n)
{
    for (char i = 'A'; i < 'A' + n; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void reverseAlphabaticRightTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A' + (n - i - 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void alphabaticTriangle(int n)
{
    // way 1
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (char j = 'A'; j < 'A' + i; j++)
    //     {
    //         cout << j;
    //     }
    //     for (char j = 'A' + i; j >= 'A'; j--)
    //     {
    //         cout << j;
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // way 2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (i * 2 + 1) / 2;
        for (int j = 1; j <= (i * 2) + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void rightTriangleWithSameDiagonal(int n)
{
    int count = n;
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}

void numberSquareBox(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int down = j;
            int left = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            int val1 = min(top, down);
            int val2 = min(left, right);
            cout << (n - min(val1, val2));
        }
        cout << endl;
    }
}

void hollowRectangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    // printSquare(n);
    // rightAngledTriange(n);
    // rightAngledTrianleWithNumber(n);
    // rightAngledTrianleWithSameNumber(n);
    // reverseRightAngledTriangle();
    // reverseRightAngledTrianleWithNumber(n);
    // triangle(n);
    // reverseTriangle(n);
    // diamond(n);
    // halfDiamond(n);
    // alternateZeroOneInRightTriangleshape(n);
    // twoJoinedRightTriangle(n);
    // numberTriangle(n);
    // alphabaticRightTriangle(n);
    // sameAlphabaticRightTriangle(n);
    // reverseAlphabaticRightTriangle(n);
    // alphabaticTriangle(n);
    // rightTriangleWithSameDiagonal(n);
    // numberSquareBox(n);
    hollowRectangle(n);
}