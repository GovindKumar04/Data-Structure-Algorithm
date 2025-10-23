#include <iostream>
using namespace std;

bool binarySearch(int arr[], int n, int element)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] == element)
        {
            cout << "Element found at " << mid+1;
            return true;
        }

        if (arr[mid] > element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return false;
}

int main()
{

    int arr[100], n;
    int element;
    cout << "Enter the size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> element;

    if (!binarySearch(arr, n, element))
    {
        cout << "Element not found";
    }

    return 0;
}