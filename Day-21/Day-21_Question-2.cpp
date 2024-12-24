// 485. Max Consecutive Ones
// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int temp = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                temp++;
            }
            else
            {
                if (temp > count)
                {
                    count = temp;
                }
                temp = 0;
            }
        }

        if (temp > count)
        {
            count = temp;
        }

        return count;
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

    int result = solution.findMaxConsecutiveOnes(nums);
    cout << "Number of Consecutive ones: " << result << endl;
}