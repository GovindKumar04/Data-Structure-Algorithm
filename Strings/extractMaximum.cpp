#include <iostream>
#include <string>
using namespace std;

int extractMaximum(string S)
{
    // code here.
    int maxi = INT16_MIN;
    string a = "";
    for (char ch : S)
    {
        if (ch >= '0' && ch <= '9')
        {
            a += ch;
            cout<<a<<" "<<endl;
        }
        else
        {
            if (!a.empty())
            {
                maxi = max(maxi, stoi(a));
                a = "";
            }
        }
    }

    // Check the last accumulated number if the string ends with digits
    if (!a.empty())
    {
        maxi = max(maxi, std::stoi(a));
    }

    return maxi;

}

int main()
{
    string m = "648767";
    cout << stoi(m);
    cout << extractMaximum("100klh564abc365bg");
}