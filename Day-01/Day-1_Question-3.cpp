// Leetcode Problem No.191 - Number of 1 Bits

// Write a function that takes the binary representation of a positive integer and returns the number of
// set bits, it has (also known as the Hamming weight).

#include <iostream>
using namespace std;

int hammingWeight(int n)
{
    int count = 0;

    while (n)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = hammingWeight(n);
    cout << "The final answer is " << result << endl;
}