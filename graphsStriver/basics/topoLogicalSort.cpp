#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int>adj [], vector<bool>& vis, stack<int>& st){
    vis[node] = true;

    for (auto it : adj[node]){
        if (!vis[it]) dfs(it, adj, vis, st);
    }
    st.push(node);
}
vector<int>topoSort(int n, vector<int>adj []){
    vector<int>ans;
    vector<bool>vis;
    stack<int>st;
    for (int i = 0;i < n;i++){
        if (!vis[i]) dfs(i, adj, vis, st);
    }

    while (!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}
int main(){



    return 0;
}