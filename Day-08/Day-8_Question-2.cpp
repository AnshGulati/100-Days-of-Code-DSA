// Question "852. Peak Index in an Mountain Array" on leetcode

// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }

            else
            {
                end = mid;
            }
        }

        return start;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;

    vector<int> arr(size);

    cout << "Input elements to Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Solution s;

    cout << "The Peak index in Mountain Array is: " << s.peakIndexInMountainArray(arr) << endl;
}