#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>adj [], vector<bool>& vis){
    vis[node] = true;
    for (auto it : adj[node]){
        if (!vis[it]) dfs(it, adj, vis);
    }
}
int main(){
    int n = 0, e = 0, count = 0;
    vector<int>adj[n + 1];
    vector<bool>vis(n + 1);
    for (int i = 0;i < n;i++){
        if (!vis[i]){
            count++;
            dfs(i, adj, vis);
        }
    }
    return 0;
}