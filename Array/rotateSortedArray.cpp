#include <iostream>
#include <vector>
using namespace std;


void rotate(vector<int>& nums, int k) {
        for(int i=0; i<k; i++){
            int a=nums[nums.size()-1];
            for(int j=nums.size()-1; j>=0; j--){
                nums[j+1]=nums[j];
                cout<<nums[j]<<" ";
            }
            nums[0]=a;
        }
    }
int main(){
    vector<int> arr ={-1,100,3,99};
    rotate(arr,2);
    cout<<endl;
    for(int i=0; i<arr.size(); i++){
        
        cout<<arr[i]<<" ";
    }
    return 0;
}