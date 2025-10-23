#include<iostream>
#include <vector>
using namespace std;

void merge(vector<int> arr, int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    merge(arr,low,mid);
    merge(arr,mid+1,high);
}
int sqrt(int x){
    int s=0;
    int e=x;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*mid<=x) return mid;
        if(e*e<mid){
            s=mid+1
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    return 0;
}