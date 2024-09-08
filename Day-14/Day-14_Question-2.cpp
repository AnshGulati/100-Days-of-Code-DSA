// Question "28. Find the index of the First Occurrence in a string" on leetcode
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    int haystackLen = haystack.length();
    int needleLen = needle.length();

    if (needleLen == 0)
        return 0;

    if (needleLen > haystackLen)
        return -1;

    for (int j = 0; j <= haystackLen - needleLen; j++)
    {
        int i = 0;
        // Compare substring of haystack with needle
        while (i < needleLen && haystack[j + i] == needle[i])
        {
            i++;
        }
        if (i == needleLen)
        {
            return j; // Found the needle, return start index
        }
    }

    return -1;
}

int main()
{
    string haystack;
    cout << "Enter haystack string: ";
    cin >> haystack;

    string needle;
    cout << "Enter needle string: ";
    cin >> needle;

    int result = strStr(haystack, needle);
    cout << "The result is: " << result << endl;

    return 0;
}