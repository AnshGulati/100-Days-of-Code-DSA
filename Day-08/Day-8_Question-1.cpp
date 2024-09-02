/*
Question "769. Max Chunks To Make Sorted" on leetcode
You are given an integer array arr of length n that represents a permutation of the integers in the range [0, n - 1].
We split arr into some number of chunks (i.e., partitions), and individually sort each chunk. After concatenating
them, the result should equal the sorted array. Return the largest number of chunks we can make to sort the array.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxChunksToSorted(vector<int> &arr)
{
    // [4,3,2,1,0] -> 1
    // [1,0,2,3,4] -> 4 ([1, 0], [2], [3], [4])

    int size = arr.size();
    int maxChunks = 0;
    int maxElt = 0; // Track the maximum element encountered in the unsorted array

    for (int i = 0; i < size; i++)
    {
        // Update the maximum element encountered so far
        maxElt = max(maxElt, arr[i]);

        // If the maximum element matches the index, we can form a chunk
        if (maxElt == i)
        {
            maxChunks++;
        }
    }

    return maxChunks;
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

    int result = maxChunksToSorted(arr);
    cout << "Max Chunks are: " << result << endl;

    return 0;
}
