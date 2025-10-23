#include <iostream>
#include <vector>
#include <string>

using namespace std;

string replaceSpaces(string str)
{
    string temp = "";
    for (char ch : str)
    {
        if (ch == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(ch);
        }
    }
    return temp;
}

int main()
{
    cout << replaceSpaces("hello world");
    return 0;
}