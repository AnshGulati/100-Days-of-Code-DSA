// Leetcode Problem No.1009 - Complement of Base 10 Integer

// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int n)
{
    // 5 (101) -> 010 (2)

    int result = 0;
    int i = 0;

    if (n == 0)
    {
        result = 1;
    }

    else
    {
        while (n)
        {
            int bit = n & 1;

            if (bit == 0)
            {
                result += pow(2, i);
            }

            n = n >> 1;
            i++;
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = bitwiseComplement(n);
    cout << "Bitwise Complement is: " << result;
}