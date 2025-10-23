#include <iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int> &arr){
    int size= arr.size();
    int j=1;
    for(int i=1; i<size; i++){
       if(arr[i]!=arr[i-1]){
        arr[j++]=arr[i];
       }
        
    }
    return j;
}

int main(){
    vector<int> arr= {0,0,1,1,1,2,2,3,3,4};
    int a=removeDuplicate(arr);
    cout<<a;
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}