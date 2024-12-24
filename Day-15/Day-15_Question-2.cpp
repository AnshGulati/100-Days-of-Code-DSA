// Question "316. Remove Duplicate Letters" on leetcode
// OR
// Question "1081. Smallest Subsequence of Distinct Characters" on leetcode

// Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string smallestSubsequence(string s)
    {
        int freq[26] = {0};          // To count the frequency of each character
        bool included[26] = {false}; // To check if a character is included in the result
        string str;

        // Count frequency of each character
        for (char ch : s)
        {
            freq[ch - 'a']++;
        }

        for (char ch : s)
        {
            int index = ch - 'a';

            // Decrement frequency as we process the character
            freq[index]--;

            // If the character is already included, skip it
            if (included[index])
                continue;

            // Ensure lexicographical order
            while (!str.empty() && ch < str.back() && freq[str.back() - 'a'] > 0)
            {
                included[str.back() - 'a'] = false; // Mark the last character as not included
                str.pop_back();
            }

            // Add the current character and mark it as included
            str.push_back(ch);
            included[index] = true;
        }

        return str;
    }
};

int main()
{
    Solution solution;
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Smallest subsequence: " << solution.smallestSubsequence(s) << endl;
}