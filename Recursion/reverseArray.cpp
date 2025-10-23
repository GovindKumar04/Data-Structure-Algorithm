#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &nums, int s){
    if(s>=nums.size()-s-1) return;
    swap(nums[s++],nums[nums.size()-s-1]);
    reverse(nums, s);
}

int main(){
    vector<int> nums={1,2,3,4,5,6};
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<' ';
    }
    cout<<endl;
    reverse(nums,0);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<' ';
    }
    return 0;

}
