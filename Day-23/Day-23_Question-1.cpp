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
            if ((num[i] - '0') % 2 == 1) // Check if the character represents an odd digit
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

int main()
{
    string num;
    cout << "Enter a large integer: ";
    cin >> num;

    Solution solution;
    string largestOdd = solution.largestOddNumber(num);

    if (largestOdd.empty())
        cout << "No odd number exists in the input string." << endl;
    else
        cout << "The largest odd number in the string is: " << largestOdd << endl;

    return 0;
}