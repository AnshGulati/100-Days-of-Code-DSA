/*
Question "14. Longest Common Prefix" on leetcode
Write a function to find the longest common prefix string amongst an array of strings. If there is no common
prefix, return an empty string "".
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans = "";
    sort(strs.begin(), strs.end());
    int n = strs.size();
    string first = strs[0], last = strs[n - 1];

    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
        {
            return ans;
        }

        ans += first[i];
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
