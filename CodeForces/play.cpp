#include <iostream>
// #include <algorithm>
#include <climits>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = INT16_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int x = arr[i] + arr[j] + i - j;
                ans = min(x, ans);
            }
        }
        cout << ans;
    }

    return 0;
}