// COUNT DIGIT
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int reverseNumber(int n)
{
    int reverseNumber = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
        n = n / 10;
    }
    return reverseNumber;
}

int palindroneNumber(int n)
{
    int reversedNumber = 0;
    int n2 = n;
    while (n2 > 0)
    {
        int lastDigit = n2 % 10;
        reversedNumber = (reversedNumber * 10) + lastDigit;
        n2 = n2 / 10;
    }
    if (reversedNumber == n)
        return true;
    else
        return false;
};

bool armstrongNumber(int n)
{
    int k = to_string(n).length();
    int m = n;
    int isArmstrong = 0;
    while (n > 0)
    {

        int lastDigit = n % 10;
        cout << isArmstrong << "before";
        isArmstrong += pow(lastDigit, k);
        cout << isArmstrong << "After";
        cout << "is  " << isArmstrong << endl;
        n = n / 10;
    }

    cout << m << "    " << isArmstrong;
    return isArmstrong == m ? true : false;
}

void printAllDivisors(int n)
{
    // int *divisors = new int[n];
    // int count = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         divisors[count++] = i;
    //     }
    // }
    // size = count;
    // return divisors;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Divisior is" << i << endl;
        }
    }
}

int main()
{
    int number = 12;
    int n = 12;
    printAllDivisors(n);
    // int size;
    // int *divisors = printAllDivisors(number, size);

    // cout << "Divisors of " << number << " are: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << divisors[i] << " ";
    // }
    // cout << std::endl;

    // delete[] divisors;
    // int res = countDigit(n);
    // int res = reverseNumber(n);
    // if (armstrongNumber(n))
    //     cout << "Armstrong";
    // else
    //     cout << "not an armstrong";

    // if (palindroneNumber(n))
    // {
    //     cout << "Palindrone";
    // }
    // else
    // {
    //     cout << "Not a palindrone";
    // }
}