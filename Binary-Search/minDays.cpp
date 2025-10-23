#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isSolution(vector<int>& bloomDay, int m, int k, int mid, int size){
        int i=0;
        int count=0;
        while(i<size){
            int adj=0;
            int l=i;
            int j=0;
            while(j<k){
                if(adj+bloomDay[l]<mid){
                    adj+=bloomDay[l];
                    l++;
                    j++;
                }else{
                    i++;
                    continue;
                }
            }
            if(adj<=mid) count++;
            i=l;
        }
        return count==m ? 1 : 0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int totalBloomDayNedded= m*k;
        int size= bloomDay.size();
        if(totalBloomDayNedded>size) return -1;
        int s=1;
        int e=0;
        for(int num : bloomDay) e=max(e,num);
        while(s<e){
            int mid=s+(e-s)/2;
            if(isSolution(bloomDay,m,k,mid,size)){
                e=mid-1;
            }else{
                s=mid;
            }
        }
        return e;
    }
};

int main(){
    Solution s=  Solution();
    vector<int> nums= {1,10,3,10,2};
    int m =3, k=1;
    cout<<s.minDays(nums,m,k);

}