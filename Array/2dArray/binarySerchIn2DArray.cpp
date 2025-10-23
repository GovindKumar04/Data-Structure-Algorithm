#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<vector<int>> arr,int target){
    int row=arr.size();
    int col=arr[0].size();

    int s=0;
    int e=row*col-1;

    int mid=s+(e-s)/2;
    while(s<=e){
        int element= arr[mid/col][mid%col];
        if(element==target) return 1;
        if(element>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

int main(){
    vector<vector<int>> arr = {
        {1, 3, 5, 7},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        };
    
    int a=binarySearch(arr,45);
    cout<<"result "<<a;
    return 0;
}