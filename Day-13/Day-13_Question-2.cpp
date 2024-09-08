// Question "680. Valid Palindrome II" on leetcode
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s, int left, int right)
{
    while (left < right)
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

bool validPalindrome(string s)
{
    int left = 0, right = s.length() - 1;

    while (left < right)
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
        }
        else
        {
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
    }

    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (validPalindrome(str))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}