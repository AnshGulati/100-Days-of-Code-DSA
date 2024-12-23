// Given two integers, n and m. The task is to check the relation between n and m.
// 'lesser' if n < m
// 'equal' if n == m
// 'greater' if n > m

#include <iostream>
#include <string>
using namespace std;

string compareNM(int n, int m)
{
    if (n < m)
    {
        return "lesser";
    }
    else if (n > m)
    {
        return "greater";
    }
    else
    {
        return "equal";
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int m;
    cout << "Enter the value of m: ";
    cin >> m;

    string result = compareNM(n, m);
    cout << result << endl;

    return 0;
}