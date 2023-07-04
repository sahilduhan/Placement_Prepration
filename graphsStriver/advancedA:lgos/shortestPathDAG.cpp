#include<bits/stdc++.h>
using namespace std;

void topoSort(int node, vector<pair<int, int>>adj [], vector<int>& vis, stack<int>& st){
    vis[node] = true;

    for (auto it : adj[node]){
        if (!vis[it.first]) topoSort(it.first, adj, vis, st);
    }
    st.push(node);
}
vector<int> shortestPath(int N, int M, vector<vector<int>>& edges){
    vector<pair<int, int>>adj[N];

    for (auto edge : edges){
        adj[edge[0]].push_back({edge[1], edge[2]});
    }
    stack<int>st;
    vector<int>vis(N, 0);
    for (int i = 0;i < N;i++){
        if (!vis[i]) topoSort(i, adj, vis, st);
    }

    vector <int> distance(N);
    for (int i = 0;i < N;i++) distance[i] = 1e9;
    distance[0] = 0;

    while (!st.empty()){
        int node = st.top();
        st.pop();

        for (auto it : adj[node]){
            int v = it.first, wt = it.second;
            if (distance[node] + wt < distance[v]) distance[v] = distance[node] + wt;
        }
    }
    for (int i = 0;i < N;i++){
        if (distance[i] == 1e9) distance[i] = -1;
    }
    return distance;
}
int main(){



    return 0;
}