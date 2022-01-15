#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>& visited, vector<int>adjList [], vector<int>& storeDfs){
    storeDfs.push_back(node);
    visited[node] = 1;
    for (auto it : adjList[node]){
        if (!visited[it]) dfs(it, visited, adjList, storeDfs);
    }
}

vector<int>DFSTraversal(int v, vector<int>adjList []){
    vector<int>storeDfs;
    vector<int>visited(v + 1, 0);
    for (int i = 1; i <= v; i++){
        if (!visited[i]) dfs(i, visited, adjList, storeDfs);
    }
    return storeDfs;
}
int main(){



    return 0;
}