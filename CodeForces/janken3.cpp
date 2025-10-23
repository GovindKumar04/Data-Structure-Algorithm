#include <bits/stdc++.h>
#include <string>

// #define int long long
using namespace std;

int dp[200005][5];


// RSP
// 012

int solve(string str, int n, int i, int c)
{
    if (i >= str.size())
        return 0;
        

   if(dp[i][c+1] != -1) return dp[i][c+1];

        int res =INT_MIN;
    if (str[i] == 'R')
    {
        if (c != 2)
        {
            
           res = max(res, 1+ solve(str, n, i + 1, 2));
        }
        else
          res = max(res ,  solve(str, n, i + 1, 0));
    }

    if (str[i] == 'P')
    {
         if (c != 1)
        {
            
            res = max(res , 1+solve(str, n, i + 1, 1));
        }
        else
           res = max(res,  solve(str, n, i + 1,  2));
    }
    if (str[i] == 'S')
    {
        if (c != 0)
        {
            
           res = max(res , 1+ solve(str, n, i + 1,  0));
        }
        else
           res =  max(res , solve(str, n, i + 1, 1));
    }

    return  dp[i][c+1]= res;

}
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0;
    memset(dp , -1 , sizeof dp);
    cout<<solve(str,n,0 , -1);
    
    return 0;
}