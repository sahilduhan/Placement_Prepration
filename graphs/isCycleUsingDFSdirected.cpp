#include<bits/stdc++.h>
using namespace std;
bool solve(int node, vector<int>adj [], vector<bool>& visited, vector<bool>& bfsVisied){
    visited[node] = true;
    bfsVisied[node] = true;
    for (auto it : adj[node]){
        if (!visited[it]){
            if (solve(it, adj, visited, bfsVisied)) return true;
        }
        else if (bfsVisied[it] == true) return true;
    }
    bfsVisied[node] = false;
    return false;
}
bool isCycle(int nodes, vector<int>adj []){
    vector<bool>visied(nodes, false);
    vector<bool>bfsVisited(nodes, false);
    for (int i = 0;i < nodes;i++){
        if (!visied[i] and solve(i, adj, visied, bfsVisited)) return true;
    }
    return false;
}
int main(){

    return 0;
}