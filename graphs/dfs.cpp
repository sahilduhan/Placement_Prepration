#include<bits/stdc++.h>
using namespace std;
void solve(int node, vector<int>adj [], vector<bool>& visited, vector<int>& ans){
    ans.push_back(node);
    visited[node] = true;
    for (auto it : adj[node]){
        if (!visited[it]) solve(it, adj, visited, ans);
    }
}
vector<int>dfs(vector<int>adj [], int nodes){
    vector<bool> visited(nodes, false);
    vector<int>ans;
    for (int i = 0;i < nodes;i++){
        if (!visited[i]){
            solve(i, adj, visited, ans);
        }
    }
    return ans;
}
int main(){


    return 0;
}