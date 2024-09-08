// Question "20. Valid Parentheses" on leetcode
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isMatching(char a, char b)
{
    if ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'))
        return true;
    else
        return false;
}

bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            else
            {
                if (isMatching(st.top(), s[i]))
                {
                    st.pop();
                }
                else
                    return false;
            }
        }
    }

    if (st.empty())
        return true;
    else
        return false;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isValid(str))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}