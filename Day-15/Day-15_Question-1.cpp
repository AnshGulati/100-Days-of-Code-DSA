// Question "442. Find all Duplicates in an Array" on leetcode
// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                result.push_back(nums[i]);
                i++;
            }
        }

        return result;
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

    vector<int> result = solution.findDuplicates(nums);
    cout << "The dulicates are: [";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ",";
    }
    cout << "]" << endl;
}