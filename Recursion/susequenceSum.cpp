#include <iostream>
#include <vector>

using namespace std;

void subSequenceSum(vector<int> subsqnArray, vector<int> &arr, int size, int index, int target)
{
    if (index >= size)
    {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        if (sum == target)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            
            cout << endl;
        }

        return;
    }
    // take the particular element into arr
    arr.push_back(subsqnArray[index]);
    subSequenceSum(subsqnArray, arr, size, index + 1, target);
    // leave the particluar element from the target
    arr.pop_back();
    subSequenceSum(subsqnArray, arr, size, index + 1, target);
}
int main()
{
    vector<int> subsqnArray = {3, 2, 1, 9, 1, 1, 3, 2};
    vector<int> arr;
    subSequenceSum(subsqnArray, arr, subsqnArray.size(), 0, 3);
    return 0;
}