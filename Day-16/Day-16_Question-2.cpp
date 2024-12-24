// Ques: Union of Two Sorted Arrays

// Given two sorted arrays a[] and b[], where each array may contain duplicate elements ,
// the task is to return the elements in the union of the two arrays in sorted order.

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> findUnion(const vector<int> &a, const vector<int> &b)
{
    set<int> unionSet;

    for (int x : a)
    {
        unionSet.insert(x);
    }
    for (int x : b)
    {
        unionSet.insert(x);
    }

    vector<int> result(unionSet.begin(), unionSet.end());

    return result;
}

int main()
{
    int n1;
    cout << "Enter the size of first array: ";
    cin >> n1;

    vector<int> a(n1);
    cout << "Enter the elts of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    int n2;
    cout << "Enter the size of second array: ";
    cin >> n2;

    vector<int> b(n2);
    cout << "Enter the elts of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    vector<int> unionResult = findUnion(a, b);
    cout << "The Union of the given arrays is: ";

    for (int x : unionResult)
    {
        cout << x << " ";
    }
}