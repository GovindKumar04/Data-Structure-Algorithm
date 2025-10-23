#include <iostream>
using namespace std;


int arr[]={4,2,5,1,3,7,9,87,3645,8,9};
int partion(int arr[], int low, int high){
    int pivot= arr[low];
    int pivotIndex=0;
    for(int i=0; i<=high; i++){
        if(pivot>arr[i]){
            pivotIndex++;
        }
    }
    swap(arr[low],arr[pivotIndex]);
    int i = low, j=high;
    while (i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i],arr[j]);
    }
    }
    return pivotIndex;   
}
void quickSort(int arr[], int low, int high) {
     if (low >= high) {
        return ;
         }
    // Partition the array into two subarrays and get the pivot index
    int pivotIndex = partion(arr, low, high);

     // Recursively sort the subarrays
    quickSort(arr, pivotIndex + 1, high);
    quickSort(arr, low, pivotIndex - 1); 
}

int main(){
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " "; 
    }
}
