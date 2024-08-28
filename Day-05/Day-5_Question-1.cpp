/*
Question "1. Two Sum" on leetcode
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to 
target.
*/


#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> result;

    for(int i=0; i<nums.size()-1; i++)
    {
        for(int j=i+1;j<nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
}

int main()
{

}