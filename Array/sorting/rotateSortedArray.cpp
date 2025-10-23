#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> nums){
    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        cout<<nums[i]<<" ";
    }
    
}

void rotate(vector<int> nums, int k){
    vector<int> arr=nums;
    arr.capacity();

    int n=nums.size();
    for(int i=0; i<n; i++){
        if((i+k)>(n-1)){
            cout<<"nums[(i+k)%n]"<<nums[(i+k)%n]<<endl;
            arr[(i+k)%n]=nums[i];

            
        }else{
            cout<<nums[i+k]<<endl;
            
            arr[i+k]=nums[i];
        }
    }
    print(arr);
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    cout<<"size"<<arr.size()<<endl;
    rotate(arr,3);
    return 0;
}