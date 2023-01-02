#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int>adj [], vector<bool>& vis){
    vis[node] = true;
    for (auto it : adj[node]){
        if (!vis[it]) dfs(it, adj, vis);
    }
}

int numOfProvinces(vector<int>adj [], int n, int e){
    int count = 0;
    vector<bool>vis(n, false);
    for (int i = 0;i < n;i++){
        if (!vis[i]){
            dfs(i, adj, vis);
            count++;
        }
    }
    return count;
}
int main(){
    int n, e;
    cin >> n >> e;
    vector<int>adj[n];
    for (int i = 0;i < e;i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // cout << numOfProvinces(adj, n, e) << endl;
    return 0;
}