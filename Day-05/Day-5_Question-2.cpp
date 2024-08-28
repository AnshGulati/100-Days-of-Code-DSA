/*
Question "9. Palindrome Number" on leetcode
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x)
{
    string str = to_string(x);

    int start = 0, end = str.length() - 1;
    while (start <= end)
    {
        if (str[start++] != str[end--])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int x = 121;
    if (isPalindrome(x))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}