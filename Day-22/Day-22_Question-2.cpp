// Ques - Find the second largest element in the array without sorting it
// Source - GFG

#include <iostream>
#include <vector>

using namespace std;

int secondLargestElt(vector<int> &nums)
{
    int maxElt = 0;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (maxElt < nums[i])
        {
            temp = maxElt;
            maxElt = nums[i];
        }
    }

    return temp;
}

int main()
{
    int n = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elts of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = secondLargestElt(nums);
    cout << "The second largest number is: " << result << endl;
}