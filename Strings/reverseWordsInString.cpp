#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string reverse(string a)
    {
        int s = 0;
        int e = a.length() - 1;
        while (s < e)
        {
            swap(a[s++], a[e--]);
        }
        return a;
    }

    void reverseWords(vector<char> s)
    {
        string str = "";
        vector<char> ans;
        for (char ch : s)
        {
            if (ch != ' ')
            {
                str += ch;
            }
            else
            {
                string a = reverse(str);
                int e = a.length();
                int st = 0;
                for (int i = 0; i < e; i++)
                {
                    ans.push_back(a[i]);
                }
                ans.push_back(' ');
                str = "";
            }
        }
        string a = reverse(str);
        int e = a.length();
        int st = 0;
        for (int i = 0; i < e; i++)
        {
            ans.push_back(a[i]);
        }

        int m=0;
        int n=ans.size()-1;
        while(m<n){
            swap(ans[m++],ans[n--]);
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
};

int main()
{
    Solution s;
    vector<char> a = {'w', 'u', 'y', ' ', 'd', 'd', 'q', 'u'};
    s.reverseWords(a);
    return 0;
}