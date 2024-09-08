// Question "2928. Distribute Candies Among Children I" on leetcode
// You are given two positive integers n and limit.
// Return the total number of ways to distribute n candies among 3 children such that no child gets more than limit candies.

#include <iostream>
using namespace std;

int distributeCandies(int n, int limit)
{
    int result = 0;

    for (int i = 0; i <= min(n, limit); i++)
    {
        for (int j = 0; j <= min(n - i, limit); j++)
        {
            int k = n - i - j;
            if (k <= limit)
            {
                result++;
            }
        }
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the no. of Candies: ";
    cin >> n;

    int l;
    cout << "Enter the limit upto how much candies, one children can have: ";
    cin >> l;

    int result = distributeCandies(n, l);
    cout << "The Result is: " << result << endl;

    return 0;
}