#include<bits/stdc++.h>
using namespace std;
vector <int> dijkstra(int n, vector<vector<int>> adj [], int S){
    set<pair<int, int>>st;
    vector<int>dist(n, 1e9);
    st.insert({0, S});
    dist[S] = 0;

    while(!st.empty()){
        auto it = *(st.begin());

        int node = it.second;
        int nodeWt = it.first;
        st.erase(it);
        for(auto it: adj[node]){
            int adjNode = it[0];
            int adjNodeWt = it[1];

            if(nodeWt + adjNodeWt < dist[adjNode]){
                if(dist[adjNode] != 1e9) st.erase({dist[adjNode],adjNode});
                dist[adjNode] = nodeWt + adjNodeWt;
                st.insert({dist[adjNode],adjNode});
            }
        }  
    }
    for(int i=0;i<n;i++){
        if(dist[i] == 1e9) dist[i] = 0;
    }
    return dist;

}
int main(){



    return 0;
}