#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>adj [], vector<int>& vis){
    vis[node] = 1;
    for (auto edge : adj[node]){
        if (!vis[edge]) dfs(edge, adj, vis);
    }
}
int numProvinces(vector<vector<int>> graph, int n) {

    vector<int>adj[n], vis(n, 0);

    for (int i = 0;i < graph.size();i++){
        for (int j = 0;j < graph[0].size();++j){
            if (graph[i][j] == 1 and i != j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int ans = 0;
    for (int i = 0;i < n;i++){
        if (!vis[i]){
            dfs(i, adj, vis);
            ans++;
        }
    }
    return ans;
}
int main(){



    return 0;
}