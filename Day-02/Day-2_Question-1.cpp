/*
Question "1190. Reverse Substrings Between Each Pair of Parentheses" on leetcode
You are given a string s that consists of lower case English letters and brackets. Reverse the strings in each pair
of matching parentheses, starting from the innermost one. Your result should not contain any brackets.
*/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string reverseParentheses(string s)
{
    int size = s.length();
    stack<char> st;

    for (int i = 0; i < size; i++) // Traversing through string
    {
        if (s[i] == ')') // We need to reverse the string inside closing brackets
        {
            string newstr = "";

            while (!st.empty() && st.top() != '(') // Reversing the elts.
            {
                newstr += st.top();
                st.pop();
            }
            st.pop(); // To remove the opening bracket

            for (auto &it : newstr)
            {
                st.push(it); // Pushing reversed elements back to the stack
            }
        }
        else
        {
            st.push(s[i]); // Pushing chars to stack until we get closing bracket
        }
    }

    // Now, we need to form the final string from the stack

    string result = "";
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    string s = "(u(love)i)";
    string result = reverseParentheses(s);
    cout << "Result: " << result << endl;
}