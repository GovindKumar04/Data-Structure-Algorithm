#include <iostream>
#include <vector>
using namespace std;


bool isPossible(vector <int> arr, int n, int m, int mid){
    int pSum=0;
    int sCount=1;
    for(int i=0; i<n; i++){
        if(pSum+arr[i]<=mid){
            pSum+=arr[i];
            cout<<"Page sum is "<<pSum<<endl;
        }else{
            sCount++;
            cout<<"Student count is "<<sCount<<endl;
            if(sCount>m || arr[i]>mid){
                return false;
            }
            pSum=0;
            pSum+=arr[i];
            cout<<"Page sum in last is"<<pSum<<endl;
        }
    }
    return true;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(n<m){
        return -1;
    }
    int s=INT8_MIN;
    for(int i=0; i<n; i++){
        if(s<arr[i]){
            s=arr[i];
        }
    }
    cout<<"Start is "<<s<<endl;
    int e=0;
    int ans=-1;
    for(int i:arr){
        e+=i;
    } 
    cout<<"End is "<<e<<endl;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            cout<<"Ans is "<<ans<<endl;
            e=mid-1;
            cout<<"End from inside is "<<e<<endl;
        }else{
            s=mid+1;
            cout<<"Start from inside is "<<s<<endl;
        }
        mid=s+(e-s)/2;
        cout<<"Mid update is "<<mid<<endl;

    }
   
    return ans;
}
int main(){
    vector <int> arr={8,15,3};
    int a=findPages(arr,3,2);
    cout<<"A is "<<a;
    return 0;
}
