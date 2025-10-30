 #include <iostream>
 #include <vector>

 using namespace std;

 int binarySearch(vector<int> &nums, int low, int high, int target){
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
 }

 int main(){
    int n;
    cin>>n;
    cout<<"\n";
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<"\nEnter the target"<<endl;
    int target;
    cin>>target;
    int a = binarySearch(arr, 0, arr.size()-1, target);
    cout<<a;
    return 0;
 }