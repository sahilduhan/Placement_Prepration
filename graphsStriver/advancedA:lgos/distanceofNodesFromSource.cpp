#include<bits/stdc++.h>
using namespace std;
vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src){
    vector<int> adj[N];
    for (auto edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    vector<int>dist(N, INT_MAX);
    dist[src] = 0;
    queue<int> q;
    q.push(src);
    while (!q.empty()){
        int node = q.front();
        q.pop();
        for (auto it : adj[node]){
            if (dist[node] + 1 < dist[it]){
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }
    vector<int> ans(N, -1);
    for (int i = 0;i < N;i++){
        if (dist[i] != INT_MAX) ans[i] = dist[i];
    }
    return ans;
}
int main(){



    return 0;
}