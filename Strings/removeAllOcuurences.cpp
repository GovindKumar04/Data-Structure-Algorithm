#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int i = 0, n = 0, j = 0;
        while (i < s.length())
        {
            for (j = 0; j < part.length(); j++)
            {
                if (s[n] == part[j])
                {
                    cout<<s[n]<<" "<< part[j]<<endl;
                    
                    n++;
                    
                }else{
                    break;
                }
            }
            if(j==3){
                cout<<"whoo"<<endl;
                s[i-1]=' ';
                s[i]=' ';
                s[i+1]=' ';    
            }
            j=0;
            n=i;
            i++;
        }
        cout<<s;
    }
};

int main()
{
    Solution s;
    cout << s.removeOccurrences("dabcbaabcbc","abc");
    return 0;
}