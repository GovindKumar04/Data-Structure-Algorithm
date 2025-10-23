#include <iostream>
#include <vector>
using namespace std;


int nCr(int n, int r){
    long long  a=1,b=1;
    for(int i=n; i>(n-r); i--){
        a*=i;
        b*=(n-i+1);
    }
    return a/b;
}
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0; i<numRows; i++){
            vector<int> arr;
            for(int j=0; j<=i; j++){
                arr.push_back(nCr(i,j));
            }
            ans.push_back(arr);
        }
        return ans;
    }
int main(){
   vector<vector<int>> ans=generate(12);
   for(int i=0; i<ans.size(); i++){
            for(int j=0; j<=i; j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
           
        }
    return 0;
}