/*
Question "169. Majority Element" on leetcode
Given an array nums of size n, return the majority element. The majority element is the element that appears more
than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int i = 0;
    int n = floor(nums.size() / 2);
    sort(nums.begin(), nums.end());
    return nums[n];
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int result = majorityElement(nums);
    cout << result;
}