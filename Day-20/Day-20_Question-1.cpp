// If the user's choice is 1, calculate the area of the circle having the given radius(R).  
// Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

double switchCase(int choice, vector<double> &arr)
{
    switch (choice)
    {
    case 1:
        return (pow(arr[0],2) * M_PI);    
        break;
    
    case 2:
        return (arr[0] * arr[1]);    
        break;
    }
}

int main()
{
    int choice;
    cout << "Enter the choice (1 or 2): ";
    cin >> choice;

    vector<double> arr;
    cout << "Enter the values of R (if choice=1) or L & B (if choice=2): ";
    for(int i=0; i?(choice==1):)
    cin >> choice;

    int result = dataTypeSize(str);
    if (result == -1)
    {
        cout << "Invalid Input";
    }
    else
    {
        cout << result;
    }

    return 0;
}