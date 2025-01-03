// Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
// Given a data type, help Geek in finding the size of it in byte.

// Data Type - Character, Integer, Long, Float and Double

#include <iostream>
#include <string>
using namespace std;

int dataTypeSize(string str)
{
    if (str == "Character")
    {
        return sizeof(char);
    }
    else if (str == "Integer")
    {
        return sizeof(int);
    }
    else if (str == "Long")
    {
        return sizeof(long);
    }
    else if (str == "Float")
    {
        return sizeof(float);
    }
    else if (str == "Double")
    {
        return sizeof(double);
    }
    else
    {
        return -1; // Invalid input
    }
}

int main()
{
    string str;
    cout << "Enter the data type (Character, Integer, Long, Float, Double): ";
    cin >> str;

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