#include<bits/stdc++.h>
using namespace std;
class Solution {

  public:
    void topoSort(int i, vector<pair<int,int>>adj[], vector<bool>&vis, stack<int>&st){
        vis[i] = true;
        for(auto it : adj[i]){
            int v = it.first;
            if(!vis[v]) topoSort(v,adj,vis,st);
        }
        st.push(i);
    }
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<pair<int,int>>adj[N];
        for(int i=0;i<N;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v,wt});
        }
        vector<bool>vis(false);
        stack<int>st;
        for(int i=0;i<N;i++){
            if(!vis[i]){
                topoSort(i,adj,vis,st);
            }
        }
        vector<int>dist(N,INT_MAX);

        while(!st.empty()){
            int node = st.top();
            st.pop();

            for(auto it : adj[node]){
                int v = it.first;
                int wt = it.second;
                if(dist[node] + wt < dist[v]) dist[v] = dist[node] + wt;
            }
        }
        for(int i=0;i<N;i++){
            if(dist[i] == INT_MAX) dist[i] = 0;
        }

    }
};
int main(){



    return 0;
}