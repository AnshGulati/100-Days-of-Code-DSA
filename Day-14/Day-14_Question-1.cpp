// Question "1207. Unique Number of Occurrences" on leetcode
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    int size = arr.size();
    int counter = 0;
    vector<int> count;

    sort(arr.begin(), arr.end());
    for (int i = 1; i <= size; i++)
    {
        if (i == size)
        {
            count.push_back(counter);
        }

        else if (arr[i] == arr[i - 1])
        {
            counter++;
        }

        else
        {
            count.push_back(counter);
            counter = 0;
        }
    }

    int size2 = count.size();
    sort(count.begin(), count.end());

    for (int i = 1; i < size2; i++)
    {
        if (count[i] == count[i - 1])
        {
            return false;
        }
    }

    return true;
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

    if (uniqueOccurrences(arr))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}
