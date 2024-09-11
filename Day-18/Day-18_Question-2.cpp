// Leetcode 217. Contains Duplicate
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


// Approach-1 using Unordered Map

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return true;
            }
        }
        return false;
    }
};


// Approach-2 (If curr == prev that means we have duplicate)

class Solution2
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp[nums[i]] > 1)
            {
                return true;
            }
        }

        return false;
    }
};