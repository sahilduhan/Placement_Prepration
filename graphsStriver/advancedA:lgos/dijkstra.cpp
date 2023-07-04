#include<bits/stdc++.h>
using namespace std;
vector <int> dijkstra(int n, vector<vector<int>> adj [], int S){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    vector<int>dist(n, 1e9);
    pq.push({0, S});
    dist[S] = 0;
    while (!pq.empty()){
        int currDis = pq.top().first;
        int currNode = pq.top().second;
        pq.pop();
        for (auto it : adj[currNode]){
            int adjNode = it[0], edgeWeight = it[1];
            if (currDis + edgeWeight < dist[adjNode]){
                dist[adjNode] = currDis + edgeWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    for (int i = 0;i < n;i++){
        if (dist[i] == 1e9) dist[i] = -1;
    }
    return dist;
}
int main(){



    return 0;
}