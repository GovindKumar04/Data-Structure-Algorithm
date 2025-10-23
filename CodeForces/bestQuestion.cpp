#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target)
            return mid;
        if (mid % 2 == 0)
        {
            if (mid > 0 && target == nums[mid - 1]) return mid - 1;
            else if (mid < nums.size() - 1 && target == nums[mid + 1]) return mid + 1;
            else if (mid > 0)
        }else{
            if(nums[mid]<target){
                
            }
        }
    }
}