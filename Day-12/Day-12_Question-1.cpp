// Question "121. Best Time to Buy and Sell Stock" on leetcode
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int minSoFar = prices[0];

    for(int i=0;i<prices.size();i++)
    {
        minSoFar = min(minSoFar,prices[i]);
        maxProfit = max(maxProfit, prices[i] - minSoFar);
    }

    return maxProfit;
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

    int result = maxProfit(arr);
    cout << "The Result is: " << result << endl;

    return 0;
}