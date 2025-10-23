#include <iostream>
#include <vector>
using namespace std;
// can we find target in in sorted array if value are swapped at even indexex if yes how
bool binarySearch(vector<int> arr, int target){
    int s=0, e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target) return 1;
        if(mid%2==0 && arr[mid]>arr[e] && arr[s]<arr[mid-1]){
            e=arr.size()-1;
            s=mid+1;
        }else if(mid%2==0 && arr[mid]<arr[s] && arr[mid+1]){
            e=mid-1;
        }
    }
    return 0;
}
int main(){
    int n, k;
    cin>>n;
    vector<int> arr(n);
    cin>>k;
    binarySearch(arr,k);
    return 0;
}
