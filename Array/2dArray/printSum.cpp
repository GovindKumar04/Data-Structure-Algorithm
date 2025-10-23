#include <iostream>
#include <vector>
using namespace std;

vector<int> rowWiseSum(int arr[][3],int n, int m){
    int sum=0;
    vector<int> ans(n); 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum+=arr[i][j];
        }
        ans[i]=sum;
        sum=0;
    }
    return ans;
}

vector<int> columnWiseSum(int arr[][3],int n, int m){
    int sum=0;
    vector<int> ans(n); 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum+=arr[j][i];
        }
        ans[i]=sum;
        
        sum=0;
    }
    return ans;
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=columnWiseSum(arr,3,3);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}