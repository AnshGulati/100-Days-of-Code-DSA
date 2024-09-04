// Question "26. Remove Duplicates from Sorted Array" on leetcode
// Given an integer array nums sorted in non-decreasing order,
// remove the duplicates in-place such that each unique element appears only once.
// The relative order of the elements should be kept the same.
// Then return the number of unique elements in nums.

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;

    vector<int> temp;
    temp.push_back(nums[0]);

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            temp.push_back(nums[i]);
        }
    }

    nums = temp;

    return nums.size();
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

    int result = removeDuplicates(arr);
    cout << "The Result is: " << result << endl;

    return 0;
}
