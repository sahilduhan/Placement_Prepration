#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int>adj [], vector<int>& dist){
    queue<int>q;
    dist[node] = 0;
    q.push(node);

    while (!q.empty()){
        int top = q.front();
        q.pop();

        for (auto it : adj[top]){
            dist[it] = min(dist[it], dist[node] + 1);
            q.push(it);
        }
    }
}
int main(){
    int n;
    vector<int>dist(n, INT_MAX);
    vector<int>adj[n];


    dfs(0, adj, dist);





    return 0;
}