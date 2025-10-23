#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& graph)
{
    if (graph.size() == 0)
        return;
    queue<int> q;
    q.push(start);
    vector<bool> visited(graph.size(), false);
    visited[start] = true;
    cout<<start<<" ";
    while (!q.empty())
    {
        // int size = q.size();
        int level = q.front();
        q.pop();
        for (int i = 0; i < graph.size(); i++)
        {
            if (visited[i]==false && graph[level][i]==1)
            {
                cout << i << " ";
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

void dfs(int start, vector<vector<int>> graph){
    
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
    bfs(0,graph);
    return 0;
}