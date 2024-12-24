#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        int n = nums.size();
        if (n > 1)
        {
            sort(nums.begin(), nums.end());

            for (int i = 0; i < n - 1; i += 2)
            {
                if (nums[i] != nums[i + 1])
                {
                    return nums[i];
                }
            }
        }

        return nums[n - 1];
    }

    // 2nd Approach

    // int singleNumber(vector<int> &nums)
    // {
    //     int result = 0;

    //     for (auto x : nums)
    //     {
    //         result = result ^ x;
    //     }
    //     return result;
    // }
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

    int result = solution.singleNumber(nums);
    cout << "The single number is: " << result << endl;
}