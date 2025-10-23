#include <iostream>
using namespace std;

//                                                Graph using adjencyMatrix

int main(){
    int n,m;
    cin>>n;
    cin>>m;

    int arr[n+1][n+1]={0};
    
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        arr[u][v]=1; 
        arr[v][u]=1; // If it's undirected graph 
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <=n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
 
    }
    return 0;
}