/*
Question "1717. Maximum Score From Removing Substrings" on leetcode
You are given a string s and two integers x and y. You can perform two types of operations any number of times.

Remove substring "ab" and gain x points.
Remove substring "ba" and gain y points.

Return the maximum points you can gain after applying the above operations on s.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// cdbcbbaaabab

int maximumGain(string s, int x, int y)
{
    vector<char> stack1, stack2;
    int score = 0;

    for (auto elt : s) // Traversing through string
    {
        if (!stack1.empty()) // If stack not empty
        {
            if (x > y) // If x->greater then first check all the 'ab' pairs
            {
                if (stack1.back() == 'a' && elt == 'b')
                {
                    score += x;        // Update the score
                    stack1.pop_back(); // Remove elt
                }
                else
                {
                    stack1.push_back(elt); // If match not found, add to stack
                }
            }
            else // If y->greater then first check all the 'ba' pairs
            {
                if (stack1.back() == 'b' && elt == 'a')
                {
                    score += y;        // Update the score
                    stack1.pop_back(); // Remove elt
                }
                else
                {
                    stack1.push_back(elt); // If match not found, add to stack
                }
            }
        }
        else // If stack is empty, push the elt.
        {
            stack1.push_back(elt);
        }
    }

    // 2nd Iteration to check pairs among the stack elts

    for (auto elt : stack1)
    {
        if (!stack2.empty()) // If 2nd stack not empty
        {
            if (x > y) // 'ab' pairs are all checked, hence now we will check for 'ba' pairs
            {
                if (stack2.back() == 'b' && elt == 'a')
                {
                    score += y;        // Update the score
                    stack2.pop_back(); // Remove elt
                }
                else
                {
                    stack2.push_back(elt); // If match not found, add to stack-2
                }
              }
            else // 'ba' pairs are all checked, hence now we will check for 'ab' pairs
            {
                if (stack2.back() == 'a' && elt == 'b')
                {
                    score += x;        // Update the score
                    stack2.pop_back(); // Remove elt
                }
                else
                {
                    stack2.push_back(elt); // If match not found, add to stack-2
                }
            }
        }
        else // If stack-2 is empty, push the elt.
        {
            stack2.push_back(elt);
        }
    }

    return score;
}

int main()
{
    string s = "cdbcbbaaabab";
    int score = maximumGain(s, 4, 5);
    cout << "Score: " << score;
}