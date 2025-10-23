#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> mergeTwoSortedArray(vector <int> arr1, vector <int> arr2){
    int size1= arr1.size();
    int size2= arr2.size();

    int left = size1-1;
    int right=0;
    while(left >=0 && right<size2){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--,right++;
        }else{
            break;
        }
    }
    
}

int main(){
    vector <int> arr1={1,3,5,7};
    vector <int> arr2={2,4,6,8};
    mergeTwoSortedArray(arr1,arr2);
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<arr2.size(); i++){
        cout<<arr2[i]<<" ";
    }
 return 0;
}