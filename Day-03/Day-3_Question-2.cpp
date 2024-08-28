/*
Question "977. Squares of a Sorted Array" on leetcode
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in
non-decreasing order.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] *= nums[i];
    }

    sort(nums.begin(), nums.end());
    return nums;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result = sortedSquares(nums);

    cout << "The sorted squares are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}