#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector <int> arr,int key){
    int size= arr.size();
    int start=0,end=size-1;
    int mid= start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid] ){ // we also just right else to make it more optimized
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    vector <int> arr1 = {1,2,3,4,5};
    vector <int> arr2 = {6,10,34,55,89,95};

    cout<<"array of oddarray: "<<binarySearch(arr1, 5)<<endl;
    cout<<"array of evenarray: "<<binarySearch(arr2, 5);
}