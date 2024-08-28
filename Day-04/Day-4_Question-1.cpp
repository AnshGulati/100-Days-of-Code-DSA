/*
Question "189. Rotate Array" on leetcode
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = nums[i];
    }

    nums = temp;
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

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    rotate(nums, k);

    cout << "The sorted squares are: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}