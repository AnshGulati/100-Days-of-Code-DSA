// Question "334. Reverse String" on leetcode
// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

#include <iostream>
#include <vector>
using namespace std;

void getReversedString(vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Convert string to vector<char>
    vector<char> s(input.begin(), input.end());

    cout << "String before reversal: ";
    for (char c : s)
        cout << c;
    cout << endl;

    getReversedString(s);

    cout << "String after reversal: ";
    for (char c : s)
        cout << c;
    cout << endl;

    return 0;
}