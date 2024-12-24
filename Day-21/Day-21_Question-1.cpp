// 268. Missing Number
// Given an array nums containing n distinct numbers in the range [0, n],
// return the only number in the range that is missing from the array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int elt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (elt != nums[i])
            {
                return elt;
            }
            elt++;
        }

        return elt;
    }
};

int main()
{
    Solution solution;

    int n = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elts of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = solution.missingNumber(nums);
    cout << "Missing number: " << result << endl;
}