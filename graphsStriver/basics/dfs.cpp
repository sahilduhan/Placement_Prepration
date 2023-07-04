#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>adj [], vector<bool>& vis, vector<int>& ans){
    ans.push_back(node);
    vis[node] = 1;
    for (auto edge : adj[node]){
        if (!vis[edge]) dfs(edge, adj, vis, ans);
    }
}
vector<int> dfsOfGraph(int n, vector<int> adj []) {
    vector<bool>vis(n, 0);
    vector<int>ans;
    dfs(0, adj, vis, ans);
    return ans;
}
int main(){

    int nodes, edges;
    cin >> nodes >> edges;
    vector<int>adj[nodes + 1];

    for (int i = 0;i < edges;i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}