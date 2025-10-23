#include <iostream>
#include <map>
#include <vector>

using namespace std;

// int fiboncci(int n, map<int, int> &mp)
// {
//     if (n <= 1)
//     {
//         mp[n] = n;
//         return n;
//     }
//     int a = (mp.find(n - 1) != mp.end()) ? mp[n - 1] : fiboncci(n - 1, mp);
//     int b=  (mp.find(n - 2) != mp.end()) ? mp[n - 2] : fiboncci(n - 2, mp);
    
//     mp[n] = a+b;
//     return a+b;
// }
// memozi
int fiboncci(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return n;
    }
    if(dp[n]!=-1) return dp[n];
    dp[n]=fiboncci(n-1,dp)+fiboncci(n-2,dp);
    return dp[n];
}

int main()
{
    map<int, int> mp;
    vector<int> dp(4+1,-1);
    cout << fiboncci(4,dp);
    return 0;
}