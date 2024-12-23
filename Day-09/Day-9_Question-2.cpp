// Question "724. Find Pivot Index" on leetcode

// Given an array of integers nums, calculate the pivot index of this array.
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
// Return the leftmost pivot index. If no such index exists, return -1.

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int totalSum = 0, leftSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        totalSum += nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (leftSum == totalSum - leftSum - nums[i])
        {
            return i;
        }

        leftSum += nums[i];
    }

    // If no pivot index is found, return -1
    return -1;
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

    int result = pivotIndex(arr);
    if (result != -1)
    {
        cout << "Pivot Index is: " << result << endl;
    }
    else
    {
        cout << "No Pivot Index found" << endl;
    }

    return 0;
}
