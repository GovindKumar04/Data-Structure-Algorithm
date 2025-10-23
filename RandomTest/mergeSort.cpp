// Merge sort with constant space  O(1)
#include <iostream>
#include <vector>

using namespace std;
vector<int> mergeSort(vector<int> arr1,int n, vector<int> arr2, int m){
    int i=n-1;
    int j=m-1;
    int k=n+m-1;
    
    while(i>=0 && j>=0){
        if(arr1[i]>=arr2[j]){
            arr1[k--]=arr1[i--];
        }else{
            arr1[k--]=arr2[j--];
        }
    }

    while(j>=0){
        arr1[k--]=arr2[j--];
    }
    return arr1;
}
int main(){
    vector<int> arr1={5,6,76,78,0,0,0,0,0};
    vector<int> arr2={4,6,7,34,89};
    vector<int> sortedArray= mergeSort(arr1,4,arr2,5);
    for(int i=0; i<sortedArray.size(); i++){
        cout<<sortedArray[i]<<" ";
    }
    return 0;
}
