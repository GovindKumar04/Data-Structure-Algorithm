#include <iostream>
using namespace std;
int unique_element(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    isUnique = false;
                }
            }
        }
        if (isUnique == true)
        {
            return arr[i];
        }
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << unique_element(arr, size);
}