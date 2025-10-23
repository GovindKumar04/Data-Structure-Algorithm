#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &arr1, int m, vector<int> &arr2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }

    return arr1;
}

int main() {
    // Initialize arr1 with enough space to accommodate arr2
    vector<int> arr1 = {1, 2, 3, 4, 0, 0, 0};  // extra space represented by 0s
    vector<int> arr2 = {2, 5, 6};
    int m = 4;  // Number of actual elements in arr1
    int n = 3;  // Number of elements in arr2

    vector<int> result = merge(arr1, m, arr2, n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
