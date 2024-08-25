// Leetcode Problem No.7 - Reverse Integer

// Given a signed 32-bit integer x, return x with its digits reversed.
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include <iostream>
#include <climits>
using namespace std;

int reverse(int x)
{
    int result = 0;

    while (x)
    {
        int digit = x % 10;

        if ((result > INT_MAX / 10) || (result < INT_MIN / 10))
        {
            return 0;
        }

        result = (result * 10) + digit;

        x = x / 10;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = reverse(n);
    cout << "Reversed Integer is: " << result;
}