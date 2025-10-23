#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int start, vector<vector<int>> graph){
    if (graph.size() == 0)
        return;
    vector<bool> visited(graph.size(), false);
    stack<int> st;
    st.push(start);
    cout<<start<<" ";
    visited[start]=true;
    while(!st.empty()){
        int level=st.top();
        st.pop();
        for(int i=0; i<graph.size(); i++){
            if(visited[i]==false && graph[level][i]==1){
                visited[i]=true;
                st.push(i);
                cout<<i<<" ";
                break;
            }
        }
    }
}

int main()
{
    vector<vector<int>> graph = {
        {0, 1, 1, 0, 0, 1},
        {1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0, 1},
        {0, 0, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0}};
    dfs(0,graph);
    return 0;
}