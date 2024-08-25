// Leetcode Problem No.231 - Power of Two

// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2 raise to power 'x'.

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    while (1)
    {
        if (n == 0)
        {
            return false;
            break;
        }

        if (n == 1 || n == 2)
        {
            return true;
            break;
        }

        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            return false;
            break;
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfTwo(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}