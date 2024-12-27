// 1903. Largest Odd Number in a String

// You are given a string num, representing a large integer.
// Return the largest-valued odd integer (as a string) that is a non-empty substring of num,
// or an empty string "" if no odd integer exists.
// A substring is a contiguous sequence of characters within a string.

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {
        bool oddFound = false;
        string result;
        for (int i = num.length() - 1; i >= 0; i--)
        {
            if (num[i] % 2 == 1)
            {
                result = num.substr(0, i + 1);
                oddFound = true;
                break;
            }
        }
        if (!oddFound)
            result = "";
        return result;
    }
};