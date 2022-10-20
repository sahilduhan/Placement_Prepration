#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(int nodes, int edges, vector<int> graph [], vector<int>& ans){
    queue<int>q;
    vector<bool>visited(nodes, 0);
    q.push(0);
    visited[0] = true;

    while (!q.empty()){
        int first = q.front();
        q.pop();
        ans.push_back(first);
        for (auto it : graph[first]){
            if (!visited[it]){
                visited[it] = true;
                q.push(it);
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
    vector<int>ans;
    bfs(nodes, edges, graph, ans);
    for (auto it : ans) cout << it << " ";
    return 0;
}

// 6 5
// 1 2
// 1 5
// 2 3
// 3 4
// 3 6
// 5 7