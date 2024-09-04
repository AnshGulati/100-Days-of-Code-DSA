/*
Question "238. Product of Array Except Self" on leetcode
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements
of nums except nums[i].
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    // Left product pass
    int leftProduct = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Right product pass
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return ans;
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

    vector<int> result(size);
    result = productExceptSelf(arr);
    cout << "The result is: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}