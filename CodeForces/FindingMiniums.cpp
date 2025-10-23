#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>  // For INT_MAX
using namespace std;

int main()
{
    vector<int> ans;
    int a, b;
    cin >> a >> b;

    vector<int> arr(a);
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    while (i < a)
    {
        int j = 0;
        int ele = INT_MAX;
        while (j < b && i < a)
        {
            ele = min(ele, arr[i]);
            i++;
            j++;
        }
        ans.push_back(ele);
    }

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}
