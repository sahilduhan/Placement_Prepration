#include<bits/stdc++.h>
using namespace std;
int ans = 0;
void dfs(int start, int dest, vector<int>adj [], vector<bool>& vis){
    vis[start] = true;
    if (start == dest) ans++;
    for (auto node : adj[start]){
        if (!vis[node]) dfs(node, dest, adj, vis);
    }
    vis[start] = false;
}
int countPaths(int V, vector<int> adj [], int start, int dest) {
    vector<bool>vis(V, 0);
    dfs(start, dest, adj, vis);
    return ans;
}
int main(){
    return 0;
}