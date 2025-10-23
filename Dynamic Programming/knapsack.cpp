#include <iostream>
using namespace std;
#include <vector>

// int knapsack(vector<int> &weights, vector<int> &value, int n, int w){
//     if(n<=0 || w<=0) return 0;
                   // Exclude when curr weiight is greater than given max weight
//     if(weights[n-1]>w){
//         return knapsack(weights,value,n-1, w);
//     }else{
//         int include= value[n-1]+knapsack(weights,value,n-1,w-weights[n-1]);
//         int exclude= knapsack(weights,value,n-1,w);
//         return max(include,exclude);
//     } 
// }

// OPTIMIZATION USING memeoization

int knapsack(vector<int> &weights, vector<int> &value, vector<int> &dp, int n, int w){
    if(n<=0 || w<=0) return 0;
    if(dp[n-1]!=-1) return dp[n-1];

    if(weights[n-1]>w){
        dp[n-1]=knapsack(weights,value,dp,n-1, w);
    }else{
        int include= value[n-1]+knapsack(weights,value,dp,n-1,w-weights[n-1]);
        int exclude= knapsack(weights,value,dp,n-1,w);
        dp[n-1]= max(include,exclude);
    } 
    return dp[n-1];
}


int main(){
    vector<int> weights = {1, 3, 4, 5};
    vector<int> value = {1, 4, 5, 7};
    int capacity = 7;
    int n = weights.size();
    cout << knapsack(weights, value, n, capacity) << endl; // Expected: 9
    return 0;
}