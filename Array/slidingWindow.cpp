#include <iostream>
#include <vector>
using namespace std;

int minDiffrence(vector<int> arr)
{
    int s = arr.size();
    int min = INT16_MAX;
    for (int i = 0; i < s; i += 2)
    {
        // cout<<arr[i];
        // here we are making a window arr[i] and arr[i+1];

  
        // cout << min << " ";
        
        if (arr[i] - arr[i + 1] < min)
        {
            if(i==s-1) break;
            cout<<i<<" ";
            min = arr[i] - arr[i + 1];
        }
    }
    return min;
}
int main()
{
    // vector<int> arr = {2, 3, 6, 9, 12, 56,99,199,89};
    // cout << minDiffrence(arr);
    // for(int i=0; i<s; i+=2){

    // }
    int arr[]={9,12,2,11,2,2,10,9,12,10,9,11,2};
    int  x=arr[0];
    for (int i = 1; i < 13; i++)

    {
        /* code */
        x=(x^arr[i]);
    }
    cout<<x;

    return 0;
}