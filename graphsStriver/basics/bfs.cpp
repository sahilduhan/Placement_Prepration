#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int n, vector<int> adj []) {
    // Code here
    vector<int>ans, vis(n, 0);
    queue<int>q;
    q.push(0);
    vis[0] = 1;

    while (!q.empty()){
        int curr = q.front();
        q.pop();
        ans.push_back(curr);
        for (auto edge : adj[curr]){
            if (!vis[edge]){
                q.push(edge);
                vis[edge] = 1;
            }
        }
    }
    return ans;
}
int main(){


    int nodes, edges;
    cin >> nodes >> edges;

    vector<int>graph[nodes + 1];
    for (int i = 0;i < nodes;i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }


}