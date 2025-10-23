#include <iostream>
#include <string>
#include <vector>

using namespace std;

// string checkPalindrome(vector<char> s){
//     int j=s.size()-1;
//     int i=0;
//     string filtered;
//     for (char ch : s) {
//         if (isalnum(static_cast<unsigned char>(ch))) {
//             filtered += tolower(static_cast<unsigned char>(ch));
//         }
//     }
//     cout<<filtered.length()<<filtered[0];

//     return filtered;

// }
bool checkPalindrome(string s)
{
    // Write your code here.
    string filtered;
    for (char ch : s)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            filtered += tolower(ch);
        }
    }

    int e = filtered.length() - 1;
    int st = 0;
    cout << st << " " << e << endl;
    cout << filtered << endl;
    while (st < e)
    {
        if (filtered[st] != filtered[e])
        {
            return false;
        }
        else
        {
            st++;
            e--;
        }
    }
    return true;
}

bool isPalindrome(string s)
{
    string str;
    for (char ch : s)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            str += tolower(ch);
        }
    }
    int e = str.length() - 1;
    int st = 0;
    while (st < e)
    {
        
        if (str[st] != str[e])
        {
            return false;
        }
        else
        {
            st++;
            e--;
        }
    }
    return true;
}
int main()
{
    string ch = "A man, a plan, a canal: Panama";
    // bool isPalindrome = checkPalindrome(ch);
    // cout << isPalindrome << endl;
    bool a = isPalindrome(ch);
    cout << a;
    return 0;
}