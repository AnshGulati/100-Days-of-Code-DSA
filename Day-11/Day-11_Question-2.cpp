// Question "283. Move Zeroes" on leetcode
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of
// the non-zero elements. Note that you must do this in-place without making a copy of the array.

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int size = nums.size();
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            nums[index++] = nums[i];
        }
    }

    for (int i = index; i < size; i++)
    {
        nums[i] = 0;
    }
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

    moveZeroes(arr);
    cout << "The Result is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
