#include<bits/stdc++.h>
using namespace std;

// undirected graphh

bool bfs(int i, vector<int>adj [], vector<bool>& visited){
    queue<pair<int, int>>q;
    visited[i] = true;
    q.push({i, -1});
    while (!q.empty()){

        int node = q.front().first;
        int par = q.front().second;

        for (auto it : adj[node]){
            if (!visited[it]) {
                visited[it] = true;
                q.push({it, node});
            }
            else if (par != it) return true;
        }
    }
    return false;
}
bool isCycle(int n, vector<int>adj []){
    vector<bool>visited(n, false);
    for (int i = 1;i <= n;i++){
        if (!visited[i]){
            if (bfs(i, adj, visited)) return true;
        }
    }
    return false;
}
int main(){


    return 0;
}