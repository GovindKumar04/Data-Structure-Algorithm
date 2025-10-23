#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int>& arr, int size){
    int s =0;
    int e= size-1;
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid +1;
        }else{
            e = mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int st, int ed, int k){
     int s=st;
    int e=ed;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]<k){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    int p = pivot(arr, n);
    if(k>=arr[p] && k <= arr[n-1]){
        return binarySearch(arr,p,n-1,k);
    }else{
        return binarySearch(arr,0,p-1,k);
    }
    // Return the position of K in ARR else return -1.
}

int main(){
    vector <int> arr;
    int n;
    cout<<"Enter the size";
    cin>>n;
    int m;
    for(int i=0; i<n; i++){
        cin>>m;
        arr.push_back(m);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the key element"<<endl;
    cin>>k;
    cout<<search(arr,n,k);
    return 0;
}
