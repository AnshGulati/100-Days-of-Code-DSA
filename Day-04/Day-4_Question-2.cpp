/*
Question "27. Remove Element" on leetcode
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the 
elements may be changed. Then return the number of elements in nums which are not equal to val.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            temp.push_back(nums[i]);
        }
    }

    nums = temp;
    return temp.size();
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

    int val;
    cout << "Enter the value of val: ";
    cin >> val;

    int ans = removeElement(nums, val);

    cout << "The result array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "The answer is: " << ans << endl;

    return 0;
}