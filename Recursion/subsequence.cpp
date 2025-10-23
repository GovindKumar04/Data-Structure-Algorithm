#include <iostream>
#include <vector>

using namespace std;

void sub(vector<int> subsqnArray, vector<int> &arr, int size, int index)
{
    if (index >= size)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
        return;
    }
    // take the particular element into arr
    arr.push_back(subsqnArray[index]);
    sub(subsqnArray, arr, size, index+1);
    // leave the particluar element from the target
    arr.pop_back();
    sub(subsqnArray, arr, size, index+1);

}

int main()
{
    vector<int> subsqnArray = {3, 1, 2};
    vector<int> arr;
    sub(subsqnArray, arr, subsqnArray.size(), 0);
    return 0;
}