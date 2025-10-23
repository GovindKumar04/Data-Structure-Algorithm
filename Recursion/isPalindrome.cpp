#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(char a[], int i, int j)
{

    if (i >= j)
    {
        return true;
    }
    if (a[i] == a[j])
    {
        i++, j--;
    }
    else
    {

        return false;
    }

    isPalindrome(a, i, j);
}

int main()
{
    // string a= "moom";
    // cout<<a.length();
    char a[] = {'i', 'j', 'i', 'l', 'n', 'j', 'i'};
    cout << isPalindrome(a, 0, 6);
    return 0;
}