/*
Question "88. Merge Sorted Array" on leetcode
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
*/

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int size = m+n;
    for(int i=0;i<size;i++)
    {
        if(m<size)
        {
            nums1[m++] = nums2[i];
        }
    }

    sort(nums1.begin(), nums1.end());
}