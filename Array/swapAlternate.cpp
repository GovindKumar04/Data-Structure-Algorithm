#include <iostream>
using namespace std;

void swap_alt(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i<n-1){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    swap_alt(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
