#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int pivotIndex = low;
    for (int i = low+1; i <= high; i++)
    {
        if (arr[i] < pivot)
            pivotIndex++;
    }
    swap(arr[low], arr[pivotIndex]);
    int i = low;
    int j = high;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int partion = partition(arr, low, high);

    quickSort(arr, low, partion - 1);
    quickSort(arr, partion + 1, high);
}
int main()
{
    vector<int> arr = {10, 80, 30, 90, 40, 50, 70};

    int high = arr.size() - 1;
    quickSort(arr, 0, high);
    for (int i = 0; i <= high; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}