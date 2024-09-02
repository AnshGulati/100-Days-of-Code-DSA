/*
Question "628. Maximum Product of Three Numbers" on leetcode
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int n = nums.size();

    return max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);

    // This case is important when the array has negative numbers
    // because multiplying two negative numbers gives a positive product,
    // which could potentially be larger when combined with a large positive number.
}

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result = maximumProduct(arr);
    cout << "Maximum Product is: " << result << endl;

    return 0;
}