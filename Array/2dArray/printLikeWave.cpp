#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    // Write your code here
    int a = 0;
    vector<int> ans(nRows * mCols);
    for (int i = 0; i < nRows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < mCols; j++)
            {
                ans[a] = arr[j][i];
                cout << " i%2 ans[a] " << ans[a] << " arr[j][i] " << arr[j][i] << endl;
                a++;
            }
        }
        else
        {
            cout<<"enetred"<<endl;
            for (int j = mCols - 1; j >= 0; j--)
            {
                cout<<j<<" "<<i<<endl;
                ans[a] = arr[j][i];
                cout << " ans[a] " << ans[a] << " arr[j][i] " << arr[j][i] << endl;
                a++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3,4}, {5, 6,7,8}, {9,10,11,12}};
    vector<int> ans = wavePrint(arr, 4, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
