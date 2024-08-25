// Leetcode Problem No.1281 - Subtract the Product and Sum of Digits of an Integer

// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int product = 1, sum = 0;

    while (n)
    {
        product *= n % 10;
        sum += n % 10;
        n /= 10;
    }

    return (product - sum);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = subtractProductAndSum(n);
    cout << "The final answer is " << result << endl;
}