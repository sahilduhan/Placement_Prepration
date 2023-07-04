#include<bits/stdc++.h>
using namespace std;
bool dfs(int node, vector<int>adj [], vector<bool>& vis, vector<bool>& dfsVis){
    vis[node] = true;
    dfsVis[node] = true;

    for (auto edge : adj[node]){
        if (!vis[edge]){
            if (dfs(edge, adj, vis, dfsVis)) return true;
        }
        else if (dfsVis[edge] == true) return true;
    }
    return false;
}
int main(){



    return 0;
}