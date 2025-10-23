#include <iostream>
using namespace std;

int partion(int arr[], int low, int high){
    int pivot= arr[low];
    int pivotIndex= 0;

    for(int i=0; i<high; i++){
        if(arr[i]<pivot){
            pivotIndex++;
        }
    }
    swap(arr[low],arr[pivotIndex]);
    int i=low,j=high;
    while(i<pivotIndex&& j>pivotIndex){
       if(arr[i]<pivot){
        i++;
       } 
       if(arr[j]>pivot){
        j--;
       }
       swap(arr[i],arr[j]);
    }
    return pivotIndex;
}

void quickSort(int arr[],int low, int high){
    if(low>=high){
        return ;
    }
    int parIm
}